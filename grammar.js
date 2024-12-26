/**
 * @file Nvim plugin to support Textual CSS syntax highlighting.
 * @author Akrm
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "tcss",

  // Adding precedence rules
  precedences: $ => [
    [
      'named_color',
      'property_keyword'
    ]
  ],

  extras: $ => [
    /\s/,
    $.comment_block,
    $.comment_line
  ],

  rules: {
    source_file: $ => repeat(choice($.statement, $.variable_definition)),

    statement: $ => choice($.rule),

    rule: $ => seq(
      $.selector_list,
      $.block
    ),

    selector_list: $ => seq(
      $.selector,
      repeat(seq(',', optional(/\s*/), $.selector))
    ),

    selector: $ => choice(
      $.simple_selector,
      $.nesting_selector_rule,
      seq($.selector, '>', $.simple_selector)
    ),

    simple_selector: $ => choice(
      $.widget_selector,
      $.class_selector,
      $.id_selector,
      seq($.simple_selector, $.pseudo_class)
    ),

    nesting_selector_rule: $ => choice(
      '&',
      seq('&', '.', $.identifier),
      seq('&', ':', $.pseudo_identifier)
    ),

    widget_selector: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    class_selector: $ => seq('.', /[a-zA-Z_][a-zA-Z0-9_-]*/),
    id_selector: $ => seq('#', /[a-zA-Z_][a-zA-Z0-9_-]*/),
    pseudo_identifier: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,
    
    pseudo_class: $ => seq(
      ':',
      choice('disabled', 'enabled', 'focus', 'focus-within', 'hover')
    ),

    block: $ => seq(
      '{',
      repeat(choice($.declaration, $.rule)),
      '}'
    ),

    declaration: $ => seq(
      $.property_name,
      ':',
      $.property_value,
      optional('!important'),
      ';'
    ),

    property_name: $ => choice(
      'align', 'align-horizontal', 'align-vertical', 'background', 'border',
      'border-bottom', 'border-left', 'border-right', 'border-subtitle-align',
      'border-subtitle-background', 'border-subtitle-color', 'border-subtitle-style',
      'border-title-align', 'border-title-background', 'border-title-color',
      'border-title-style', 'border-top', 'box-sizing', 'color', 'column-span',
      'constrain', 'content-align', 'content-align-horizontal', 'content-align-vertical',
      'display', 'dock', 'grid-columns', 'grid-gutter', 'grid-rows', 'grid-size',
      'height', 'keyline', 'layer', 'layers', 'layout', 'link-background',
      'link-background-hover', 'link-color', 'link-color-hover', 'link-style',
      'link-style-hover', 'margin', 'margin-bottom', 'margin-left', 'margin-right',
      'margin-top', 'max-height', 'max-width', 'min-height', 'min-width', 'offset',
      'offset-x', 'offset-y', 'opacity', 'outline', 'outline-bottom', 'outline-left',
      'outline-right', 'outline-top', 'overflow', 'overflow-x', 'overflow-y',
      'overlay', 'padding', 'padding-bottom', 'padding-left', 'padding-right',
      'padding-top', 'row-span', 'scrollbar-background', 'scrollbar-background-active',
      'scrollbar-background-hover', 'scrollbar-color', 'scrollbar-color-active',
      'scrollbar-color-hover', 'scrollbar-corner-color', 'scrollbar-gutter',
      'scrollbar-size', 'scrollbar-size-horizontal', 'scrollbar-size-vertical',
      'text-align', 'text-opacity', 'text-style', 'tint', 'visibility', 'width'
    ),

    property_value: $ => repeat1(choice(
      $.number,
      $.color,
      $.property_keyword,
      $.variable_reference,
      $.function_call,
      $.string_value
    )),

    number: $ => token(seq(
      optional(choice('-', '+')),
      /[0-9]*\.?[0-9]+/,
      optional(choice('%', 'fr', 'h', 'vh', 'vw', 'w'))
    )),

    color: $ => choice(
      $.hex_color,
      $.named_color,
      $.ansi_color
    ),

    hex_color: $ => /#[0-9a-fA-F]{3,8}/,
    
    named_color: $ => prec('named_color', choice(
      ...['aqua', 'black', 'blue', 'fuchsia', 'gray', 'green', 'lime', 'maroon',
         'navy', 'olive', 'orange', 'purple', 'red', 'silver', 'teal', 'white',
         'yellow', 'transparent', 'auto']
    )),

    ansi_color: $ => choice(
      ...['ansi_black', 'ansi_blue', 'ansi_bright_black', 'ansi_bright_blue',
         'ansi_bright_cyan', 'ansi_bright_green', 'ansi_bright_magenta',
         'ansi_bright_red', 'ansi_bright_white', 'ansi_bright_yellow',
         'ansi_cyan', 'ansi_green', 'ansi_magenta', 'ansi_red', 'ansi_white',
         'ansi_yellow']
    ),

    property_keyword: $ => prec.left('property_keyword', choice(
      'ascii', 'auto', 'blank', 'block', 'bold', 'border-box', 'both', 'bottom',
      'center', 'content-box', 'dashed', 'double', 'end', 'grid', 'heavy',
      'hidden', 'hkey', 'horizontal', 'inflect', 'initial', 'inner', 'italic',
      'justify', 'left', 'middle', 'none', 'outer', 'panel', 'reverse', 'right',
      'round', 'screen', 'scroll', 'solid', 'stable', 'start', 'strike', 'tall',
      'thick', 'top', 'underline', 'vertical', 'visible', 'vkey', 'wide', 'x', 'y'
    )),

    function_call: $ => seq(
      choice('rgb', 'rgba', 'hsl', 'hsla'),
      '(',
      $.function_parameters,
      ')'
    ),

    function_parameters: $ => seq(
      $.number,
      repeat(seq(',', $.number))
    ),

    string_value: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    variable_reference: $ => seq('$', $.identifier),
    
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    variable_definition: $ => seq(
      '$',
      $.identifier,
      ':',
      $.property_value,
      ';'
    ),

    comment_block: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )),

    comment_line: $ => token(seq(
      '#',
      /.*/
    ))
  }
});

