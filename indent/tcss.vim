" Only load this indent file when no other was loaded.
if exists("b:did_indent")
  finish
endif
let b:did_indent = 1

setlocal indentexpr=GetTCSSIndent(v:lnum)
setlocal indentkeys+=0{,0},!^F,o,O,e
setlocal smartindent
setlocal shiftwidth=2
setlocal softtabstop=2
setlocal expandtab

" Only define the function once.
if exists("*GetTCSSIndent")
  finish
endif

function! GetTCSSIndent(lnum)
  " Get the line to be indented
  let line = getline(a:lnum)
  
  " Get the previous line
  let prevlnum = prevnonblank(a:lnum - 1)
  let prevline = getline(prevlnum)
  
  " Hit the start of the file, use zero indent
  if prevlnum == 0
    return 0
  endif
  
  " Start with the indentation from the previous line
  let ind = indent(prevlnum)
  
  " Increase indent after lines ending in {
  if prevline =~ '{$'
    let ind = ind + shiftwidth()
  endif
  
  " Decrease indent on lines containing only }
  if line =~ '^\s*}'
    let ind = ind - shiftwidth()
  endif
  
  return ind
endfunction
