# nvim-tcss
A Neovim plugin for Textual CSS (.tcss) syntax highlighting as seen on [transcendent-textual](https://github.com/Textualize/transcendent-textual).
![image](https://github.com/user-attachments/assets/5ebc65af-417b-4b04-a886-ce8279c2f268)


## Features
- 🎨 Full syntax highlighting for .tcss files
- 🌈 Support for ANSI and web colors
- 📐 Proper highlighting of Textual-specific properties
- 💫 Variable highlighting
- 🔧 Function support (rgb, rgba, hsl, hsla)
- 🔍 Automatic file type detection

## Installation

### Using [packer.nvim](https://github.com/wbthomason/packer.nvim)
```lua
use {
    'cachebag/nvim-tcss',
    build = "npm install",
    config = function()
        require('tcss').setup()
    end
}
```

### Using [lazy.nvim](https://github.com/folke/lazy.nvim)
```lua
{
    'cachebag/nvim-tcss',
    build = "npm install",
    config = true
}
```

### Using [vim-plug](https://github.com/junegunn/vim-plug)
```vim
Plug 'cachebag/nvim-tcss', { 'do': 'npm install' }

" After installation, in your init.vim/init.lua:
lua require('tcss').setup()
```

### Using [dein.vim](https://github.com/Shougo/dein.vim)
```vim
call dein#add('cachebag/nvim-tcss')
```

### Using [minpac](https://github.com/k-takata/minpac)
```vim
call minpac#add('cachebag/nvim-tcss')
```

### Using [vim-pathogen](https://github.com/tpope/vim-pathogen)
```bash
cd ~/.vim/bundle
git clone https://github.com/cachebag/nvim-tcss.git
```

## Configuration
```lua
require('tcss').setup({
    -- Enable syntax highlighting (default: true)
    enable = true,
    
    -- Custom color overrides
    colors = {
        -- Add custom highlighting rules here
    }
})
```
