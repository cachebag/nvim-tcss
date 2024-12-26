; Inject TCSS inside Python variables
((assignment
  left: (identifier) @css_variable
  right: (string)) @injection.language)

