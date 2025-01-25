vim.cmd([[
    augroup tcss_ft
        autocmd!
        autocmd BufNewFile,BufRead *.tcss setfiletype tcss
    augroup END
]])
