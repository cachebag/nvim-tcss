local M = {}

-- Default configuration
M.config = {
    -- Enable syntax highlighting by default
    enable = true,
    -- Override colors (optional)
    colors = {
        -- Add custom color overrides here
    },
}

-- Setup function that users will call
function M.setup(opts)
    -- Merge user config with defaults
    M.config = vim.tbl_deep_extend('force', M.config, opts or {})

    -- Set up auto-commands
    vim.cmd([[
        augroup tcss_syntax
            autocmd!
            autocmd FileType tcss setlocal commentstring=#\ %s
        augroup END
    ]])
end

return M
