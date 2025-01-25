# nvim-tcss

A Neovim plugin for Textual CSS (.tcss) syntax highlighting as seen on [transcendent-textual](https://github.com/Textualize/transcendent-textual).

## Features

- 🎨 Full syntax highlighting for .tcss files
- 🌈 Support for ANSI and web colors
- 📐 Proper highlighting of Textual-specific properties
- 💫 Variable highlighting
- 🔧 Function support (rgb, rgba, hsl, hsla)
- 🔍 Automatic file type detection

## Installation

Using [packer.nvim](https://github.com/wbthomason/packer.nvim):

```lua
use {
    'cachebag/nvim-tcss',
    config = function()
        require('tcss').setup()
    end
}
```

Using lazy.nvim:
```lua
{
    'cachebag/nvim-tcss',
    config = true
}

require('tcss').setup({
    -- Enable syntax highlighting (default: true)
    enable = true,
    
    -- Custom color overrides
    colors = {
        -- Add custom highlighting rules here
    }
})
```
