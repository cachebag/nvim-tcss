" Quit when a syntax file was already loaded
if exists("b:current_syntax")
  finish
endif

" Case sensitive
syntax case match

" Comments
syntax match tcssComment "#.*$" contains=@Spell
syntax region tcssBlockComment start="/\*" end="\*/" contains=@Spell fold

" Variables
syntax match tcssVariable "\$[A-Za-z_-][A-Za-z0-9_-]*"
syntax match tcssVariableDefinition "^\$[A-Za-z_-][A-Za-z0-9_-]*\s*:" contains=tcssVariable,tcssColon

" Property Names
syntax keyword tcssPropertyName contained 
    \ align align-horizontal align-vertical background border
    \ border-bottom border-left border-right border-top
    \ border-subtitle-align border-subtitle-background
    \ border-subtitle-color border-subtitle-style
    \ border-title-align border-title-background
    \ border-title-color border-title-style
    \ box-sizing color column-span constrain
    \ content-align content-align-horizontal content-align-vertical
    \ display dock grid-columns grid-gutter grid-rows grid-size
    \ height keyline layer layers layout
    \ link-background link-background-hover
    \ link-color link-color-hover link-style link-style-hover
    \ margin margin-bottom margin-left margin-right margin-top
    \ max-height max-width min-height min-width
    \ offset offset-x offset-y opacity
    \ outline outline-bottom outline-left outline-right outline-top
    \ overflow overflow-x overflow-y overlay
    \ padding padding-bottom padding-left padding-right padding-top
    \ row-span
    \ scrollbar-background scrollbar-background-active
    \ scrollbar-background-hover scrollbar-color
    \ scrollbar-color-active scrollbar-color-hover
    \ scrollbar-corner-color scrollbar-gutter
    \ scrollbar-size scrollbar-size-horizontal scrollbar-size-vertical
    \ text-align text-opacity text-style tint visibility width

" Property Values
syntax keyword tcssPropertyValue contained
    \ ascii auto blank block bold border-box both bottom
    \ center content-box dashed double end grid heavy hidden
    \ hkey horizontal inflect initial inner italic justify
    \ left middle none outer panel reverse right round
    \ screen scroll solid stable start strike tall thick
    \ top underline vertical visible vkey wide x y

" Color Keywords
syntax keyword tcssColorKeyword contained
    \ ansi_black ansi_blue ansi_bright_black ansi_bright_blue
    \ ansi_bright_cyan ansi_bright_green ansi_bright_magenta
    \ ansi_bright_red ansi_bright_white ansi_bright_yellow
    \ ansi_cyan ansi_green ansi_magenta ansi_red ansi_white
    \ ansi_yellow auto black blue fuchsia gray green lime
    \ maroon navy olive orange purple red silver teal white yellow

" Numbers and Units
syntax match tcssNumber "\<\d*\.\d\+\>" contained
syntax match tcssNumber "\<\d\+\>" contained
syntax match tcssPercentage "\<\d\+\%(\.\d\+\)\?%" contained
syntax match tcssUnit "\%(fr\|h\|vh\|vw\|w\)\>" contained

" Colors
syntax match tcssHexColor "#[0-9A-Fa-f]\{3\}\>" contained
syntax match tcssHexColor "#[0-9A-Fa-f]\{4\}\>" contained
syntax match tcssHexColor "#[0-9A-Fa-f]\{6\}\>" contained
syntax match tcssHexColor "#[0-9A-Fa-f]\{8\}\>" contained

" Functions
syntax region tcssFunction contained
    \ start="\<\%(rgb\|rgba\|hsl\|hsla\)\s*("rs=e-1
    \ end=")"
    \ contains=tcssNumber,tcssPercentage,tcssComma,tcssVariable

" Selectors
syntax match tcssSelector "^\s*[\.#][A-Za-z][A-Za-z0-9_-]*"
syntax match tcssSelector "^\s*&\%([\.#][A-Za-z][A-Za-z0-9_-]*\)*"
syntax match tcssSelector "^\s*[A-Za-z][A-Za-z0-9_-]*"
syntax match tcssSelectorCombinator ">" contained

" Pseudo Classes
syntax match tcssPseudoClass ":\%(disabled\|enabled\|focus\|focus-within\|hover\)"

" Punctuation
syntax match tcssPunctuation "[,:]" contained
syntax match tcssBraces "[{}]"
syntax match tcssImportant "!important\>" contained

" Rule Blocks
syntax region tcssRuleBlock
    \ start="{"
    \ end="}"
    \ fold transparent
    \ contains=tcssComment,tcssBlockComment,tcssPropertyName,tcssVariable,
    \ tcssNumber,tcssUnit,tcssPercentage,tcssFunction,tcssColorKeyword,
    \ tcssHexColor,tcssPseudoClass,tcssImportant,tcssPunctuation,
    \ tcssPropertyValue,tcssSelector,tcssSelectorCombinator

" Property Declarations
syntax region tcssDeclaration
    \ start="^\s*[a-z-]\+\s*:"
    \ end=";"
    \ contains=tcssPropertyName,tcssPropertyValue,tcssNumber,tcssUnit,
    \ tcssPercentage,tcssFunction,tcssColorKeyword,tcssHexColor,
    \ tcssVariable,tcssImportant,tcssPunctuation,tcssComment,tcssBlockComment

" Default Highlighting
highlight default link tcssComment Comment
highlight default link tcssBlockComment Comment
highlight default link tcssVariable Special
highlight default link tcssVariableDefinition Special
highlight default link tcssPropertyName Identifier
highlight default link tcssPropertyValue Constant
highlight default link tcssColorKeyword Constant
highlight default link tcssNumber Number
highlight default link tcssUnit Type
highlight default link tcssPercentage Number
highlight default link tcssHexColor Constant
highlight default link tcssFunction Function
highlight default link tcssSelector Type
highlight default link tcssSelectorCombinator Operator
highlight default link tcssPseudoClass Special
highlight default link tcssPunctuation Delimiter
highlight default link tcssBraces Delimiter
highlight default link tcssImportant Special

let b:current_syntax = "tcss"
