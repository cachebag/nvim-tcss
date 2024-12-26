# TCSS Syntax Highlighting for Neovim

This plugin provides Tree-sitter-based syntax highlighting for `.tcss` files and embedded TCSS in Python.

## Features
- Syntax highlighting for `.tcss` files.
- Highlighting of `CSS` and `DEFAULT_CSS` variables in Python.

## Installation

### Using packer.nvim
```lua
use {
    'your-username/tcss-nvim-plugin',
    requires = { 'nvim-treesitter/nvim-treesitter' },
    config = function()
        require('tcss').setup()
    end,
}

