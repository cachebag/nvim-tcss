" Vim syntax highlighting for TCSS
syntax keyword tcssProperty color background font-size
syntax match tcssSelector "^[a-zA-Z0-9_.-]*"

highlight link tcssProperty Keyword
highlight link tcssSelector Identifier

