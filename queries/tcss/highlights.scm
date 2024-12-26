;; Selectors
(widget_selector) @entity.name.tag.widget
(class_selector "." @punctuation.definition.entity)
(class_selector (_) @entity.other.attribute-name.class)
(id_selector "#" @punctuation.definition.entity)
(id_selector (_) @entity.other.attribute-name.id)
(nesting_selector "&" @entity.name.tag.nesting-selector)

;; Pseudo classes
(pseudo_class ":" @punctuation.definition.entity)
(pseudo_class (_) @entity.other.attribute-name.pseudo-class)

;; Properties
(property_name) @support.type.property-name

;; Values
(number) @constant.numeric
(hex_color) @constant.other.color.rgb-value.hex
(named_color) @support.constant.color.w3c-standard-color-name
(ansi_color) @support.constant.color.ansi
(property_keyword) @support.constant.property-value
(string_value) @string

;; Variables
(variable_reference "$" @punctuation.definition.variable)
(variable_reference (identifier) @variable)

;; Functions
(function_call) @support.function.misc

;; Comments
(comment_block) @comment.block
(comment_line) @comment.line

;; Operators and punctuation
">" @keyword.operator.combinator
"," @punctuation.separator.list.comma
":" @punctuation.separator.key-value
";" @punctuation.terminator.rule
"{" @punctuation.section.property-list.begin.bracket.curly
"}" @punctuation.section.property-list.end.bracket.curly
"(" @punctuation.section.function.begin.bracket.round
")" @punctuation.section.function.end.bracket.round
"!important" @keyword.other.important
