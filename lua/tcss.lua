local M = {}

-- Plugin configuration
function M.setup(opts)
    opts = opts or {}
    
    -- Ensure the parser is installed
    local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
    parser_config.tcss = {
        install_info = {
            url = "https://github.com/yourusername/tree-sitter-tcss", -- Update with your repo
            files = {"src/parser.c"},
            branch = "main",
            generate_requires_npm = false,
            requires_generate_from_grammar = false,
        },
        filetype = "tcss",
    }

    -- Set up filetype detection
    vim.filetype.add({
        extension = {
            tcss = "tcss",
        },
    })

    -- Set up treesitter configuration
    require('nvim-treesitter.configs').setup({
        ensure_installed = { "tcss" },
        highlight = {
            enable = true,
            additional_vim_regex_highlighting = false,
        },
    })

    -- Link treesitter highlights to colorscheme highlights
    local links = {
        ['entity.name.tag.widget'] = '@type',
        ['entity.other.attribute-name.class'] = '@property',
        ['entity.other.attribute-name.id'] = '@constant',
        ['entity.name.tag.nesting-selector'] = '@keyword',
        ['support.type.property-name'] = '@property',
        ['constant.numeric'] = '@number',
        ['constant.other.color.rgb-value.hex'] = '@constant',
        ['support.constant.color.w3c-standard-color-name'] = '@constant',
        ['support.constant.color.ansi'] = '@constant',
        ['support.constant.property-value'] = '@constant',
        ['string'] = '@string',
        ['variable'] = '@variable',
        ['support.function.misc'] = '@function',
        ['comment.block'] = '@comment',
        ['comment.line'] = '@comment',
        ['keyword.operator.combinator'] = '@operator',
        ['punctuation.separator.key-value'] = '@punctuation.delimiter',
        ['punctuation.terminator.rule'] = '@punctuation.delimiter',
    }

    for from, to in pairs(links) do
        vim.api.nvim_set_hl(0, from, { link = to, default = true })
    end
end

return M
