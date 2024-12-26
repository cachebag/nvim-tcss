#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 227
#define ALIAS_COUNT 0
#define TOKEN_COUNT 197
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  aux_sym_selector_list_token1 = 2,
  anon_sym_GT = 3,
  anon_sym_AMP = 4,
  anon_sym_DOT = 5,
  anon_sym_COLON = 6,
  sym_widget_selector = 7,
  aux_sym_class_selector_token1 = 8,
  anon_sym_POUND = 9,
  anon_sym_disabled = 10,
  anon_sym_enabled = 11,
  anon_sym_focus = 12,
  anon_sym_focus_DASHwithin = 13,
  anon_sym_hover = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_BANGimportant = 17,
  anon_sym_SEMI = 18,
  anon_sym_align = 19,
  anon_sym_align_DASHhorizontal = 20,
  anon_sym_align_DASHvertical = 21,
  anon_sym_background = 22,
  anon_sym_border = 23,
  anon_sym_border_DASHbottom = 24,
  anon_sym_border_DASHleft = 25,
  anon_sym_border_DASHright = 26,
  anon_sym_border_DASHsubtitle_DASHalign = 27,
  anon_sym_border_DASHsubtitle_DASHbackground = 28,
  anon_sym_border_DASHsubtitle_DASHcolor = 29,
  anon_sym_border_DASHsubtitle_DASHstyle = 30,
  anon_sym_border_DASHtitle_DASHalign = 31,
  anon_sym_border_DASHtitle_DASHbackground = 32,
  anon_sym_border_DASHtitle_DASHcolor = 33,
  anon_sym_border_DASHtitle_DASHstyle = 34,
  anon_sym_border_DASHtop = 35,
  anon_sym_box_DASHsizing = 36,
  anon_sym_color = 37,
  anon_sym_column_DASHspan = 38,
  anon_sym_constrain = 39,
  anon_sym_content_DASHalign = 40,
  anon_sym_content_DASHalign_DASHhorizontal = 41,
  anon_sym_content_DASHalign_DASHvertical = 42,
  anon_sym_display = 43,
  anon_sym_dock = 44,
  anon_sym_grid_DASHcolumns = 45,
  anon_sym_grid_DASHgutter = 46,
  anon_sym_grid_DASHrows = 47,
  anon_sym_grid_DASHsize = 48,
  anon_sym_height = 49,
  anon_sym_keyline = 50,
  anon_sym_layer = 51,
  anon_sym_layers = 52,
  anon_sym_layout = 53,
  anon_sym_link_DASHbackground = 54,
  anon_sym_link_DASHbackground_DASHhover = 55,
  anon_sym_link_DASHcolor = 56,
  anon_sym_link_DASHcolor_DASHhover = 57,
  anon_sym_link_DASHstyle = 58,
  anon_sym_link_DASHstyle_DASHhover = 59,
  anon_sym_margin = 60,
  anon_sym_margin_DASHbottom = 61,
  anon_sym_margin_DASHleft = 62,
  anon_sym_margin_DASHright = 63,
  anon_sym_margin_DASHtop = 64,
  anon_sym_max_DASHheight = 65,
  anon_sym_max_DASHwidth = 66,
  anon_sym_min_DASHheight = 67,
  anon_sym_min_DASHwidth = 68,
  anon_sym_offset = 69,
  anon_sym_offset_DASHx = 70,
  anon_sym_offset_DASHy = 71,
  anon_sym_opacity = 72,
  anon_sym_outline = 73,
  anon_sym_outline_DASHbottom = 74,
  anon_sym_outline_DASHleft = 75,
  anon_sym_outline_DASHright = 76,
  anon_sym_outline_DASHtop = 77,
  anon_sym_overflow = 78,
  anon_sym_overflow_DASHx = 79,
  anon_sym_overflow_DASHy = 80,
  anon_sym_overlay = 81,
  anon_sym_padding = 82,
  anon_sym_padding_DASHbottom = 83,
  anon_sym_padding_DASHleft = 84,
  anon_sym_padding_DASHright = 85,
  anon_sym_padding_DASHtop = 86,
  anon_sym_row_DASHspan = 87,
  anon_sym_scrollbar_DASHbackground = 88,
  anon_sym_scrollbar_DASHbackground_DASHactive = 89,
  anon_sym_scrollbar_DASHbackground_DASHhover = 90,
  anon_sym_scrollbar_DASHcolor = 91,
  anon_sym_scrollbar_DASHcolor_DASHactive = 92,
  anon_sym_scrollbar_DASHcolor_DASHhover = 93,
  anon_sym_scrollbar_DASHcorner_DASHcolor = 94,
  anon_sym_scrollbar_DASHgutter = 95,
  anon_sym_scrollbar_DASHsize = 96,
  anon_sym_scrollbar_DASHsize_DASHhorizontal = 97,
  anon_sym_scrollbar_DASHsize_DASHvertical = 98,
  anon_sym_text_DASHalign = 99,
  anon_sym_text_DASHopacity = 100,
  anon_sym_text_DASHstyle = 101,
  anon_sym_tint = 102,
  anon_sym_visibility = 103,
  anon_sym_width = 104,
  sym_number = 105,
  sym_hex_color = 106,
  anon_sym_aqua = 107,
  anon_sym_black = 108,
  anon_sym_blue = 109,
  anon_sym_fuchsia = 110,
  anon_sym_gray = 111,
  anon_sym_green = 112,
  anon_sym_lime = 113,
  anon_sym_maroon = 114,
  anon_sym_navy = 115,
  anon_sym_olive = 116,
  anon_sym_orange = 117,
  anon_sym_purple = 118,
  anon_sym_red = 119,
  anon_sym_silver = 120,
  anon_sym_teal = 121,
  anon_sym_white = 122,
  anon_sym_yellow = 123,
  anon_sym_transparent = 124,
  anon_sym_auto = 125,
  anon_sym_ansi_black = 126,
  anon_sym_ansi_blue = 127,
  anon_sym_ansi_bright_black = 128,
  anon_sym_ansi_bright_blue = 129,
  anon_sym_ansi_bright_cyan = 130,
  anon_sym_ansi_bright_green = 131,
  anon_sym_ansi_bright_magenta = 132,
  anon_sym_ansi_bright_red = 133,
  anon_sym_ansi_bright_white = 134,
  anon_sym_ansi_bright_yellow = 135,
  anon_sym_ansi_cyan = 136,
  anon_sym_ansi_green = 137,
  anon_sym_ansi_magenta = 138,
  anon_sym_ansi_red = 139,
  anon_sym_ansi_white = 140,
  anon_sym_ansi_yellow = 141,
  anon_sym_ascii = 142,
  anon_sym_blank = 143,
  anon_sym_block = 144,
  anon_sym_bold = 145,
  anon_sym_border_DASHbox = 146,
  anon_sym_both = 147,
  anon_sym_bottom = 148,
  anon_sym_center = 149,
  anon_sym_content_DASHbox = 150,
  anon_sym_dashed = 151,
  anon_sym_double = 152,
  anon_sym_end = 153,
  anon_sym_grid = 154,
  anon_sym_heavy = 155,
  anon_sym_hidden = 156,
  anon_sym_hkey = 157,
  anon_sym_horizontal = 158,
  anon_sym_inflect = 159,
  anon_sym_initial = 160,
  anon_sym_inner = 161,
  anon_sym_italic = 162,
  anon_sym_justify = 163,
  anon_sym_left = 164,
  anon_sym_middle = 165,
  anon_sym_none = 166,
  anon_sym_outer = 167,
  anon_sym_panel = 168,
  anon_sym_reverse = 169,
  anon_sym_right = 170,
  anon_sym_round = 171,
  anon_sym_screen = 172,
  anon_sym_scroll = 173,
  anon_sym_solid = 174,
  anon_sym_stable = 175,
  anon_sym_start = 176,
  anon_sym_strike = 177,
  anon_sym_tall = 178,
  anon_sym_thick = 179,
  anon_sym_top = 180,
  anon_sym_underline = 181,
  anon_sym_vertical = 182,
  anon_sym_visible = 183,
  anon_sym_vkey = 184,
  anon_sym_wide = 185,
  anon_sym_x = 186,
  anon_sym_y = 187,
  anon_sym_rgb = 188,
  anon_sym_rgba = 189,
  anon_sym_hsl = 190,
  anon_sym_hsla = 191,
  anon_sym_LPAREN = 192,
  anon_sym_RPAREN = 193,
  anon_sym_DOLLAR = 194,
  sym_comment_block = 195,
  sym_comment_line = 196,
  sym_source_file = 197,
  sym_statement = 198,
  sym_rule = 199,
  sym_selector_list = 200,
  sym_selector = 201,
  sym_simple_selector = 202,
  sym_nesting_selector_rule = 203,
  sym_class_selector = 204,
  sym_id_selector = 205,
  sym_pseudo_identifier = 206,
  sym_pseudo_class = 207,
  sym_block = 208,
  sym_declaration = 209,
  sym_property_name = 210,
  sym_property_value = 211,
  sym_color = 212,
  sym_named_color = 213,
  sym_ansi_color = 214,
  sym_property_keyword = 215,
  sym_function_call = 216,
  sym_function_parameters = 217,
  sym_string_value = 218,
  sym_variable_reference = 219,
  sym_identifier = 220,
  sym_variable_definition = 221,
  aux_sym_source_file_repeat1 = 222,
  aux_sym_selector_list_repeat1 = 223,
  aux_sym_block_repeat1 = 224,
  aux_sym_property_value_repeat1 = 225,
  aux_sym_function_parameters_repeat1 = 226,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [aux_sym_selector_list_token1] = "selector_list_token1",
  [anon_sym_GT] = ">",
  [anon_sym_AMP] = "&",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [sym_widget_selector] = "widget_selector",
  [aux_sym_class_selector_token1] = "class_selector_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_disabled] = "disabled",
  [anon_sym_enabled] = "enabled",
  [anon_sym_focus] = "focus",
  [anon_sym_focus_DASHwithin] = "focus-within",
  [anon_sym_hover] = "hover",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BANGimportant] = "!important",
  [anon_sym_SEMI] = ";",
  [anon_sym_align] = "align",
  [anon_sym_align_DASHhorizontal] = "align-horizontal",
  [anon_sym_align_DASHvertical] = "align-vertical",
  [anon_sym_background] = "background",
  [anon_sym_border] = "border",
  [anon_sym_border_DASHbottom] = "border-bottom",
  [anon_sym_border_DASHleft] = "border-left",
  [anon_sym_border_DASHright] = "border-right",
  [anon_sym_border_DASHsubtitle_DASHalign] = "border-subtitle-align",
  [anon_sym_border_DASHsubtitle_DASHbackground] = "border-subtitle-background",
  [anon_sym_border_DASHsubtitle_DASHcolor] = "border-subtitle-color",
  [anon_sym_border_DASHsubtitle_DASHstyle] = "border-subtitle-style",
  [anon_sym_border_DASHtitle_DASHalign] = "border-title-align",
  [anon_sym_border_DASHtitle_DASHbackground] = "border-title-background",
  [anon_sym_border_DASHtitle_DASHcolor] = "border-title-color",
  [anon_sym_border_DASHtitle_DASHstyle] = "border-title-style",
  [anon_sym_border_DASHtop] = "border-top",
  [anon_sym_box_DASHsizing] = "box-sizing",
  [anon_sym_color] = "color",
  [anon_sym_column_DASHspan] = "column-span",
  [anon_sym_constrain] = "constrain",
  [anon_sym_content_DASHalign] = "content-align",
  [anon_sym_content_DASHalign_DASHhorizontal] = "content-align-horizontal",
  [anon_sym_content_DASHalign_DASHvertical] = "content-align-vertical",
  [anon_sym_display] = "display",
  [anon_sym_dock] = "dock",
  [anon_sym_grid_DASHcolumns] = "grid-columns",
  [anon_sym_grid_DASHgutter] = "grid-gutter",
  [anon_sym_grid_DASHrows] = "grid-rows",
  [anon_sym_grid_DASHsize] = "grid-size",
  [anon_sym_height] = "height",
  [anon_sym_keyline] = "keyline",
  [anon_sym_layer] = "layer",
  [anon_sym_layers] = "layers",
  [anon_sym_layout] = "layout",
  [anon_sym_link_DASHbackground] = "link-background",
  [anon_sym_link_DASHbackground_DASHhover] = "link-background-hover",
  [anon_sym_link_DASHcolor] = "link-color",
  [anon_sym_link_DASHcolor_DASHhover] = "link-color-hover",
  [anon_sym_link_DASHstyle] = "link-style",
  [anon_sym_link_DASHstyle_DASHhover] = "link-style-hover",
  [anon_sym_margin] = "margin",
  [anon_sym_margin_DASHbottom] = "margin-bottom",
  [anon_sym_margin_DASHleft] = "margin-left",
  [anon_sym_margin_DASHright] = "margin-right",
  [anon_sym_margin_DASHtop] = "margin-top",
  [anon_sym_max_DASHheight] = "max-height",
  [anon_sym_max_DASHwidth] = "max-width",
  [anon_sym_min_DASHheight] = "min-height",
  [anon_sym_min_DASHwidth] = "min-width",
  [anon_sym_offset] = "offset",
  [anon_sym_offset_DASHx] = "offset-x",
  [anon_sym_offset_DASHy] = "offset-y",
  [anon_sym_opacity] = "opacity",
  [anon_sym_outline] = "outline",
  [anon_sym_outline_DASHbottom] = "outline-bottom",
  [anon_sym_outline_DASHleft] = "outline-left",
  [anon_sym_outline_DASHright] = "outline-right",
  [anon_sym_outline_DASHtop] = "outline-top",
  [anon_sym_overflow] = "overflow",
  [anon_sym_overflow_DASHx] = "overflow-x",
  [anon_sym_overflow_DASHy] = "overflow-y",
  [anon_sym_overlay] = "overlay",
  [anon_sym_padding] = "padding",
  [anon_sym_padding_DASHbottom] = "padding-bottom",
  [anon_sym_padding_DASHleft] = "padding-left",
  [anon_sym_padding_DASHright] = "padding-right",
  [anon_sym_padding_DASHtop] = "padding-top",
  [anon_sym_row_DASHspan] = "row-span",
  [anon_sym_scrollbar_DASHbackground] = "scrollbar-background",
  [anon_sym_scrollbar_DASHbackground_DASHactive] = "scrollbar-background-active",
  [anon_sym_scrollbar_DASHbackground_DASHhover] = "scrollbar-background-hover",
  [anon_sym_scrollbar_DASHcolor] = "scrollbar-color",
  [anon_sym_scrollbar_DASHcolor_DASHactive] = "scrollbar-color-active",
  [anon_sym_scrollbar_DASHcolor_DASHhover] = "scrollbar-color-hover",
  [anon_sym_scrollbar_DASHcorner_DASHcolor] = "scrollbar-corner-color",
  [anon_sym_scrollbar_DASHgutter] = "scrollbar-gutter",
  [anon_sym_scrollbar_DASHsize] = "scrollbar-size",
  [anon_sym_scrollbar_DASHsize_DASHhorizontal] = "scrollbar-size-horizontal",
  [anon_sym_scrollbar_DASHsize_DASHvertical] = "scrollbar-size-vertical",
  [anon_sym_text_DASHalign] = "text-align",
  [anon_sym_text_DASHopacity] = "text-opacity",
  [anon_sym_text_DASHstyle] = "text-style",
  [anon_sym_tint] = "tint",
  [anon_sym_visibility] = "visibility",
  [anon_sym_width] = "width",
  [sym_number] = "number",
  [sym_hex_color] = "hex_color",
  [anon_sym_aqua] = "aqua",
  [anon_sym_black] = "black",
  [anon_sym_blue] = "blue",
  [anon_sym_fuchsia] = "fuchsia",
  [anon_sym_gray] = "gray",
  [anon_sym_green] = "green",
  [anon_sym_lime] = "lime",
  [anon_sym_maroon] = "maroon",
  [anon_sym_navy] = "navy",
  [anon_sym_olive] = "olive",
  [anon_sym_orange] = "orange",
  [anon_sym_purple] = "purple",
  [anon_sym_red] = "red",
  [anon_sym_silver] = "silver",
  [anon_sym_teal] = "teal",
  [anon_sym_white] = "white",
  [anon_sym_yellow] = "yellow",
  [anon_sym_transparent] = "transparent",
  [anon_sym_auto] = "auto",
  [anon_sym_ansi_black] = "ansi_black",
  [anon_sym_ansi_blue] = "ansi_blue",
  [anon_sym_ansi_bright_black] = "ansi_bright_black",
  [anon_sym_ansi_bright_blue] = "ansi_bright_blue",
  [anon_sym_ansi_bright_cyan] = "ansi_bright_cyan",
  [anon_sym_ansi_bright_green] = "ansi_bright_green",
  [anon_sym_ansi_bright_magenta] = "ansi_bright_magenta",
  [anon_sym_ansi_bright_red] = "ansi_bright_red",
  [anon_sym_ansi_bright_white] = "ansi_bright_white",
  [anon_sym_ansi_bright_yellow] = "ansi_bright_yellow",
  [anon_sym_ansi_cyan] = "ansi_cyan",
  [anon_sym_ansi_green] = "ansi_green",
  [anon_sym_ansi_magenta] = "ansi_magenta",
  [anon_sym_ansi_red] = "ansi_red",
  [anon_sym_ansi_white] = "ansi_white",
  [anon_sym_ansi_yellow] = "ansi_yellow",
  [anon_sym_ascii] = "ascii",
  [anon_sym_blank] = "blank",
  [anon_sym_block] = "block",
  [anon_sym_bold] = "bold",
  [anon_sym_border_DASHbox] = "border-box",
  [anon_sym_both] = "both",
  [anon_sym_bottom] = "bottom",
  [anon_sym_center] = "center",
  [anon_sym_content_DASHbox] = "content-box",
  [anon_sym_dashed] = "dashed",
  [anon_sym_double] = "double",
  [anon_sym_end] = "end",
  [anon_sym_grid] = "grid",
  [anon_sym_heavy] = "heavy",
  [anon_sym_hidden] = "hidden",
  [anon_sym_hkey] = "hkey",
  [anon_sym_horizontal] = "horizontal",
  [anon_sym_inflect] = "inflect",
  [anon_sym_initial] = "initial",
  [anon_sym_inner] = "inner",
  [anon_sym_italic] = "italic",
  [anon_sym_justify] = "justify",
  [anon_sym_left] = "left",
  [anon_sym_middle] = "middle",
  [anon_sym_none] = "none",
  [anon_sym_outer] = "outer",
  [anon_sym_panel] = "panel",
  [anon_sym_reverse] = "reverse",
  [anon_sym_right] = "right",
  [anon_sym_round] = "round",
  [anon_sym_screen] = "screen",
  [anon_sym_scroll] = "scroll",
  [anon_sym_solid] = "solid",
  [anon_sym_stable] = "stable",
  [anon_sym_start] = "start",
  [anon_sym_strike] = "strike",
  [anon_sym_tall] = "tall",
  [anon_sym_thick] = "thick",
  [anon_sym_top] = "top",
  [anon_sym_underline] = "underline",
  [anon_sym_vertical] = "vertical",
  [anon_sym_visible] = "visible",
  [anon_sym_vkey] = "vkey",
  [anon_sym_wide] = "wide",
  [anon_sym_x] = "x",
  [anon_sym_y] = "y",
  [anon_sym_rgb] = "rgb",
  [anon_sym_rgba] = "rgba",
  [anon_sym_hsl] = "hsl",
  [anon_sym_hsla] = "hsla",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [sym_comment_block] = "comment_block",
  [sym_comment_line] = "comment_line",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_rule] = "rule",
  [sym_selector_list] = "selector_list",
  [sym_selector] = "selector",
  [sym_simple_selector] = "simple_selector",
  [sym_nesting_selector_rule] = "nesting_selector_rule",
  [sym_class_selector] = "class_selector",
  [sym_id_selector] = "id_selector",
  [sym_pseudo_identifier] = "pseudo_identifier",
  [sym_pseudo_class] = "pseudo_class",
  [sym_block] = "block",
  [sym_declaration] = "declaration",
  [sym_property_name] = "property_name",
  [sym_property_value] = "property_value",
  [sym_color] = "color",
  [sym_named_color] = "named_color",
  [sym_ansi_color] = "ansi_color",
  [sym_property_keyword] = "property_keyword",
  [sym_function_call] = "function_call",
  [sym_function_parameters] = "function_parameters",
  [sym_string_value] = "string_value",
  [sym_variable_reference] = "variable_reference",
  [sym_identifier] = "identifier",
  [sym_variable_definition] = "variable_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_selector_list_repeat1] = "selector_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_property_value_repeat1] = "property_value_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_selector_list_token1] = aux_sym_selector_list_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_widget_selector] = sym_widget_selector,
  [aux_sym_class_selector_token1] = aux_sym_class_selector_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_enabled] = anon_sym_enabled,
  [anon_sym_focus] = anon_sym_focus,
  [anon_sym_focus_DASHwithin] = anon_sym_focus_DASHwithin,
  [anon_sym_hover] = anon_sym_hover,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BANGimportant] = anon_sym_BANGimportant,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_align_DASHhorizontal] = anon_sym_align_DASHhorizontal,
  [anon_sym_align_DASHvertical] = anon_sym_align_DASHvertical,
  [anon_sym_background] = anon_sym_background,
  [anon_sym_border] = anon_sym_border,
  [anon_sym_border_DASHbottom] = anon_sym_border_DASHbottom,
  [anon_sym_border_DASHleft] = anon_sym_border_DASHleft,
  [anon_sym_border_DASHright] = anon_sym_border_DASHright,
  [anon_sym_border_DASHsubtitle_DASHalign] = anon_sym_border_DASHsubtitle_DASHalign,
  [anon_sym_border_DASHsubtitle_DASHbackground] = anon_sym_border_DASHsubtitle_DASHbackground,
  [anon_sym_border_DASHsubtitle_DASHcolor] = anon_sym_border_DASHsubtitle_DASHcolor,
  [anon_sym_border_DASHsubtitle_DASHstyle] = anon_sym_border_DASHsubtitle_DASHstyle,
  [anon_sym_border_DASHtitle_DASHalign] = anon_sym_border_DASHtitle_DASHalign,
  [anon_sym_border_DASHtitle_DASHbackground] = anon_sym_border_DASHtitle_DASHbackground,
  [anon_sym_border_DASHtitle_DASHcolor] = anon_sym_border_DASHtitle_DASHcolor,
  [anon_sym_border_DASHtitle_DASHstyle] = anon_sym_border_DASHtitle_DASHstyle,
  [anon_sym_border_DASHtop] = anon_sym_border_DASHtop,
  [anon_sym_box_DASHsizing] = anon_sym_box_DASHsizing,
  [anon_sym_color] = anon_sym_color,
  [anon_sym_column_DASHspan] = anon_sym_column_DASHspan,
  [anon_sym_constrain] = anon_sym_constrain,
  [anon_sym_content_DASHalign] = anon_sym_content_DASHalign,
  [anon_sym_content_DASHalign_DASHhorizontal] = anon_sym_content_DASHalign_DASHhorizontal,
  [anon_sym_content_DASHalign_DASHvertical] = anon_sym_content_DASHalign_DASHvertical,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_dock] = anon_sym_dock,
  [anon_sym_grid_DASHcolumns] = anon_sym_grid_DASHcolumns,
  [anon_sym_grid_DASHgutter] = anon_sym_grid_DASHgutter,
  [anon_sym_grid_DASHrows] = anon_sym_grid_DASHrows,
  [anon_sym_grid_DASHsize] = anon_sym_grid_DASHsize,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_keyline] = anon_sym_keyline,
  [anon_sym_layer] = anon_sym_layer,
  [anon_sym_layers] = anon_sym_layers,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_link_DASHbackground] = anon_sym_link_DASHbackground,
  [anon_sym_link_DASHbackground_DASHhover] = anon_sym_link_DASHbackground_DASHhover,
  [anon_sym_link_DASHcolor] = anon_sym_link_DASHcolor,
  [anon_sym_link_DASHcolor_DASHhover] = anon_sym_link_DASHcolor_DASHhover,
  [anon_sym_link_DASHstyle] = anon_sym_link_DASHstyle,
  [anon_sym_link_DASHstyle_DASHhover] = anon_sym_link_DASHstyle_DASHhover,
  [anon_sym_margin] = anon_sym_margin,
  [anon_sym_margin_DASHbottom] = anon_sym_margin_DASHbottom,
  [anon_sym_margin_DASHleft] = anon_sym_margin_DASHleft,
  [anon_sym_margin_DASHright] = anon_sym_margin_DASHright,
  [anon_sym_margin_DASHtop] = anon_sym_margin_DASHtop,
  [anon_sym_max_DASHheight] = anon_sym_max_DASHheight,
  [anon_sym_max_DASHwidth] = anon_sym_max_DASHwidth,
  [anon_sym_min_DASHheight] = anon_sym_min_DASHheight,
  [anon_sym_min_DASHwidth] = anon_sym_min_DASHwidth,
  [anon_sym_offset] = anon_sym_offset,
  [anon_sym_offset_DASHx] = anon_sym_offset_DASHx,
  [anon_sym_offset_DASHy] = anon_sym_offset_DASHy,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_outline] = anon_sym_outline,
  [anon_sym_outline_DASHbottom] = anon_sym_outline_DASHbottom,
  [anon_sym_outline_DASHleft] = anon_sym_outline_DASHleft,
  [anon_sym_outline_DASHright] = anon_sym_outline_DASHright,
  [anon_sym_outline_DASHtop] = anon_sym_outline_DASHtop,
  [anon_sym_overflow] = anon_sym_overflow,
  [anon_sym_overflow_DASHx] = anon_sym_overflow_DASHx,
  [anon_sym_overflow_DASHy] = anon_sym_overflow_DASHy,
  [anon_sym_overlay] = anon_sym_overlay,
  [anon_sym_padding] = anon_sym_padding,
  [anon_sym_padding_DASHbottom] = anon_sym_padding_DASHbottom,
  [anon_sym_padding_DASHleft] = anon_sym_padding_DASHleft,
  [anon_sym_padding_DASHright] = anon_sym_padding_DASHright,
  [anon_sym_padding_DASHtop] = anon_sym_padding_DASHtop,
  [anon_sym_row_DASHspan] = anon_sym_row_DASHspan,
  [anon_sym_scrollbar_DASHbackground] = anon_sym_scrollbar_DASHbackground,
  [anon_sym_scrollbar_DASHbackground_DASHactive] = anon_sym_scrollbar_DASHbackground_DASHactive,
  [anon_sym_scrollbar_DASHbackground_DASHhover] = anon_sym_scrollbar_DASHbackground_DASHhover,
  [anon_sym_scrollbar_DASHcolor] = anon_sym_scrollbar_DASHcolor,
  [anon_sym_scrollbar_DASHcolor_DASHactive] = anon_sym_scrollbar_DASHcolor_DASHactive,
  [anon_sym_scrollbar_DASHcolor_DASHhover] = anon_sym_scrollbar_DASHcolor_DASHhover,
  [anon_sym_scrollbar_DASHcorner_DASHcolor] = anon_sym_scrollbar_DASHcorner_DASHcolor,
  [anon_sym_scrollbar_DASHgutter] = anon_sym_scrollbar_DASHgutter,
  [anon_sym_scrollbar_DASHsize] = anon_sym_scrollbar_DASHsize,
  [anon_sym_scrollbar_DASHsize_DASHhorizontal] = anon_sym_scrollbar_DASHsize_DASHhorizontal,
  [anon_sym_scrollbar_DASHsize_DASHvertical] = anon_sym_scrollbar_DASHsize_DASHvertical,
  [anon_sym_text_DASHalign] = anon_sym_text_DASHalign,
  [anon_sym_text_DASHopacity] = anon_sym_text_DASHopacity,
  [anon_sym_text_DASHstyle] = anon_sym_text_DASHstyle,
  [anon_sym_tint] = anon_sym_tint,
  [anon_sym_visibility] = anon_sym_visibility,
  [anon_sym_width] = anon_sym_width,
  [sym_number] = sym_number,
  [sym_hex_color] = sym_hex_color,
  [anon_sym_aqua] = anon_sym_aqua,
  [anon_sym_black] = anon_sym_black,
  [anon_sym_blue] = anon_sym_blue,
  [anon_sym_fuchsia] = anon_sym_fuchsia,
  [anon_sym_gray] = anon_sym_gray,
  [anon_sym_green] = anon_sym_green,
  [anon_sym_lime] = anon_sym_lime,
  [anon_sym_maroon] = anon_sym_maroon,
  [anon_sym_navy] = anon_sym_navy,
  [anon_sym_olive] = anon_sym_olive,
  [anon_sym_orange] = anon_sym_orange,
  [anon_sym_purple] = anon_sym_purple,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_silver] = anon_sym_silver,
  [anon_sym_teal] = anon_sym_teal,
  [anon_sym_white] = anon_sym_white,
  [anon_sym_yellow] = anon_sym_yellow,
  [anon_sym_transparent] = anon_sym_transparent,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_ansi_black] = anon_sym_ansi_black,
  [anon_sym_ansi_blue] = anon_sym_ansi_blue,
  [anon_sym_ansi_bright_black] = anon_sym_ansi_bright_black,
  [anon_sym_ansi_bright_blue] = anon_sym_ansi_bright_blue,
  [anon_sym_ansi_bright_cyan] = anon_sym_ansi_bright_cyan,
  [anon_sym_ansi_bright_green] = anon_sym_ansi_bright_green,
  [anon_sym_ansi_bright_magenta] = anon_sym_ansi_bright_magenta,
  [anon_sym_ansi_bright_red] = anon_sym_ansi_bright_red,
  [anon_sym_ansi_bright_white] = anon_sym_ansi_bright_white,
  [anon_sym_ansi_bright_yellow] = anon_sym_ansi_bright_yellow,
  [anon_sym_ansi_cyan] = anon_sym_ansi_cyan,
  [anon_sym_ansi_green] = anon_sym_ansi_green,
  [anon_sym_ansi_magenta] = anon_sym_ansi_magenta,
  [anon_sym_ansi_red] = anon_sym_ansi_red,
  [anon_sym_ansi_white] = anon_sym_ansi_white,
  [anon_sym_ansi_yellow] = anon_sym_ansi_yellow,
  [anon_sym_ascii] = anon_sym_ascii,
  [anon_sym_blank] = anon_sym_blank,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_border_DASHbox] = anon_sym_border_DASHbox,
  [anon_sym_both] = anon_sym_both,
  [anon_sym_bottom] = anon_sym_bottom,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_content_DASHbox] = anon_sym_content_DASHbox,
  [anon_sym_dashed] = anon_sym_dashed,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_grid] = anon_sym_grid,
  [anon_sym_heavy] = anon_sym_heavy,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_hkey] = anon_sym_hkey,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_inflect] = anon_sym_inflect,
  [anon_sym_initial] = anon_sym_initial,
  [anon_sym_inner] = anon_sym_inner,
  [anon_sym_italic] = anon_sym_italic,
  [anon_sym_justify] = anon_sym_justify,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_middle] = anon_sym_middle,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_outer] = anon_sym_outer,
  [anon_sym_panel] = anon_sym_panel,
  [anon_sym_reverse] = anon_sym_reverse,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_round] = anon_sym_round,
  [anon_sym_screen] = anon_sym_screen,
  [anon_sym_scroll] = anon_sym_scroll,
  [anon_sym_solid] = anon_sym_solid,
  [anon_sym_stable] = anon_sym_stable,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_strike] = anon_sym_strike,
  [anon_sym_tall] = anon_sym_tall,
  [anon_sym_thick] = anon_sym_thick,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_underline] = anon_sym_underline,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_visible] = anon_sym_visible,
  [anon_sym_vkey] = anon_sym_vkey,
  [anon_sym_wide] = anon_sym_wide,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_rgb] = anon_sym_rgb,
  [anon_sym_rgba] = anon_sym_rgba,
  [anon_sym_hsl] = anon_sym_hsl,
  [anon_sym_hsla] = anon_sym_hsla,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_comment_block] = sym_comment_block,
  [sym_comment_line] = sym_comment_line,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_rule] = sym_rule,
  [sym_selector_list] = sym_selector_list,
  [sym_selector] = sym_selector,
  [sym_simple_selector] = sym_simple_selector,
  [sym_nesting_selector_rule] = sym_nesting_selector_rule,
  [sym_class_selector] = sym_class_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_pseudo_identifier] = sym_pseudo_identifier,
  [sym_pseudo_class] = sym_pseudo_class,
  [sym_block] = sym_block,
  [sym_declaration] = sym_declaration,
  [sym_property_name] = sym_property_name,
  [sym_property_value] = sym_property_value,
  [sym_color] = sym_color,
  [sym_named_color] = sym_named_color,
  [sym_ansi_color] = sym_ansi_color,
  [sym_property_keyword] = sym_property_keyword,
  [sym_function_call] = sym_function_call,
  [sym_function_parameters] = sym_function_parameters,
  [sym_string_value] = sym_string_value,
  [sym_variable_reference] = sym_variable_reference,
  [sym_identifier] = sym_identifier,
  [sym_variable_definition] = sym_variable_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_selector_list_repeat1] = aux_sym_selector_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_property_value_repeat1] = aux_sym_property_value_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_selector_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_widget_selector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_selector_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_focus_DASHwithin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGimportant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align_DASHhorizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align_DASHvertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHbottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHleft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHsubtitle_DASHalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHsubtitle_DASHbackground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHsubtitle_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHsubtitle_DASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHtitle_DASHalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHtitle_DASHbackground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHtitle_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHtitle_DASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHtop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_box_DASHsizing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_column_DASHspan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constrain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content_DASHalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content_DASHalign_DASHhorizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content_DASHalign_DASHvertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHcolumns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHgutter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHrows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link_DASHbackground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link_DASHbackground_DASHhover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link_DASHcolor_DASHhover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link_DASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link_DASHstyle_DASHhover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_margin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_margin_DASHbottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_margin_DASHleft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_margin_DASHright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_margin_DASHtop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min_DASHheight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offset_DASHx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offset_DASHy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outline_DASHbottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outline_DASHleft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outline_DASHright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outline_DASHtop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overflow_DASHx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overflow_DASHy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_padding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_padding_DASHbottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_padding_DASHleft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_padding_DASHright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_padding_DASHtop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_row_DASHspan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHbackground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHbackground_DASHactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHbackground_DASHhover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHcolor_DASHactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHcolor_DASHhover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHcorner_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHgutter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHsize_DASHhorizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scrollbar_DASHsize_DASHvertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text_DASHalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text_DASHopacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text_DASHstyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visibility] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_aqua] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fuchsia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maroon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_navy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_olive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_purple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_silver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_teal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_white] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transparent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_bright_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_bright_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_bright_cyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_bright_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_bright_magenta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_bright_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_bright_white] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_bright_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_cyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_magenta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_white] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ansi_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blank] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content_DASHbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dashed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_heavy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inflect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_italic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_justify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_middle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_panel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_round] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_screen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_solid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strike] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_underline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hsla] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_list] = {
    .visible = true,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_nesting_selector_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym_property_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_named_color] = {
    .visible = true,
    .named = true,
  },
  [sym_ansi_color] = {
    .visible = true,
    .named = true,
  },
  [sym_property_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 24,
  [31] = 31,
  [32] = 22,
  [33] = 23,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 21,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(374);
      ADVANCE_MAP(
        '!', 129,
        '#', 1200,
        '$', 1468,
        '&', 378,
        '(', 1466,
        ')', 1467,
        ',', 375,
        '.', 380,
        '/', 4,
        ':', 381,
        ';', 1214,
        '>', 377,
        'a', 866,
        'b', 542,
        'c', 685,
        'd', 540,
        'e', 932,
        'f', 986,
        'g', 1047,
        'h', 684,
        'i', 933,
        'j', 1148,
        'k', 654,
        'l', 543,
        'm', 532,
        'n', 533,
        'o', 740,
        'p', 544,
        'r', 656,
        's', 608,
        't', 546,
        'u', 952,
        'v', 687,
        'w', 778,
        'x', 1460,
        'y', 1461,
        '{', 1211,
        '}', 1212,
        '+', 10,
        '-', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 129,
        '#', 1472,
        '$', 1468,
        '.', 371,
        '/', 4,
        ';', 1214,
        'a', 931,
        'b', 867,
        'c', 686,
        'd', 541,
        'e', 968,
        'f', 1149,
        'g', 1047,
        'h', 706,
        'i', 933,
        'j', 1148,
        'l', 655,
        'm', 569,
        'n', 533,
        'o', 882,
        'p', 576,
        'r', 657,
        's', 608,
        't', 547,
        'u', 952,
        'v', 688,
        'w', 779,
        'x', 1460,
        'y', 1461,
        '+', 10,
        '-', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('k' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 1200,
        '&', 378,
        '.', 379,
        '/', 4,
        'a', 454,
        'b', 393,
        'c', 473,
        'd', 433,
        'g', 490,
        'h', 418,
        'k', 413,
        'l', 395,
        'm', 394,
        'o', 423,
        'p', 392,
        'r', 474,
        's', 404,
        't', 414,
        'v', 436,
        'w', 437,
        '}', 1212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(1473);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(1469);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1373);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(325);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'g') ADVANCE(346);
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'g') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(1281);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(1349);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(1241);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(1233);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(1203);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(1201);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(1270);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(1289);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(1357);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(1245);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(1237);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(1353);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(1350);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(300);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(301);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(1249);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(197);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(282);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(1305);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(1309);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(302);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(306);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(242);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(253);
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(100);
      END_STATE();
    case 161:
      if (lookahead == 'k') ADVANCE(109);
      END_STATE();
    case 162:
      if (lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 163:
      if (lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(1219);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(1217);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(1261);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(1359);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(1259);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(1358);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(1225);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(1295);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(1321);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(1339);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(1347);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(1360);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(1258);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(1239);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(1231);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(1207);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 255:
      if (lookahead == 'p') ADVANCE(1247);
      END_STATE();
    case 256:
      if (lookahead == 'p') ADVANCE(1301);
      END_STATE();
    case 257:
      if (lookahead == 'p') ADVANCE(1327);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(1345);
      END_STATE();
    case 259:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 261:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(1372);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(1285);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(1268);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(1352);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(1287);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(1291);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(1356);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(1243);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(1235);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(1283);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(1354);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(1355);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(1351);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(1209);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(1269);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(1267);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(1206);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(1213);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(1303);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(1307);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(1227);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(1297);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(1229);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(1299);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(1323);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(1341);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(1325);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(1343);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 338:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 339:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 340:
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 341:
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 342:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 344:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 345:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 346:
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 347:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 348:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 349:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 350:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 351:
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 352:
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 353:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 354:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 355:
      if (lookahead == 'w') ADVANCE(288);
      END_STATE();
    case 356:
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 357:
      if (lookahead == 'x') ADVANCE(1313);
      if (lookahead == 'y') ADVANCE(1315);
      END_STATE();
    case 358:
      if (lookahead == 'x') ADVANCE(1331);
      if (lookahead == 'y') ADVANCE(1333);
      END_STATE();
    case 359:
      if (lookahead == 'y') ADVANCE(1362);
      END_STATE();
    case 360:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 361:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 362:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 363:
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 364:
      if (lookahead == 'z') ADVANCE(64);
      END_STATE();
    case 365:
      if (lookahead == 'z') ADVANCE(135);
      END_STATE();
    case 366:
      if (lookahead == 'z') ADVANCE(230);
      END_STATE();
    case 367:
      if (lookahead == 'z') ADVANCE(68);
      END_STATE();
    case 368:
      if (lookahead == 'z') ADVANCE(250);
      END_STATE();
    case 369:
      if (lookahead == 'z') ADVANCE(251);
      END_STATE();
    case 370:
      if (lookahead == 'h' ||
          lookahead == 'w') ADVANCE(1372);
      END_STATE();
    case 371:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1374);
      END_STATE();
    case 372:
      if (eof) ADVANCE(374);
      ADVANCE_MAP(
        '!', 129,
        '#', 1473,
        '(', 1466,
        ')', 1467,
        ',', 375,
        '.', 379,
        '/', 4,
        ':', 381,
        ';', 1214,
        '>', 377,
        'd', 138,
        'e', 208,
        'f', 228,
        'h', 249,
        '{', 1211,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(372);
      END_STATE();
    case 373:
      if (eof) ADVANCE(374);
      if (lookahead == '#') ADVANCE(1200);
      if (lookahead == '$') ADVANCE(1468);
      if (lookahead == '&') ADVANCE(378);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_selector_list_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1374);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == '-') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'o') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'a') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'a') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'a') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'a') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'a') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'b') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'b') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'c') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'c') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'c') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'c') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'd') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'd') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'd') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'd') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'd') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'd') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == 'i') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'e') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'p') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'f') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'l') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'g') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'g') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'g') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'g') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'g') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'h') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'h') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'i') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'k') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'k') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'k') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'l') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'l') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'l') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'l') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'l') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'l') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'l') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'm') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'n') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'o') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'o') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'o') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'p') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == 'x') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == 'x') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 's') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 's') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead == 't') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 's') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 't') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'u') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'u') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'w') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'w') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'x') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'y') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'y') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'y') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'y') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'y') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_widget_selector);
      if (lookahead == 'y') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_widget_selector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '_') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1031);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1160);
      if (lookahead == 'o') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == 'o') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1069);
      if (lookahead == 'i') ADVANCE(1070);
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(1147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1187);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'u') ADVANCE(1048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1176);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'h') ADVANCE(830);
      if (lookahead == 'i') ADVANCE(959);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'h') ADVANCE(830);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(870);
      if (lookahead == 'x') ADVANCE(1105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(917);
      if (lookahead == 'o') ADVANCE(1030);
      if (lookahead == 's') ADVANCE(1138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1063);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1161);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(1161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead == 'u') ADVANCE(675);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'u') ADVANCE(680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(958);
      if (lookahead == 'u') ADVANCE(1048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(598);
      if (lookahead == 'd') ADVANCE(1427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'p') ADVANCE(887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(918);
      if (lookahead == 'b') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(920);
      if (lookahead == 'b') ADVANCE(585);
      if (lookahead == 'c') ADVANCE(1010);
      if (lookahead == 's') ADVANCE(1141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(921);
      if (lookahead == 'b') ADVANCE(586);
      if (lookahead == 'c') ADVANCE(1014);
      if (lookahead == 's') ADVANCE(1144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(1462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(881);
      if (lookahead == 'c') ADVANCE(1189);
      if (lookahead == 'g') ADVANCE(1057);
      if (lookahead == 'm') ADVANCE(573);
      if (lookahead == 'r') ADVANCE(709);
      if (lookahead == 'w') ADVANCE(795);
      if (lookahead == 'y') ADVANCE(728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(584);
      if (lookahead == 'c') ADVANCE(1001);
      if (lookahead == 's') ADVANCE(1122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(982);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'r') ADVANCE(846);
      if (lookahead == 's') ADVANCE(1151);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'r') ADVANCE(847);
      if (lookahead == 't') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(909);
      if (lookahead == 'c') ADVANCE(1190);
      if (lookahead == 'g') ADVANCE(1060);
      if (lookahead == 'm') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(714);
      if (lookahead == 'w') ADVANCE(796);
      if (lookahead == 'y') ADVANCE(732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(1132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(901);
      if (lookahead == 'r') ADVANCE(1089);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(1018);
      if (lookahead == 'l') ADVANCE(726);
      if (lookahead == 'r') ADVANCE(848);
      if (lookahead == 't') ADVANCE(998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'b') ADVANCE(1019);
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead == 'r') ADVANCE(849);
      if (lookahead == 't') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(1436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(853);
      if (lookahead == 'u') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(1049);
      if (lookahead == 'i') ADVANCE(883);
      if (lookahead == 'o') ADVANCE(889);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(854);
      if (lookahead == 'n') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(1093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(1152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'c') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1393);
      if (lookahead == 'v') ADVANCE(701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(1108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == 'g') ADVANCE(587);
      if (lookahead == 'i') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == 'g') ADVANCE(587);
      if (lookahead == 'i') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(1155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1459);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(641);
      if (lookahead == 'k') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(1051);
      if (lookahead == 's') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(953);
      if (lookahead == 'o') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(953);
      if (lookahead == 'o') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1054);
      if (lookahead == 'i') ADVANCE(1075);
      if (lookahead == 'k') ADVANCE(692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1054);
      if (lookahead == 'i') ADVANCE(1080);
      if (lookahead == 'k') ADVANCE(692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1036);
      if (lookahead == 'o') ADVANCE(1153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead == 'l') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1061);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(641);
      if (lookahead == 'k') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(1052);
      if (lookahead == 's') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1092);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1040);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead == 'o') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'e') ADVANCE(1066);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(741);
      if (lookahead == 'l') ADVANCE(804);
      if (lookahead == 'p') ADVANCE(570);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(1085);
      if (lookahead == 'v') ADVANCE(690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(1077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(1086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(892);
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(1182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(890);
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(1096);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(1097);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(1101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'f') ADVANCE(1102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(1337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(1250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(1050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(815);
      if (lookahead == 'o') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(1059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(1062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'g') ADVANCE(1064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1421);
      if (lookahead == 't') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(813);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(813);
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1002);
      if (lookahead == 'v') ADVANCE(737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1088);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(721);
      if (lookahead == 'w') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1095);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1099);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1012);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(736);
      if (lookahead == 'w') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'h') ADVANCE(1020);
      if (lookahead == 'v') ADVANCE(739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1135);
      if (lookahead == 'o') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(914);
      if (lookahead == 'l') ADVANCE(674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'i') ADVANCE(1146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(1266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(1382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(1417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(1418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(1453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(1400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(1402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'k') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(805);
      if (lookahead == 'n') ADVANCE(1074);
      if (lookahead == 'q') ADVANCE(1150);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead == 'u') ADVANCE(1084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(995);
      if (lookahead == 'n') ADVANCE(1076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(574);
      if (lookahead == 'r') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(804);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(1136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(652);
      if (lookahead == 't') ADVANCE(774);
      if (lookahead == 'x') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(653);
      if (lookahead == 't') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'l') ADVANCE(738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'm') ADVANCE(1422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'm') ADVANCE(1226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'm') ADVANCE(1296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'm') ADVANCE(1322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'm') ADVANCE(1340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'm') ADVANCE(659);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'm') ADVANCE(659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'm') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1074);
      if (lookahead == 'q') ADVANCE(1150);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead == 'u') ADVANCE(1084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(743);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1087);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1098);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(1134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(616);
      if (lookahead == 'u') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1033);
      if (lookahead == 'u') ADVANCE(930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1067);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'o') ADVANCE(1068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(1454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(1248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(1302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(1328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(1346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'p') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(755);
      if (lookahead == 'x') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1029);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(802);
      if (lookahead == 'v') ADVANCE(693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1081);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(1142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'r') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(1205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(1118);
      if (lookahead == 't') ADVANCE(724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(1115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 's') ADVANCE(1028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1124);
      if (lookahead == 'x') ADVANCE(1420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(1194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(1082);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(1071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(1091);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead == 'w') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'u') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'v') ADVANCE(1178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'v') ADVANCE(1180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'v') ADVANCE(663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'v') ADVANCE(713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'v') ADVANCE(716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'v') ADVANCE(717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'v') ADVANCE(719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'w') ADVANCE(1397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'w') ADVANCE(1329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'w') ADVANCE(1415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'w') ADVANCE(1409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'w') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'x') ADVANCE(1314);
      if (lookahead == 'y') ADVANCE(1316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'x') ADVANCE(1420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'x') ADVANCE(1332);
      if (lookahead == 'y') ADVANCE(1334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'x') ADVANCE(1424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(1363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'y') ADVANCE(908);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'z') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1199);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'z') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1199);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'z') ADVANCE(1011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1199);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == 'z') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1199);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_class_selector_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_disabled);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_enabled);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_enabled);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '-') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_focus);
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_focus_DASHwithin);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_focus_DASHwithin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_hover);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_hover);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_BANGimportant);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_align_DASHhorizontal);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_align_DASHhorizontal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_align_DASHvertical);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_align_DASHvertical);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_background);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_background);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_border);
      if (lookahead == '-') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_border);
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_border_DASHbottom);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_border_DASHbottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_border_DASHleft);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_border_DASHleft);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_border_DASHright);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_border_DASHright);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_border_DASHsubtitle_DASHalign);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_border_DASHsubtitle_DASHalign);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_border_DASHsubtitle_DASHbackground);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_border_DASHsubtitle_DASHbackground);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_border_DASHsubtitle_DASHcolor);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_border_DASHsubtitle_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_border_DASHsubtitle_DASHstyle);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_border_DASHsubtitle_DASHstyle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_border_DASHtitle_DASHalign);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_border_DASHtitle_DASHalign);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_border_DASHtitle_DASHbackground);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_border_DASHtitle_DASHbackground);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_border_DASHtitle_DASHcolor);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_border_DASHtitle_DASHcolor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_border_DASHtitle_DASHstyle);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_border_DASHtitle_DASHstyle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_border_DASHtop);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_border_DASHtop);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_box_DASHsizing);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_box_DASHsizing);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_column_DASHspan);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_column_DASHspan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(anon_sym_constrain);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_constrain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_content_DASHalign);
      if (lookahead == '-') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(anon_sym_content_DASHalign);
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(anon_sym_content_DASHalign_DASHhorizontal);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(anon_sym_content_DASHalign_DASHhorizontal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(anon_sym_content_DASHalign_DASHvertical);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(anon_sym_content_DASHalign_DASHvertical);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_display);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_display);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(anon_sym_dock);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(anon_sym_dock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(anon_sym_grid_DASHcolumns);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(anon_sym_grid_DASHgutter);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(anon_sym_grid_DASHrows);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_grid_DASHsize);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_height);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_height);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_keyline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_keyline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_layer);
      if (lookahead == 's') ADVANCE(1278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_layer);
      if (lookahead == 's') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_layers);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_layers);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_layout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_link_DASHbackground);
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_link_DASHbackground);
      if (lookahead == '-') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_link_DASHbackground_DASHhover);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_link_DASHbackground_DASHhover);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_link_DASHcolor);
      if (lookahead == '-') ADVANCE(118);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_link_DASHcolor);
      if (lookahead == '-') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_link_DASHcolor_DASHhover);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_link_DASHcolor_DASHhover);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_link_DASHstyle);
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_link_DASHstyle);
      if (lookahead == '-') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_link_DASHstyle_DASHhover);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_link_DASHstyle_DASHhover);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_margin);
      if (lookahead == '-') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_margin);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_margin_DASHbottom);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_margin_DASHbottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_margin_DASHleft);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_margin_DASHleft);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_margin_DASHright);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_margin_DASHright);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_margin_DASHtop);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_margin_DASHtop);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_max_DASHheight);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_max_DASHheight);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_max_DASHwidth);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_max_DASHwidth);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_min_DASHheight);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_min_DASHheight);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_min_DASHwidth);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_min_DASHwidth);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_offset);
      if (lookahead == '-') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_offset);
      if (lookahead == '-') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_offset_DASHx);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_offset_DASHx);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_offset_DASHy);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_offset_DASHy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_outline);
      if (lookahead == '-') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_outline);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_outline_DASHbottom);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_outline_DASHbottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_outline_DASHleft);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_outline_DASHleft);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_outline_DASHright);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_outline_DASHright);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_outline_DASHtop);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_outline_DASHtop);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_overflow);
      if (lookahead == '-') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_overflow);
      if (lookahead == '-') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_overflow_DASHx);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_overflow_DASHx);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_overflow_DASHy);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_overflow_DASHy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_overlay);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_overlay);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_padding);
      if (lookahead == '-') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_padding);
      if (lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_padding_DASHbottom);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_padding_DASHbottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_padding_DASHleft);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_padding_DASHleft);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_padding_DASHright);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_padding_DASHright);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_padding_DASHtop);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_padding_DASHtop);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_row_DASHspan);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_row_DASHspan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHbackground);
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHbackground_DASHactive);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHbackground_DASHhover);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHcolor);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHcolor_DASHactive);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHcolor_DASHhover);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHcorner_DASHcolor);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHgutter);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHsize);
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHsize_DASHhorizontal);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_scrollbar_DASHsize_DASHvertical);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_text_DASHalign);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_text_DASHalign);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_text_DASHopacity);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_text_DASHopacity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_text_DASHstyle);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_text_DASHstyle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_tint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_tint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_visibility);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_visibility);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_width);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_width);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'v') ADVANCE(370);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'w') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1373);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'v') ADVANCE(370);
      if (lookahead == '%' ||
          lookahead == 'h' ||
          lookahead == 'w') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1374);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_hex_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_hex_color);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_aqua);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_fuchsia);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_gray);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_lime);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_maroon);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_navy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_olive);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_orange);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_purple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_silver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_teal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_transparent);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_ansi_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_ansi_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_ansi_bright_black);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_ansi_bright_blue);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_ansi_bright_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_ansi_bright_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_ansi_bright_magenta);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_ansi_bright_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_ansi_bright_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_ansi_bright_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_ansi_cyan);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_ansi_green);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_ansi_magenta);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_ansi_red);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_ansi_white);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_ansi_yellow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_ascii);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_blank);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_border_DASHbox);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_both);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_content_DASHbox);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_dashed);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_grid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_heavy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_hkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_inflect);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_initial);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_inner);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_justify);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_middle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_outer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_panel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_round);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_screen);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_scroll);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_solid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_stable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_strike);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_tall);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_thick);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_visible);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_vkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_wide);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_y);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(1463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_rgba);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_hsl);
      if (lookahead == 'a') ADVANCE(1465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_hsla);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_comment_block);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_comment_line);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_comment_line);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_comment_line);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1473);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 373},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 373},
  [26] = {.lex_state = 373},
  [27] = {.lex_state = 376},
  [28] = {.lex_state = 373},
  [29] = {.lex_state = 373},
  [30] = {.lex_state = 373},
  [31] = {.lex_state = 373},
  [32] = {.lex_state = 373},
  [33] = {.lex_state = 373},
  [34] = {.lex_state = 373},
  [35] = {.lex_state = 372},
  [36] = {.lex_state = 372},
  [37] = {.lex_state = 372},
  [38] = {.lex_state = 372},
  [39] = {.lex_state = 372},
  [40] = {.lex_state = 372},
  [41] = {.lex_state = 372},
  [42] = {.lex_state = 372},
  [43] = {.lex_state = 372},
  [44] = {.lex_state = 372},
  [45] = {.lex_state = 372},
  [46] = {.lex_state = 372},
  [47] = {.lex_state = 372},
  [48] = {.lex_state = 372},
  [49] = {.lex_state = 372},
  [50] = {.lex_state = 372},
  [51] = {.lex_state = 372},
  [52] = {.lex_state = 372},
  [53] = {.lex_state = 372},
  [54] = {.lex_state = 372},
  [55] = {.lex_state = 372},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 372},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 372},
  [60] = {.lex_state = 372},
  [61] = {.lex_state = 372},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 372},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 372},
  [69] = {.lex_state = 372},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 372},
  [72] = {.lex_state = 372},
  [73] = {.lex_state = 372},
  [74] = {.lex_state = 372},
  [75] = {.lex_state = 372},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_class_selector_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_disabled] = ACTIONS(1),
    [anon_sym_enabled] = ACTIONS(1),
    [anon_sym_focus] = ACTIONS(1),
    [anon_sym_focus_DASHwithin] = ACTIONS(1),
    [anon_sym_hover] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BANGimportant] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_align_DASHhorizontal] = ACTIONS(1),
    [anon_sym_align_DASHvertical] = ACTIONS(1),
    [anon_sym_background] = ACTIONS(1),
    [anon_sym_border] = ACTIONS(1),
    [anon_sym_border_DASHbottom] = ACTIONS(1),
    [anon_sym_border_DASHleft] = ACTIONS(1),
    [anon_sym_border_DASHright] = ACTIONS(1),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(1),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(1),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(1),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(1),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(1),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(1),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(1),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(1),
    [anon_sym_border_DASHtop] = ACTIONS(1),
    [anon_sym_box_DASHsizing] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_column_DASHspan] = ACTIONS(1),
    [anon_sym_constrain] = ACTIONS(1),
    [anon_sym_content_DASHalign] = ACTIONS(1),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(1),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(1),
    [anon_sym_display] = ACTIONS(1),
    [anon_sym_dock] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_keyline] = ACTIONS(1),
    [anon_sym_layer] = ACTIONS(1),
    [anon_sym_layers] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_link_DASHbackground] = ACTIONS(1),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(1),
    [anon_sym_link_DASHcolor] = ACTIONS(1),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(1),
    [anon_sym_link_DASHstyle] = ACTIONS(1),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(1),
    [anon_sym_margin] = ACTIONS(1),
    [anon_sym_margin_DASHbottom] = ACTIONS(1),
    [anon_sym_margin_DASHleft] = ACTIONS(1),
    [anon_sym_margin_DASHright] = ACTIONS(1),
    [anon_sym_margin_DASHtop] = ACTIONS(1),
    [anon_sym_max_DASHheight] = ACTIONS(1),
    [anon_sym_max_DASHwidth] = ACTIONS(1),
    [anon_sym_min_DASHheight] = ACTIONS(1),
    [anon_sym_min_DASHwidth] = ACTIONS(1),
    [anon_sym_offset] = ACTIONS(1),
    [anon_sym_offset_DASHx] = ACTIONS(1),
    [anon_sym_offset_DASHy] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_outline] = ACTIONS(1),
    [anon_sym_outline_DASHbottom] = ACTIONS(1),
    [anon_sym_outline_DASHleft] = ACTIONS(1),
    [anon_sym_outline_DASHright] = ACTIONS(1),
    [anon_sym_outline_DASHtop] = ACTIONS(1),
    [anon_sym_overflow] = ACTIONS(1),
    [anon_sym_overflow_DASHx] = ACTIONS(1),
    [anon_sym_overflow_DASHy] = ACTIONS(1),
    [anon_sym_overlay] = ACTIONS(1),
    [anon_sym_padding] = ACTIONS(1),
    [anon_sym_padding_DASHbottom] = ACTIONS(1),
    [anon_sym_padding_DASHleft] = ACTIONS(1),
    [anon_sym_padding_DASHright] = ACTIONS(1),
    [anon_sym_padding_DASHtop] = ACTIONS(1),
    [anon_sym_row_DASHspan] = ACTIONS(1),
    [anon_sym_text_DASHalign] = ACTIONS(1),
    [anon_sym_text_DASHopacity] = ACTIONS(1),
    [anon_sym_text_DASHstyle] = ACTIONS(1),
    [anon_sym_tint] = ACTIONS(1),
    [anon_sym_visibility] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_aqua] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_fuchsia] = ACTIONS(1),
    [anon_sym_gray] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_lime] = ACTIONS(1),
    [anon_sym_maroon] = ACTIONS(1),
    [anon_sym_navy] = ACTIONS(1),
    [anon_sym_olive] = ACTIONS(1),
    [anon_sym_orange] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_silver] = ACTIONS(1),
    [anon_sym_teal] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_transparent] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_ansi_black] = ACTIONS(1),
    [anon_sym_ansi_blue] = ACTIONS(1),
    [anon_sym_ansi_bright_black] = ACTIONS(1),
    [anon_sym_ansi_bright_blue] = ACTIONS(1),
    [anon_sym_ansi_bright_cyan] = ACTIONS(1),
    [anon_sym_ansi_bright_green] = ACTIONS(1),
    [anon_sym_ansi_bright_magenta] = ACTIONS(1),
    [anon_sym_ansi_bright_red] = ACTIONS(1),
    [anon_sym_ansi_bright_white] = ACTIONS(1),
    [anon_sym_ansi_bright_yellow] = ACTIONS(1),
    [anon_sym_ansi_cyan] = ACTIONS(1),
    [anon_sym_ansi_green] = ACTIONS(1),
    [anon_sym_ansi_magenta] = ACTIONS(1),
    [anon_sym_ansi_red] = ACTIONS(1),
    [anon_sym_ansi_white] = ACTIONS(1),
    [anon_sym_ansi_yellow] = ACTIONS(1),
    [anon_sym_ascii] = ACTIONS(1),
    [anon_sym_blank] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_border_DASHbox] = ACTIONS(1),
    [anon_sym_both] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_content_DASHbox] = ACTIONS(1),
    [anon_sym_dashed] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_grid] = ACTIONS(1),
    [anon_sym_heavy] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_hkey] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_inflect] = ACTIONS(1),
    [anon_sym_initial] = ACTIONS(1),
    [anon_sym_inner] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_justify] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_middle] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_outer] = ACTIONS(1),
    [anon_sym_panel] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_round] = ACTIONS(1),
    [anon_sym_screen] = ACTIONS(1),
    [anon_sym_scroll] = ACTIONS(1),
    [anon_sym_solid] = ACTIONS(1),
    [anon_sym_stable] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_strike] = ACTIONS(1),
    [anon_sym_tall] = ACTIONS(1),
    [anon_sym_thick] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_visible] = ACTIONS(1),
    [anon_sym_vkey] = ACTIONS(1),
    [anon_sym_wide] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_rgb] = ACTIONS(1),
    [anon_sym_rgba] = ACTIONS(1),
    [anon_sym_hsl] = ACTIONS(1),
    [anon_sym_hsla] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym_statement] = STATE(25),
    [sym_rule] = STATE(31),
    [sym_selector_list] = STATE(61),
    [sym_selector] = STATE(41),
    [sym_simple_selector] = STATE(38),
    [sym_nesting_selector_rule] = STATE(52),
    [sym_class_selector] = STATE(39),
    [sym_id_selector] = STATE(39),
    [sym_variable_definition] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_widget_selector] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [2] = {
    [sym_rule] = STATE(5),
    [sym_selector_list] = STATE(59),
    [sym_selector] = STATE(41),
    [sym_simple_selector] = STATE(38),
    [sym_nesting_selector_rule] = STATE(52),
    [sym_class_selector] = STATE(39),
    [sym_id_selector] = STATE(39),
    [sym_declaration] = STATE(5),
    [sym_property_name] = STATE(72),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_widget_selector] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_align] = ACTIONS(23),
    [anon_sym_align_DASHhorizontal] = ACTIONS(25),
    [anon_sym_align_DASHvertical] = ACTIONS(25),
    [anon_sym_background] = ACTIONS(23),
    [anon_sym_border] = ACTIONS(23),
    [anon_sym_border_DASHbottom] = ACTIONS(25),
    [anon_sym_border_DASHleft] = ACTIONS(25),
    [anon_sym_border_DASHright] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(25),
    [anon_sym_border_DASHtop] = ACTIONS(25),
    [anon_sym_box_DASHsizing] = ACTIONS(25),
    [anon_sym_color] = ACTIONS(23),
    [anon_sym_column_DASHspan] = ACTIONS(25),
    [anon_sym_constrain] = ACTIONS(23),
    [anon_sym_content_DASHalign] = ACTIONS(23),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(25),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(25),
    [anon_sym_display] = ACTIONS(23),
    [anon_sym_dock] = ACTIONS(23),
    [anon_sym_grid_DASHcolumns] = ACTIONS(25),
    [anon_sym_grid_DASHgutter] = ACTIONS(25),
    [anon_sym_grid_DASHrows] = ACTIONS(25),
    [anon_sym_grid_DASHsize] = ACTIONS(25),
    [anon_sym_height] = ACTIONS(23),
    [anon_sym_keyline] = ACTIONS(23),
    [anon_sym_layer] = ACTIONS(23),
    [anon_sym_layers] = ACTIONS(23),
    [anon_sym_layout] = ACTIONS(23),
    [anon_sym_link_DASHbackground] = ACTIONS(23),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(25),
    [anon_sym_link_DASHcolor] = ACTIONS(23),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(25),
    [anon_sym_link_DASHstyle] = ACTIONS(23),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(25),
    [anon_sym_margin] = ACTIONS(23),
    [anon_sym_margin_DASHbottom] = ACTIONS(25),
    [anon_sym_margin_DASHleft] = ACTIONS(25),
    [anon_sym_margin_DASHright] = ACTIONS(25),
    [anon_sym_margin_DASHtop] = ACTIONS(25),
    [anon_sym_max_DASHheight] = ACTIONS(25),
    [anon_sym_max_DASHwidth] = ACTIONS(25),
    [anon_sym_min_DASHheight] = ACTIONS(25),
    [anon_sym_min_DASHwidth] = ACTIONS(25),
    [anon_sym_offset] = ACTIONS(23),
    [anon_sym_offset_DASHx] = ACTIONS(25),
    [anon_sym_offset_DASHy] = ACTIONS(25),
    [anon_sym_opacity] = ACTIONS(23),
    [anon_sym_outline] = ACTIONS(23),
    [anon_sym_outline_DASHbottom] = ACTIONS(25),
    [anon_sym_outline_DASHleft] = ACTIONS(25),
    [anon_sym_outline_DASHright] = ACTIONS(25),
    [anon_sym_outline_DASHtop] = ACTIONS(25),
    [anon_sym_overflow] = ACTIONS(23),
    [anon_sym_overflow_DASHx] = ACTIONS(25),
    [anon_sym_overflow_DASHy] = ACTIONS(25),
    [anon_sym_overlay] = ACTIONS(23),
    [anon_sym_padding] = ACTIONS(23),
    [anon_sym_padding_DASHbottom] = ACTIONS(25),
    [anon_sym_padding_DASHleft] = ACTIONS(25),
    [anon_sym_padding_DASHright] = ACTIONS(25),
    [anon_sym_padding_DASHtop] = ACTIONS(25),
    [anon_sym_row_DASHspan] = ACTIONS(25),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(23),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(25),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(23),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(25),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(25),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(23),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(25),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(25),
    [anon_sym_text_DASHalign] = ACTIONS(25),
    [anon_sym_text_DASHopacity] = ACTIONS(25),
    [anon_sym_text_DASHstyle] = ACTIONS(25),
    [anon_sym_tint] = ACTIONS(23),
    [anon_sym_visibility] = ACTIONS(23),
    [anon_sym_width] = ACTIONS(23),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [3] = {
    [sym_rule] = STATE(4),
    [sym_selector_list] = STATE(59),
    [sym_selector] = STATE(41),
    [sym_simple_selector] = STATE(38),
    [sym_nesting_selector_rule] = STATE(52),
    [sym_class_selector] = STATE(39),
    [sym_id_selector] = STATE(39),
    [sym_declaration] = STATE(4),
    [sym_property_name] = STATE(72),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_widget_selector] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_align] = ACTIONS(23),
    [anon_sym_align_DASHhorizontal] = ACTIONS(25),
    [anon_sym_align_DASHvertical] = ACTIONS(25),
    [anon_sym_background] = ACTIONS(23),
    [anon_sym_border] = ACTIONS(23),
    [anon_sym_border_DASHbottom] = ACTIONS(25),
    [anon_sym_border_DASHleft] = ACTIONS(25),
    [anon_sym_border_DASHright] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(25),
    [anon_sym_border_DASHtop] = ACTIONS(25),
    [anon_sym_box_DASHsizing] = ACTIONS(25),
    [anon_sym_color] = ACTIONS(23),
    [anon_sym_column_DASHspan] = ACTIONS(25),
    [anon_sym_constrain] = ACTIONS(23),
    [anon_sym_content_DASHalign] = ACTIONS(23),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(25),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(25),
    [anon_sym_display] = ACTIONS(23),
    [anon_sym_dock] = ACTIONS(23),
    [anon_sym_grid_DASHcolumns] = ACTIONS(25),
    [anon_sym_grid_DASHgutter] = ACTIONS(25),
    [anon_sym_grid_DASHrows] = ACTIONS(25),
    [anon_sym_grid_DASHsize] = ACTIONS(25),
    [anon_sym_height] = ACTIONS(23),
    [anon_sym_keyline] = ACTIONS(23),
    [anon_sym_layer] = ACTIONS(23),
    [anon_sym_layers] = ACTIONS(23),
    [anon_sym_layout] = ACTIONS(23),
    [anon_sym_link_DASHbackground] = ACTIONS(23),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(25),
    [anon_sym_link_DASHcolor] = ACTIONS(23),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(25),
    [anon_sym_link_DASHstyle] = ACTIONS(23),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(25),
    [anon_sym_margin] = ACTIONS(23),
    [anon_sym_margin_DASHbottom] = ACTIONS(25),
    [anon_sym_margin_DASHleft] = ACTIONS(25),
    [anon_sym_margin_DASHright] = ACTIONS(25),
    [anon_sym_margin_DASHtop] = ACTIONS(25),
    [anon_sym_max_DASHheight] = ACTIONS(25),
    [anon_sym_max_DASHwidth] = ACTIONS(25),
    [anon_sym_min_DASHheight] = ACTIONS(25),
    [anon_sym_min_DASHwidth] = ACTIONS(25),
    [anon_sym_offset] = ACTIONS(23),
    [anon_sym_offset_DASHx] = ACTIONS(25),
    [anon_sym_offset_DASHy] = ACTIONS(25),
    [anon_sym_opacity] = ACTIONS(23),
    [anon_sym_outline] = ACTIONS(23),
    [anon_sym_outline_DASHbottom] = ACTIONS(25),
    [anon_sym_outline_DASHleft] = ACTIONS(25),
    [anon_sym_outline_DASHright] = ACTIONS(25),
    [anon_sym_outline_DASHtop] = ACTIONS(25),
    [anon_sym_overflow] = ACTIONS(23),
    [anon_sym_overflow_DASHx] = ACTIONS(25),
    [anon_sym_overflow_DASHy] = ACTIONS(25),
    [anon_sym_overlay] = ACTIONS(23),
    [anon_sym_padding] = ACTIONS(23),
    [anon_sym_padding_DASHbottom] = ACTIONS(25),
    [anon_sym_padding_DASHleft] = ACTIONS(25),
    [anon_sym_padding_DASHright] = ACTIONS(25),
    [anon_sym_padding_DASHtop] = ACTIONS(25),
    [anon_sym_row_DASHspan] = ACTIONS(25),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(23),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(25),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(23),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(25),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(25),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(23),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(25),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(25),
    [anon_sym_text_DASHalign] = ACTIONS(25),
    [anon_sym_text_DASHopacity] = ACTIONS(25),
    [anon_sym_text_DASHstyle] = ACTIONS(25),
    [anon_sym_tint] = ACTIONS(23),
    [anon_sym_visibility] = ACTIONS(23),
    [anon_sym_width] = ACTIONS(23),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [4] = {
    [sym_rule] = STATE(5),
    [sym_selector_list] = STATE(59),
    [sym_selector] = STATE(41),
    [sym_simple_selector] = STATE(38),
    [sym_nesting_selector_rule] = STATE(52),
    [sym_class_selector] = STATE(39),
    [sym_id_selector] = STATE(39),
    [sym_declaration] = STATE(5),
    [sym_property_name] = STATE(72),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_widget_selector] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_align] = ACTIONS(23),
    [anon_sym_align_DASHhorizontal] = ACTIONS(25),
    [anon_sym_align_DASHvertical] = ACTIONS(25),
    [anon_sym_background] = ACTIONS(23),
    [anon_sym_border] = ACTIONS(23),
    [anon_sym_border_DASHbottom] = ACTIONS(25),
    [anon_sym_border_DASHleft] = ACTIONS(25),
    [anon_sym_border_DASHright] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(25),
    [anon_sym_border_DASHtop] = ACTIONS(25),
    [anon_sym_box_DASHsizing] = ACTIONS(25),
    [anon_sym_color] = ACTIONS(23),
    [anon_sym_column_DASHspan] = ACTIONS(25),
    [anon_sym_constrain] = ACTIONS(23),
    [anon_sym_content_DASHalign] = ACTIONS(23),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(25),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(25),
    [anon_sym_display] = ACTIONS(23),
    [anon_sym_dock] = ACTIONS(23),
    [anon_sym_grid_DASHcolumns] = ACTIONS(25),
    [anon_sym_grid_DASHgutter] = ACTIONS(25),
    [anon_sym_grid_DASHrows] = ACTIONS(25),
    [anon_sym_grid_DASHsize] = ACTIONS(25),
    [anon_sym_height] = ACTIONS(23),
    [anon_sym_keyline] = ACTIONS(23),
    [anon_sym_layer] = ACTIONS(23),
    [anon_sym_layers] = ACTIONS(23),
    [anon_sym_layout] = ACTIONS(23),
    [anon_sym_link_DASHbackground] = ACTIONS(23),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(25),
    [anon_sym_link_DASHcolor] = ACTIONS(23),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(25),
    [anon_sym_link_DASHstyle] = ACTIONS(23),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(25),
    [anon_sym_margin] = ACTIONS(23),
    [anon_sym_margin_DASHbottom] = ACTIONS(25),
    [anon_sym_margin_DASHleft] = ACTIONS(25),
    [anon_sym_margin_DASHright] = ACTIONS(25),
    [anon_sym_margin_DASHtop] = ACTIONS(25),
    [anon_sym_max_DASHheight] = ACTIONS(25),
    [anon_sym_max_DASHwidth] = ACTIONS(25),
    [anon_sym_min_DASHheight] = ACTIONS(25),
    [anon_sym_min_DASHwidth] = ACTIONS(25),
    [anon_sym_offset] = ACTIONS(23),
    [anon_sym_offset_DASHx] = ACTIONS(25),
    [anon_sym_offset_DASHy] = ACTIONS(25),
    [anon_sym_opacity] = ACTIONS(23),
    [anon_sym_outline] = ACTIONS(23),
    [anon_sym_outline_DASHbottom] = ACTIONS(25),
    [anon_sym_outline_DASHleft] = ACTIONS(25),
    [anon_sym_outline_DASHright] = ACTIONS(25),
    [anon_sym_outline_DASHtop] = ACTIONS(25),
    [anon_sym_overflow] = ACTIONS(23),
    [anon_sym_overflow_DASHx] = ACTIONS(25),
    [anon_sym_overflow_DASHy] = ACTIONS(25),
    [anon_sym_overlay] = ACTIONS(23),
    [anon_sym_padding] = ACTIONS(23),
    [anon_sym_padding_DASHbottom] = ACTIONS(25),
    [anon_sym_padding_DASHleft] = ACTIONS(25),
    [anon_sym_padding_DASHright] = ACTIONS(25),
    [anon_sym_padding_DASHtop] = ACTIONS(25),
    [anon_sym_row_DASHspan] = ACTIONS(25),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(23),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(25),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(23),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(25),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(25),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(23),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(25),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(25),
    [anon_sym_text_DASHalign] = ACTIONS(25),
    [anon_sym_text_DASHopacity] = ACTIONS(25),
    [anon_sym_text_DASHstyle] = ACTIONS(25),
    [anon_sym_tint] = ACTIONS(23),
    [anon_sym_visibility] = ACTIONS(23),
    [anon_sym_width] = ACTIONS(23),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [5] = {
    [sym_rule] = STATE(5),
    [sym_selector_list] = STATE(59),
    [sym_selector] = STATE(41),
    [sym_simple_selector] = STATE(38),
    [sym_nesting_selector_rule] = STATE(52),
    [sym_class_selector] = STATE(39),
    [sym_id_selector] = STATE(39),
    [sym_declaration] = STATE(5),
    [sym_property_name] = STATE(72),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(34),
    [sym_widget_selector] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_align] = ACTIONS(45),
    [anon_sym_align_DASHhorizontal] = ACTIONS(48),
    [anon_sym_align_DASHvertical] = ACTIONS(48),
    [anon_sym_background] = ACTIONS(45),
    [anon_sym_border] = ACTIONS(45),
    [anon_sym_border_DASHbottom] = ACTIONS(48),
    [anon_sym_border_DASHleft] = ACTIONS(48),
    [anon_sym_border_DASHright] = ACTIONS(48),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(48),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(48),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(48),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(48),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(48),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(48),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(48),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(48),
    [anon_sym_border_DASHtop] = ACTIONS(48),
    [anon_sym_box_DASHsizing] = ACTIONS(48),
    [anon_sym_color] = ACTIONS(45),
    [anon_sym_column_DASHspan] = ACTIONS(48),
    [anon_sym_constrain] = ACTIONS(45),
    [anon_sym_content_DASHalign] = ACTIONS(45),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(48),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(48),
    [anon_sym_display] = ACTIONS(45),
    [anon_sym_dock] = ACTIONS(45),
    [anon_sym_grid_DASHcolumns] = ACTIONS(48),
    [anon_sym_grid_DASHgutter] = ACTIONS(48),
    [anon_sym_grid_DASHrows] = ACTIONS(48),
    [anon_sym_grid_DASHsize] = ACTIONS(48),
    [anon_sym_height] = ACTIONS(45),
    [anon_sym_keyline] = ACTIONS(45),
    [anon_sym_layer] = ACTIONS(45),
    [anon_sym_layers] = ACTIONS(45),
    [anon_sym_layout] = ACTIONS(45),
    [anon_sym_link_DASHbackground] = ACTIONS(45),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(48),
    [anon_sym_link_DASHcolor] = ACTIONS(45),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(48),
    [anon_sym_link_DASHstyle] = ACTIONS(45),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(48),
    [anon_sym_margin] = ACTIONS(45),
    [anon_sym_margin_DASHbottom] = ACTIONS(48),
    [anon_sym_margin_DASHleft] = ACTIONS(48),
    [anon_sym_margin_DASHright] = ACTIONS(48),
    [anon_sym_margin_DASHtop] = ACTIONS(48),
    [anon_sym_max_DASHheight] = ACTIONS(48),
    [anon_sym_max_DASHwidth] = ACTIONS(48),
    [anon_sym_min_DASHheight] = ACTIONS(48),
    [anon_sym_min_DASHwidth] = ACTIONS(48),
    [anon_sym_offset] = ACTIONS(45),
    [anon_sym_offset_DASHx] = ACTIONS(48),
    [anon_sym_offset_DASHy] = ACTIONS(48),
    [anon_sym_opacity] = ACTIONS(45),
    [anon_sym_outline] = ACTIONS(45),
    [anon_sym_outline_DASHbottom] = ACTIONS(48),
    [anon_sym_outline_DASHleft] = ACTIONS(48),
    [anon_sym_outline_DASHright] = ACTIONS(48),
    [anon_sym_outline_DASHtop] = ACTIONS(48),
    [anon_sym_overflow] = ACTIONS(45),
    [anon_sym_overflow_DASHx] = ACTIONS(48),
    [anon_sym_overflow_DASHy] = ACTIONS(48),
    [anon_sym_overlay] = ACTIONS(45),
    [anon_sym_padding] = ACTIONS(45),
    [anon_sym_padding_DASHbottom] = ACTIONS(48),
    [anon_sym_padding_DASHleft] = ACTIONS(48),
    [anon_sym_padding_DASHright] = ACTIONS(48),
    [anon_sym_padding_DASHtop] = ACTIONS(48),
    [anon_sym_row_DASHspan] = ACTIONS(48),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(45),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(48),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(48),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(45),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(48),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(48),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(48),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(48),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(45),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(48),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(48),
    [anon_sym_text_DASHalign] = ACTIONS(48),
    [anon_sym_text_DASHopacity] = ACTIONS(48),
    [anon_sym_text_DASHstyle] = ACTIONS(48),
    [anon_sym_tint] = ACTIONS(45),
    [anon_sym_visibility] = ACTIONS(45),
    [anon_sym_width] = ACTIONS(45),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [6] = {
    [sym_rule] = STATE(2),
    [sym_selector_list] = STATE(59),
    [sym_selector] = STATE(41),
    [sym_simple_selector] = STATE(38),
    [sym_nesting_selector_rule] = STATE(52),
    [sym_class_selector] = STATE(39),
    [sym_id_selector] = STATE(39),
    [sym_declaration] = STATE(2),
    [sym_property_name] = STATE(72),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [sym_widget_selector] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_align] = ACTIONS(23),
    [anon_sym_align_DASHhorizontal] = ACTIONS(25),
    [anon_sym_align_DASHvertical] = ACTIONS(25),
    [anon_sym_background] = ACTIONS(23),
    [anon_sym_border] = ACTIONS(23),
    [anon_sym_border_DASHbottom] = ACTIONS(25),
    [anon_sym_border_DASHleft] = ACTIONS(25),
    [anon_sym_border_DASHright] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(25),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(25),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(25),
    [anon_sym_border_DASHtop] = ACTIONS(25),
    [anon_sym_box_DASHsizing] = ACTIONS(25),
    [anon_sym_color] = ACTIONS(23),
    [anon_sym_column_DASHspan] = ACTIONS(25),
    [anon_sym_constrain] = ACTIONS(23),
    [anon_sym_content_DASHalign] = ACTIONS(23),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(25),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(25),
    [anon_sym_display] = ACTIONS(23),
    [anon_sym_dock] = ACTIONS(23),
    [anon_sym_grid_DASHcolumns] = ACTIONS(25),
    [anon_sym_grid_DASHgutter] = ACTIONS(25),
    [anon_sym_grid_DASHrows] = ACTIONS(25),
    [anon_sym_grid_DASHsize] = ACTIONS(25),
    [anon_sym_height] = ACTIONS(23),
    [anon_sym_keyline] = ACTIONS(23),
    [anon_sym_layer] = ACTIONS(23),
    [anon_sym_layers] = ACTIONS(23),
    [anon_sym_layout] = ACTIONS(23),
    [anon_sym_link_DASHbackground] = ACTIONS(23),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(25),
    [anon_sym_link_DASHcolor] = ACTIONS(23),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(25),
    [anon_sym_link_DASHstyle] = ACTIONS(23),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(25),
    [anon_sym_margin] = ACTIONS(23),
    [anon_sym_margin_DASHbottom] = ACTIONS(25),
    [anon_sym_margin_DASHleft] = ACTIONS(25),
    [anon_sym_margin_DASHright] = ACTIONS(25),
    [anon_sym_margin_DASHtop] = ACTIONS(25),
    [anon_sym_max_DASHheight] = ACTIONS(25),
    [anon_sym_max_DASHwidth] = ACTIONS(25),
    [anon_sym_min_DASHheight] = ACTIONS(25),
    [anon_sym_min_DASHwidth] = ACTIONS(25),
    [anon_sym_offset] = ACTIONS(23),
    [anon_sym_offset_DASHx] = ACTIONS(25),
    [anon_sym_offset_DASHy] = ACTIONS(25),
    [anon_sym_opacity] = ACTIONS(23),
    [anon_sym_outline] = ACTIONS(23),
    [anon_sym_outline_DASHbottom] = ACTIONS(25),
    [anon_sym_outline_DASHleft] = ACTIONS(25),
    [anon_sym_outline_DASHright] = ACTIONS(25),
    [anon_sym_outline_DASHtop] = ACTIONS(25),
    [anon_sym_overflow] = ACTIONS(23),
    [anon_sym_overflow_DASHx] = ACTIONS(25),
    [anon_sym_overflow_DASHy] = ACTIONS(25),
    [anon_sym_overlay] = ACTIONS(23),
    [anon_sym_padding] = ACTIONS(23),
    [anon_sym_padding_DASHbottom] = ACTIONS(25),
    [anon_sym_padding_DASHleft] = ACTIONS(25),
    [anon_sym_padding_DASHright] = ACTIONS(25),
    [anon_sym_padding_DASHtop] = ACTIONS(25),
    [anon_sym_row_DASHspan] = ACTIONS(25),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(23),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(25),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(23),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(25),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(25),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(25),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(23),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(25),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(25),
    [anon_sym_text_DASHalign] = ACTIONS(25),
    [anon_sym_text_DASHopacity] = ACTIONS(25),
    [anon_sym_text_DASHstyle] = ACTIONS(25),
    [anon_sym_tint] = ACTIONS(23),
    [anon_sym_visibility] = ACTIONS(23),
    [anon_sym_width] = ACTIONS(23),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [7] = {
    [sym_color] = STATE(8),
    [sym_named_color] = STATE(14),
    [sym_ansi_color] = STATE(14),
    [sym_property_keyword] = STATE(8),
    [sym_function_call] = STATE(8),
    [sym_string_value] = STATE(8),
    [sym_variable_reference] = STATE(8),
    [aux_sym_property_value_repeat1] = STATE(8),
    [aux_sym_class_selector_token1] = ACTIONS(53),
    [anon_sym_BANGimportant] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [sym_hex_color] = ACTIONS(59),
    [anon_sym_aqua] = ACTIONS(61),
    [anon_sym_black] = ACTIONS(61),
    [anon_sym_blue] = ACTIONS(61),
    [anon_sym_fuchsia] = ACTIONS(61),
    [anon_sym_gray] = ACTIONS(61),
    [anon_sym_green] = ACTIONS(61),
    [anon_sym_lime] = ACTIONS(61),
    [anon_sym_maroon] = ACTIONS(61),
    [anon_sym_navy] = ACTIONS(61),
    [anon_sym_olive] = ACTIONS(61),
    [anon_sym_orange] = ACTIONS(61),
    [anon_sym_purple] = ACTIONS(61),
    [anon_sym_red] = ACTIONS(61),
    [anon_sym_silver] = ACTIONS(61),
    [anon_sym_teal] = ACTIONS(61),
    [anon_sym_white] = ACTIONS(61),
    [anon_sym_yellow] = ACTIONS(61),
    [anon_sym_transparent] = ACTIONS(61),
    [anon_sym_auto] = ACTIONS(63),
    [anon_sym_ansi_black] = ACTIONS(65),
    [anon_sym_ansi_blue] = ACTIONS(65),
    [anon_sym_ansi_bright_black] = ACTIONS(65),
    [anon_sym_ansi_bright_blue] = ACTIONS(65),
    [anon_sym_ansi_bright_cyan] = ACTIONS(65),
    [anon_sym_ansi_bright_green] = ACTIONS(65),
    [anon_sym_ansi_bright_magenta] = ACTIONS(65),
    [anon_sym_ansi_bright_red] = ACTIONS(65),
    [anon_sym_ansi_bright_white] = ACTIONS(65),
    [anon_sym_ansi_bright_yellow] = ACTIONS(65),
    [anon_sym_ansi_cyan] = ACTIONS(65),
    [anon_sym_ansi_green] = ACTIONS(65),
    [anon_sym_ansi_magenta] = ACTIONS(65),
    [anon_sym_ansi_red] = ACTIONS(65),
    [anon_sym_ansi_white] = ACTIONS(65),
    [anon_sym_ansi_yellow] = ACTIONS(65),
    [anon_sym_ascii] = ACTIONS(67),
    [anon_sym_blank] = ACTIONS(67),
    [anon_sym_block] = ACTIONS(67),
    [anon_sym_bold] = ACTIONS(67),
    [anon_sym_border_DASHbox] = ACTIONS(67),
    [anon_sym_both] = ACTIONS(67),
    [anon_sym_bottom] = ACTIONS(67),
    [anon_sym_center] = ACTIONS(67),
    [anon_sym_content_DASHbox] = ACTIONS(67),
    [anon_sym_dashed] = ACTIONS(67),
    [anon_sym_double] = ACTIONS(67),
    [anon_sym_end] = ACTIONS(67),
    [anon_sym_grid] = ACTIONS(67),
    [anon_sym_heavy] = ACTIONS(67),
    [anon_sym_hidden] = ACTIONS(67),
    [anon_sym_hkey] = ACTIONS(67),
    [anon_sym_horizontal] = ACTIONS(67),
    [anon_sym_inflect] = ACTIONS(67),
    [anon_sym_initial] = ACTIONS(67),
    [anon_sym_inner] = ACTIONS(67),
    [anon_sym_italic] = ACTIONS(67),
    [anon_sym_justify] = ACTIONS(67),
    [anon_sym_left] = ACTIONS(67),
    [anon_sym_middle] = ACTIONS(67),
    [anon_sym_none] = ACTIONS(67),
    [anon_sym_outer] = ACTIONS(67),
    [anon_sym_panel] = ACTIONS(67),
    [anon_sym_reverse] = ACTIONS(67),
    [anon_sym_right] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(67),
    [anon_sym_screen] = ACTIONS(67),
    [anon_sym_scroll] = ACTIONS(67),
    [anon_sym_solid] = ACTIONS(67),
    [anon_sym_stable] = ACTIONS(67),
    [anon_sym_start] = ACTIONS(67),
    [anon_sym_strike] = ACTIONS(67),
    [anon_sym_tall] = ACTIONS(67),
    [anon_sym_thick] = ACTIONS(67),
    [anon_sym_top] = ACTIONS(67),
    [anon_sym_underline] = ACTIONS(67),
    [anon_sym_vertical] = ACTIONS(67),
    [anon_sym_visible] = ACTIONS(67),
    [anon_sym_vkey] = ACTIONS(67),
    [anon_sym_wide] = ACTIONS(67),
    [anon_sym_x] = ACTIONS(67),
    [anon_sym_y] = ACTIONS(67),
    [anon_sym_rgb] = ACTIONS(69),
    [anon_sym_rgba] = ACTIONS(69),
    [anon_sym_hsl] = ACTIONS(69),
    [anon_sym_hsla] = ACTIONS(69),
    [anon_sym_DOLLAR] = ACTIONS(71),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [8] = {
    [sym_color] = STATE(8),
    [sym_named_color] = STATE(14),
    [sym_ansi_color] = STATE(14),
    [sym_property_keyword] = STATE(8),
    [sym_function_call] = STATE(8),
    [sym_string_value] = STATE(8),
    [sym_variable_reference] = STATE(8),
    [aux_sym_property_value_repeat1] = STATE(8),
    [aux_sym_class_selector_token1] = ACTIONS(73),
    [anon_sym_BANGimportant] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_hex_color] = ACTIONS(81),
    [anon_sym_aqua] = ACTIONS(84),
    [anon_sym_black] = ACTIONS(84),
    [anon_sym_blue] = ACTIONS(84),
    [anon_sym_fuchsia] = ACTIONS(84),
    [anon_sym_gray] = ACTIONS(84),
    [anon_sym_green] = ACTIONS(84),
    [anon_sym_lime] = ACTIONS(84),
    [anon_sym_maroon] = ACTIONS(84),
    [anon_sym_navy] = ACTIONS(84),
    [anon_sym_olive] = ACTIONS(84),
    [anon_sym_orange] = ACTIONS(84),
    [anon_sym_purple] = ACTIONS(84),
    [anon_sym_red] = ACTIONS(84),
    [anon_sym_silver] = ACTIONS(84),
    [anon_sym_teal] = ACTIONS(84),
    [anon_sym_white] = ACTIONS(84),
    [anon_sym_yellow] = ACTIONS(84),
    [anon_sym_transparent] = ACTIONS(84),
    [anon_sym_auto] = ACTIONS(87),
    [anon_sym_ansi_black] = ACTIONS(90),
    [anon_sym_ansi_blue] = ACTIONS(90),
    [anon_sym_ansi_bright_black] = ACTIONS(90),
    [anon_sym_ansi_bright_blue] = ACTIONS(90),
    [anon_sym_ansi_bright_cyan] = ACTIONS(90),
    [anon_sym_ansi_bright_green] = ACTIONS(90),
    [anon_sym_ansi_bright_magenta] = ACTIONS(90),
    [anon_sym_ansi_bright_red] = ACTIONS(90),
    [anon_sym_ansi_bright_white] = ACTIONS(90),
    [anon_sym_ansi_bright_yellow] = ACTIONS(90),
    [anon_sym_ansi_cyan] = ACTIONS(90),
    [anon_sym_ansi_green] = ACTIONS(90),
    [anon_sym_ansi_magenta] = ACTIONS(90),
    [anon_sym_ansi_red] = ACTIONS(90),
    [anon_sym_ansi_white] = ACTIONS(90),
    [anon_sym_ansi_yellow] = ACTIONS(90),
    [anon_sym_ascii] = ACTIONS(93),
    [anon_sym_blank] = ACTIONS(93),
    [anon_sym_block] = ACTIONS(93),
    [anon_sym_bold] = ACTIONS(93),
    [anon_sym_border_DASHbox] = ACTIONS(93),
    [anon_sym_both] = ACTIONS(93),
    [anon_sym_bottom] = ACTIONS(93),
    [anon_sym_center] = ACTIONS(93),
    [anon_sym_content_DASHbox] = ACTIONS(93),
    [anon_sym_dashed] = ACTIONS(93),
    [anon_sym_double] = ACTIONS(93),
    [anon_sym_end] = ACTIONS(93),
    [anon_sym_grid] = ACTIONS(93),
    [anon_sym_heavy] = ACTIONS(93),
    [anon_sym_hidden] = ACTIONS(93),
    [anon_sym_hkey] = ACTIONS(93),
    [anon_sym_horizontal] = ACTIONS(93),
    [anon_sym_inflect] = ACTIONS(93),
    [anon_sym_initial] = ACTIONS(93),
    [anon_sym_inner] = ACTIONS(93),
    [anon_sym_italic] = ACTIONS(93),
    [anon_sym_justify] = ACTIONS(93),
    [anon_sym_left] = ACTIONS(93),
    [anon_sym_middle] = ACTIONS(93),
    [anon_sym_none] = ACTIONS(93),
    [anon_sym_outer] = ACTIONS(93),
    [anon_sym_panel] = ACTIONS(93),
    [anon_sym_reverse] = ACTIONS(93),
    [anon_sym_right] = ACTIONS(93),
    [anon_sym_round] = ACTIONS(93),
    [anon_sym_screen] = ACTIONS(93),
    [anon_sym_scroll] = ACTIONS(93),
    [anon_sym_solid] = ACTIONS(93),
    [anon_sym_stable] = ACTIONS(93),
    [anon_sym_start] = ACTIONS(93),
    [anon_sym_strike] = ACTIONS(93),
    [anon_sym_tall] = ACTIONS(93),
    [anon_sym_thick] = ACTIONS(93),
    [anon_sym_top] = ACTIONS(93),
    [anon_sym_underline] = ACTIONS(93),
    [anon_sym_vertical] = ACTIONS(93),
    [anon_sym_visible] = ACTIONS(93),
    [anon_sym_vkey] = ACTIONS(93),
    [anon_sym_wide] = ACTIONS(93),
    [anon_sym_x] = ACTIONS(93),
    [anon_sym_y] = ACTIONS(93),
    [anon_sym_rgb] = ACTIONS(96),
    [anon_sym_rgba] = ACTIONS(96),
    [anon_sym_hsl] = ACTIONS(96),
    [anon_sym_hsla] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [9] = {
    [sym_property_value] = STATE(66),
    [sym_color] = STATE(7),
    [sym_named_color] = STATE(14),
    [sym_ansi_color] = STATE(14),
    [sym_property_keyword] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_string_value] = STATE(7),
    [sym_variable_reference] = STATE(7),
    [aux_sym_property_value_repeat1] = STATE(7),
    [aux_sym_class_selector_token1] = ACTIONS(53),
    [sym_number] = ACTIONS(102),
    [sym_hex_color] = ACTIONS(59),
    [anon_sym_aqua] = ACTIONS(61),
    [anon_sym_black] = ACTIONS(61),
    [anon_sym_blue] = ACTIONS(61),
    [anon_sym_fuchsia] = ACTIONS(61),
    [anon_sym_gray] = ACTIONS(61),
    [anon_sym_green] = ACTIONS(61),
    [anon_sym_lime] = ACTIONS(61),
    [anon_sym_maroon] = ACTIONS(61),
    [anon_sym_navy] = ACTIONS(61),
    [anon_sym_olive] = ACTIONS(61),
    [anon_sym_orange] = ACTIONS(61),
    [anon_sym_purple] = ACTIONS(61),
    [anon_sym_red] = ACTIONS(61),
    [anon_sym_silver] = ACTIONS(61),
    [anon_sym_teal] = ACTIONS(61),
    [anon_sym_white] = ACTIONS(61),
    [anon_sym_yellow] = ACTIONS(61),
    [anon_sym_transparent] = ACTIONS(61),
    [anon_sym_auto] = ACTIONS(63),
    [anon_sym_ansi_black] = ACTIONS(65),
    [anon_sym_ansi_blue] = ACTIONS(65),
    [anon_sym_ansi_bright_black] = ACTIONS(65),
    [anon_sym_ansi_bright_blue] = ACTIONS(65),
    [anon_sym_ansi_bright_cyan] = ACTIONS(65),
    [anon_sym_ansi_bright_green] = ACTIONS(65),
    [anon_sym_ansi_bright_magenta] = ACTIONS(65),
    [anon_sym_ansi_bright_red] = ACTIONS(65),
    [anon_sym_ansi_bright_white] = ACTIONS(65),
    [anon_sym_ansi_bright_yellow] = ACTIONS(65),
    [anon_sym_ansi_cyan] = ACTIONS(65),
    [anon_sym_ansi_green] = ACTIONS(65),
    [anon_sym_ansi_magenta] = ACTIONS(65),
    [anon_sym_ansi_red] = ACTIONS(65),
    [anon_sym_ansi_white] = ACTIONS(65),
    [anon_sym_ansi_yellow] = ACTIONS(65),
    [anon_sym_ascii] = ACTIONS(67),
    [anon_sym_blank] = ACTIONS(67),
    [anon_sym_block] = ACTIONS(67),
    [anon_sym_bold] = ACTIONS(67),
    [anon_sym_border_DASHbox] = ACTIONS(67),
    [anon_sym_both] = ACTIONS(67),
    [anon_sym_bottom] = ACTIONS(67),
    [anon_sym_center] = ACTIONS(67),
    [anon_sym_content_DASHbox] = ACTIONS(67),
    [anon_sym_dashed] = ACTIONS(67),
    [anon_sym_double] = ACTIONS(67),
    [anon_sym_end] = ACTIONS(67),
    [anon_sym_grid] = ACTIONS(67),
    [anon_sym_heavy] = ACTIONS(67),
    [anon_sym_hidden] = ACTIONS(67),
    [anon_sym_hkey] = ACTIONS(67),
    [anon_sym_horizontal] = ACTIONS(67),
    [anon_sym_inflect] = ACTIONS(67),
    [anon_sym_initial] = ACTIONS(67),
    [anon_sym_inner] = ACTIONS(67),
    [anon_sym_italic] = ACTIONS(67),
    [anon_sym_justify] = ACTIONS(67),
    [anon_sym_left] = ACTIONS(67),
    [anon_sym_middle] = ACTIONS(67),
    [anon_sym_none] = ACTIONS(67),
    [anon_sym_outer] = ACTIONS(67),
    [anon_sym_panel] = ACTIONS(67),
    [anon_sym_reverse] = ACTIONS(67),
    [anon_sym_right] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(67),
    [anon_sym_screen] = ACTIONS(67),
    [anon_sym_scroll] = ACTIONS(67),
    [anon_sym_solid] = ACTIONS(67),
    [anon_sym_stable] = ACTIONS(67),
    [anon_sym_start] = ACTIONS(67),
    [anon_sym_strike] = ACTIONS(67),
    [anon_sym_tall] = ACTIONS(67),
    [anon_sym_thick] = ACTIONS(67),
    [anon_sym_top] = ACTIONS(67),
    [anon_sym_underline] = ACTIONS(67),
    [anon_sym_vertical] = ACTIONS(67),
    [anon_sym_visible] = ACTIONS(67),
    [anon_sym_vkey] = ACTIONS(67),
    [anon_sym_wide] = ACTIONS(67),
    [anon_sym_x] = ACTIONS(67),
    [anon_sym_y] = ACTIONS(67),
    [anon_sym_rgb] = ACTIONS(69),
    [anon_sym_rgba] = ACTIONS(69),
    [anon_sym_hsl] = ACTIONS(69),
    [anon_sym_hsla] = ACTIONS(69),
    [anon_sym_DOLLAR] = ACTIONS(71),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [10] = {
    [sym_property_value] = STATE(57),
    [sym_color] = STATE(7),
    [sym_named_color] = STATE(14),
    [sym_ansi_color] = STATE(14),
    [sym_property_keyword] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_string_value] = STATE(7),
    [sym_variable_reference] = STATE(7),
    [aux_sym_property_value_repeat1] = STATE(7),
    [aux_sym_class_selector_token1] = ACTIONS(53),
    [sym_number] = ACTIONS(102),
    [sym_hex_color] = ACTIONS(59),
    [anon_sym_aqua] = ACTIONS(61),
    [anon_sym_black] = ACTIONS(61),
    [anon_sym_blue] = ACTIONS(61),
    [anon_sym_fuchsia] = ACTIONS(61),
    [anon_sym_gray] = ACTIONS(61),
    [anon_sym_green] = ACTIONS(61),
    [anon_sym_lime] = ACTIONS(61),
    [anon_sym_maroon] = ACTIONS(61),
    [anon_sym_navy] = ACTIONS(61),
    [anon_sym_olive] = ACTIONS(61),
    [anon_sym_orange] = ACTIONS(61),
    [anon_sym_purple] = ACTIONS(61),
    [anon_sym_red] = ACTIONS(61),
    [anon_sym_silver] = ACTIONS(61),
    [anon_sym_teal] = ACTIONS(61),
    [anon_sym_white] = ACTIONS(61),
    [anon_sym_yellow] = ACTIONS(61),
    [anon_sym_transparent] = ACTIONS(61),
    [anon_sym_auto] = ACTIONS(63),
    [anon_sym_ansi_black] = ACTIONS(65),
    [anon_sym_ansi_blue] = ACTIONS(65),
    [anon_sym_ansi_bright_black] = ACTIONS(65),
    [anon_sym_ansi_bright_blue] = ACTIONS(65),
    [anon_sym_ansi_bright_cyan] = ACTIONS(65),
    [anon_sym_ansi_bright_green] = ACTIONS(65),
    [anon_sym_ansi_bright_magenta] = ACTIONS(65),
    [anon_sym_ansi_bright_red] = ACTIONS(65),
    [anon_sym_ansi_bright_white] = ACTIONS(65),
    [anon_sym_ansi_bright_yellow] = ACTIONS(65),
    [anon_sym_ansi_cyan] = ACTIONS(65),
    [anon_sym_ansi_green] = ACTIONS(65),
    [anon_sym_ansi_magenta] = ACTIONS(65),
    [anon_sym_ansi_red] = ACTIONS(65),
    [anon_sym_ansi_white] = ACTIONS(65),
    [anon_sym_ansi_yellow] = ACTIONS(65),
    [anon_sym_ascii] = ACTIONS(67),
    [anon_sym_blank] = ACTIONS(67),
    [anon_sym_block] = ACTIONS(67),
    [anon_sym_bold] = ACTIONS(67),
    [anon_sym_border_DASHbox] = ACTIONS(67),
    [anon_sym_both] = ACTIONS(67),
    [anon_sym_bottom] = ACTIONS(67),
    [anon_sym_center] = ACTIONS(67),
    [anon_sym_content_DASHbox] = ACTIONS(67),
    [anon_sym_dashed] = ACTIONS(67),
    [anon_sym_double] = ACTIONS(67),
    [anon_sym_end] = ACTIONS(67),
    [anon_sym_grid] = ACTIONS(67),
    [anon_sym_heavy] = ACTIONS(67),
    [anon_sym_hidden] = ACTIONS(67),
    [anon_sym_hkey] = ACTIONS(67),
    [anon_sym_horizontal] = ACTIONS(67),
    [anon_sym_inflect] = ACTIONS(67),
    [anon_sym_initial] = ACTIONS(67),
    [anon_sym_inner] = ACTIONS(67),
    [anon_sym_italic] = ACTIONS(67),
    [anon_sym_justify] = ACTIONS(67),
    [anon_sym_left] = ACTIONS(67),
    [anon_sym_middle] = ACTIONS(67),
    [anon_sym_none] = ACTIONS(67),
    [anon_sym_outer] = ACTIONS(67),
    [anon_sym_panel] = ACTIONS(67),
    [anon_sym_reverse] = ACTIONS(67),
    [anon_sym_right] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(67),
    [anon_sym_screen] = ACTIONS(67),
    [anon_sym_scroll] = ACTIONS(67),
    [anon_sym_solid] = ACTIONS(67),
    [anon_sym_stable] = ACTIONS(67),
    [anon_sym_start] = ACTIONS(67),
    [anon_sym_strike] = ACTIONS(67),
    [anon_sym_tall] = ACTIONS(67),
    [anon_sym_thick] = ACTIONS(67),
    [anon_sym_top] = ACTIONS(67),
    [anon_sym_underline] = ACTIONS(67),
    [anon_sym_vertical] = ACTIONS(67),
    [anon_sym_visible] = ACTIONS(67),
    [anon_sym_vkey] = ACTIONS(67),
    [anon_sym_wide] = ACTIONS(67),
    [anon_sym_x] = ACTIONS(67),
    [anon_sym_y] = ACTIONS(67),
    [anon_sym_rgb] = ACTIONS(69),
    [anon_sym_rgba] = ACTIONS(69),
    [anon_sym_hsl] = ACTIONS(69),
    [anon_sym_hsla] = ACTIONS(69),
    [anon_sym_DOLLAR] = ACTIONS(71),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [11] = {
    [aux_sym_class_selector_token1] = ACTIONS(104),
    [anon_sym_BANGimportant] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(106),
    [sym_number] = ACTIONS(106),
    [sym_hex_color] = ACTIONS(104),
    [anon_sym_aqua] = ACTIONS(104),
    [anon_sym_black] = ACTIONS(104),
    [anon_sym_blue] = ACTIONS(104),
    [anon_sym_fuchsia] = ACTIONS(104),
    [anon_sym_gray] = ACTIONS(104),
    [anon_sym_green] = ACTIONS(104),
    [anon_sym_lime] = ACTIONS(104),
    [anon_sym_maroon] = ACTIONS(104),
    [anon_sym_navy] = ACTIONS(104),
    [anon_sym_olive] = ACTIONS(104),
    [anon_sym_orange] = ACTIONS(104),
    [anon_sym_purple] = ACTIONS(104),
    [anon_sym_red] = ACTIONS(104),
    [anon_sym_silver] = ACTIONS(104),
    [anon_sym_teal] = ACTIONS(104),
    [anon_sym_white] = ACTIONS(104),
    [anon_sym_yellow] = ACTIONS(104),
    [anon_sym_transparent] = ACTIONS(104),
    [anon_sym_auto] = ACTIONS(104),
    [anon_sym_ansi_black] = ACTIONS(104),
    [anon_sym_ansi_blue] = ACTIONS(104),
    [anon_sym_ansi_bright_black] = ACTIONS(104),
    [anon_sym_ansi_bright_blue] = ACTIONS(104),
    [anon_sym_ansi_bright_cyan] = ACTIONS(104),
    [anon_sym_ansi_bright_green] = ACTIONS(104),
    [anon_sym_ansi_bright_magenta] = ACTIONS(104),
    [anon_sym_ansi_bright_red] = ACTIONS(104),
    [anon_sym_ansi_bright_white] = ACTIONS(104),
    [anon_sym_ansi_bright_yellow] = ACTIONS(104),
    [anon_sym_ansi_cyan] = ACTIONS(104),
    [anon_sym_ansi_green] = ACTIONS(104),
    [anon_sym_ansi_magenta] = ACTIONS(104),
    [anon_sym_ansi_red] = ACTIONS(104),
    [anon_sym_ansi_white] = ACTIONS(104),
    [anon_sym_ansi_yellow] = ACTIONS(104),
    [anon_sym_ascii] = ACTIONS(104),
    [anon_sym_blank] = ACTIONS(104),
    [anon_sym_block] = ACTIONS(104),
    [anon_sym_bold] = ACTIONS(104),
    [anon_sym_border_DASHbox] = ACTIONS(104),
    [anon_sym_both] = ACTIONS(104),
    [anon_sym_bottom] = ACTIONS(104),
    [anon_sym_center] = ACTIONS(104),
    [anon_sym_content_DASHbox] = ACTIONS(104),
    [anon_sym_dashed] = ACTIONS(104),
    [anon_sym_double] = ACTIONS(104),
    [anon_sym_end] = ACTIONS(104),
    [anon_sym_grid] = ACTIONS(104),
    [anon_sym_heavy] = ACTIONS(104),
    [anon_sym_hidden] = ACTIONS(104),
    [anon_sym_hkey] = ACTIONS(104),
    [anon_sym_horizontal] = ACTIONS(104),
    [anon_sym_inflect] = ACTIONS(104),
    [anon_sym_initial] = ACTIONS(104),
    [anon_sym_inner] = ACTIONS(104),
    [anon_sym_italic] = ACTIONS(104),
    [anon_sym_justify] = ACTIONS(104),
    [anon_sym_left] = ACTIONS(104),
    [anon_sym_middle] = ACTIONS(104),
    [anon_sym_none] = ACTIONS(104),
    [anon_sym_outer] = ACTIONS(104),
    [anon_sym_panel] = ACTIONS(104),
    [anon_sym_reverse] = ACTIONS(104),
    [anon_sym_right] = ACTIONS(104),
    [anon_sym_round] = ACTIONS(104),
    [anon_sym_screen] = ACTIONS(104),
    [anon_sym_scroll] = ACTIONS(104),
    [anon_sym_solid] = ACTIONS(104),
    [anon_sym_stable] = ACTIONS(104),
    [anon_sym_start] = ACTIONS(104),
    [anon_sym_strike] = ACTIONS(104),
    [anon_sym_tall] = ACTIONS(104),
    [anon_sym_thick] = ACTIONS(104),
    [anon_sym_top] = ACTIONS(104),
    [anon_sym_underline] = ACTIONS(104),
    [anon_sym_vertical] = ACTIONS(104),
    [anon_sym_visible] = ACTIONS(104),
    [anon_sym_vkey] = ACTIONS(104),
    [anon_sym_wide] = ACTIONS(104),
    [anon_sym_x] = ACTIONS(104),
    [anon_sym_y] = ACTIONS(104),
    [anon_sym_rgb] = ACTIONS(104),
    [anon_sym_rgba] = ACTIONS(104),
    [anon_sym_hsl] = ACTIONS(104),
    [anon_sym_hsla] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [12] = {
    [aux_sym_class_selector_token1] = ACTIONS(104),
    [anon_sym_BANGimportant] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(106),
    [sym_number] = ACTIONS(106),
    [sym_hex_color] = ACTIONS(104),
    [anon_sym_aqua] = ACTIONS(104),
    [anon_sym_black] = ACTIONS(104),
    [anon_sym_blue] = ACTIONS(104),
    [anon_sym_fuchsia] = ACTIONS(104),
    [anon_sym_gray] = ACTIONS(104),
    [anon_sym_green] = ACTIONS(104),
    [anon_sym_lime] = ACTIONS(104),
    [anon_sym_maroon] = ACTIONS(104),
    [anon_sym_navy] = ACTIONS(104),
    [anon_sym_olive] = ACTIONS(104),
    [anon_sym_orange] = ACTIONS(104),
    [anon_sym_purple] = ACTIONS(104),
    [anon_sym_red] = ACTIONS(104),
    [anon_sym_silver] = ACTIONS(104),
    [anon_sym_teal] = ACTIONS(104),
    [anon_sym_white] = ACTIONS(104),
    [anon_sym_yellow] = ACTIONS(104),
    [anon_sym_transparent] = ACTIONS(104),
    [anon_sym_auto] = ACTIONS(104),
    [anon_sym_ansi_black] = ACTIONS(104),
    [anon_sym_ansi_blue] = ACTIONS(104),
    [anon_sym_ansi_bright_black] = ACTIONS(104),
    [anon_sym_ansi_bright_blue] = ACTIONS(104),
    [anon_sym_ansi_bright_cyan] = ACTIONS(104),
    [anon_sym_ansi_bright_green] = ACTIONS(104),
    [anon_sym_ansi_bright_magenta] = ACTIONS(104),
    [anon_sym_ansi_bright_red] = ACTIONS(104),
    [anon_sym_ansi_bright_white] = ACTIONS(104),
    [anon_sym_ansi_bright_yellow] = ACTIONS(104),
    [anon_sym_ansi_cyan] = ACTIONS(104),
    [anon_sym_ansi_green] = ACTIONS(104),
    [anon_sym_ansi_magenta] = ACTIONS(104),
    [anon_sym_ansi_red] = ACTIONS(104),
    [anon_sym_ansi_white] = ACTIONS(104),
    [anon_sym_ansi_yellow] = ACTIONS(104),
    [anon_sym_ascii] = ACTIONS(104),
    [anon_sym_blank] = ACTIONS(104),
    [anon_sym_block] = ACTIONS(104),
    [anon_sym_bold] = ACTIONS(104),
    [anon_sym_border_DASHbox] = ACTIONS(104),
    [anon_sym_both] = ACTIONS(104),
    [anon_sym_bottom] = ACTIONS(104),
    [anon_sym_center] = ACTIONS(104),
    [anon_sym_content_DASHbox] = ACTIONS(104),
    [anon_sym_dashed] = ACTIONS(104),
    [anon_sym_double] = ACTIONS(104),
    [anon_sym_end] = ACTIONS(104),
    [anon_sym_grid] = ACTIONS(104),
    [anon_sym_heavy] = ACTIONS(104),
    [anon_sym_hidden] = ACTIONS(104),
    [anon_sym_hkey] = ACTIONS(104),
    [anon_sym_horizontal] = ACTIONS(104),
    [anon_sym_inflect] = ACTIONS(104),
    [anon_sym_initial] = ACTIONS(104),
    [anon_sym_inner] = ACTIONS(104),
    [anon_sym_italic] = ACTIONS(104),
    [anon_sym_justify] = ACTIONS(104),
    [anon_sym_left] = ACTIONS(104),
    [anon_sym_middle] = ACTIONS(104),
    [anon_sym_none] = ACTIONS(104),
    [anon_sym_outer] = ACTIONS(104),
    [anon_sym_panel] = ACTIONS(104),
    [anon_sym_reverse] = ACTIONS(104),
    [anon_sym_right] = ACTIONS(104),
    [anon_sym_round] = ACTIONS(104),
    [anon_sym_screen] = ACTIONS(104),
    [anon_sym_scroll] = ACTIONS(104),
    [anon_sym_solid] = ACTIONS(104),
    [anon_sym_stable] = ACTIONS(104),
    [anon_sym_start] = ACTIONS(104),
    [anon_sym_strike] = ACTIONS(104),
    [anon_sym_tall] = ACTIONS(104),
    [anon_sym_thick] = ACTIONS(104),
    [anon_sym_top] = ACTIONS(104),
    [anon_sym_underline] = ACTIONS(104),
    [anon_sym_vertical] = ACTIONS(104),
    [anon_sym_visible] = ACTIONS(104),
    [anon_sym_vkey] = ACTIONS(104),
    [anon_sym_wide] = ACTIONS(104),
    [anon_sym_x] = ACTIONS(104),
    [anon_sym_y] = ACTIONS(104),
    [anon_sym_rgb] = ACTIONS(104),
    [anon_sym_rgba] = ACTIONS(104),
    [anon_sym_hsl] = ACTIONS(104),
    [anon_sym_hsla] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [13] = {
    [aux_sym_class_selector_token1] = ACTIONS(108),
    [anon_sym_BANGimportant] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
    [sym_number] = ACTIONS(110),
    [sym_hex_color] = ACTIONS(108),
    [anon_sym_aqua] = ACTIONS(108),
    [anon_sym_black] = ACTIONS(108),
    [anon_sym_blue] = ACTIONS(108),
    [anon_sym_fuchsia] = ACTIONS(108),
    [anon_sym_gray] = ACTIONS(108),
    [anon_sym_green] = ACTIONS(108),
    [anon_sym_lime] = ACTIONS(108),
    [anon_sym_maroon] = ACTIONS(108),
    [anon_sym_navy] = ACTIONS(108),
    [anon_sym_olive] = ACTIONS(108),
    [anon_sym_orange] = ACTIONS(108),
    [anon_sym_purple] = ACTIONS(108),
    [anon_sym_red] = ACTIONS(108),
    [anon_sym_silver] = ACTIONS(108),
    [anon_sym_teal] = ACTIONS(108),
    [anon_sym_white] = ACTIONS(108),
    [anon_sym_yellow] = ACTIONS(108),
    [anon_sym_transparent] = ACTIONS(108),
    [anon_sym_auto] = ACTIONS(108),
    [anon_sym_ansi_black] = ACTIONS(108),
    [anon_sym_ansi_blue] = ACTIONS(108),
    [anon_sym_ansi_bright_black] = ACTIONS(108),
    [anon_sym_ansi_bright_blue] = ACTIONS(108),
    [anon_sym_ansi_bright_cyan] = ACTIONS(108),
    [anon_sym_ansi_bright_green] = ACTIONS(108),
    [anon_sym_ansi_bright_magenta] = ACTIONS(108),
    [anon_sym_ansi_bright_red] = ACTIONS(108),
    [anon_sym_ansi_bright_white] = ACTIONS(108),
    [anon_sym_ansi_bright_yellow] = ACTIONS(108),
    [anon_sym_ansi_cyan] = ACTIONS(108),
    [anon_sym_ansi_green] = ACTIONS(108),
    [anon_sym_ansi_magenta] = ACTIONS(108),
    [anon_sym_ansi_red] = ACTIONS(108),
    [anon_sym_ansi_white] = ACTIONS(108),
    [anon_sym_ansi_yellow] = ACTIONS(108),
    [anon_sym_ascii] = ACTIONS(108),
    [anon_sym_blank] = ACTIONS(108),
    [anon_sym_block] = ACTIONS(108),
    [anon_sym_bold] = ACTIONS(108),
    [anon_sym_border_DASHbox] = ACTIONS(108),
    [anon_sym_both] = ACTIONS(108),
    [anon_sym_bottom] = ACTIONS(108),
    [anon_sym_center] = ACTIONS(108),
    [anon_sym_content_DASHbox] = ACTIONS(108),
    [anon_sym_dashed] = ACTIONS(108),
    [anon_sym_double] = ACTIONS(108),
    [anon_sym_end] = ACTIONS(108),
    [anon_sym_grid] = ACTIONS(108),
    [anon_sym_heavy] = ACTIONS(108),
    [anon_sym_hidden] = ACTIONS(108),
    [anon_sym_hkey] = ACTIONS(108),
    [anon_sym_horizontal] = ACTIONS(108),
    [anon_sym_inflect] = ACTIONS(108),
    [anon_sym_initial] = ACTIONS(108),
    [anon_sym_inner] = ACTIONS(108),
    [anon_sym_italic] = ACTIONS(108),
    [anon_sym_justify] = ACTIONS(108),
    [anon_sym_left] = ACTIONS(108),
    [anon_sym_middle] = ACTIONS(108),
    [anon_sym_none] = ACTIONS(108),
    [anon_sym_outer] = ACTIONS(108),
    [anon_sym_panel] = ACTIONS(108),
    [anon_sym_reverse] = ACTIONS(108),
    [anon_sym_right] = ACTIONS(108),
    [anon_sym_round] = ACTIONS(108),
    [anon_sym_screen] = ACTIONS(108),
    [anon_sym_scroll] = ACTIONS(108),
    [anon_sym_solid] = ACTIONS(108),
    [anon_sym_stable] = ACTIONS(108),
    [anon_sym_start] = ACTIONS(108),
    [anon_sym_strike] = ACTIONS(108),
    [anon_sym_tall] = ACTIONS(108),
    [anon_sym_thick] = ACTIONS(108),
    [anon_sym_top] = ACTIONS(108),
    [anon_sym_underline] = ACTIONS(108),
    [anon_sym_vertical] = ACTIONS(108),
    [anon_sym_visible] = ACTIONS(108),
    [anon_sym_vkey] = ACTIONS(108),
    [anon_sym_wide] = ACTIONS(108),
    [anon_sym_x] = ACTIONS(108),
    [anon_sym_y] = ACTIONS(108),
    [anon_sym_rgb] = ACTIONS(108),
    [anon_sym_rgba] = ACTIONS(108),
    [anon_sym_hsl] = ACTIONS(108),
    [anon_sym_hsla] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [14] = {
    [aux_sym_class_selector_token1] = ACTIONS(112),
    [anon_sym_BANGimportant] = ACTIONS(114),
    [anon_sym_SEMI] = ACTIONS(114),
    [sym_number] = ACTIONS(114),
    [sym_hex_color] = ACTIONS(112),
    [anon_sym_aqua] = ACTIONS(112),
    [anon_sym_black] = ACTIONS(112),
    [anon_sym_blue] = ACTIONS(112),
    [anon_sym_fuchsia] = ACTIONS(112),
    [anon_sym_gray] = ACTIONS(112),
    [anon_sym_green] = ACTIONS(112),
    [anon_sym_lime] = ACTIONS(112),
    [anon_sym_maroon] = ACTIONS(112),
    [anon_sym_navy] = ACTIONS(112),
    [anon_sym_olive] = ACTIONS(112),
    [anon_sym_orange] = ACTIONS(112),
    [anon_sym_purple] = ACTIONS(112),
    [anon_sym_red] = ACTIONS(112),
    [anon_sym_silver] = ACTIONS(112),
    [anon_sym_teal] = ACTIONS(112),
    [anon_sym_white] = ACTIONS(112),
    [anon_sym_yellow] = ACTIONS(112),
    [anon_sym_transparent] = ACTIONS(112),
    [anon_sym_auto] = ACTIONS(112),
    [anon_sym_ansi_black] = ACTIONS(112),
    [anon_sym_ansi_blue] = ACTIONS(112),
    [anon_sym_ansi_bright_black] = ACTIONS(112),
    [anon_sym_ansi_bright_blue] = ACTIONS(112),
    [anon_sym_ansi_bright_cyan] = ACTIONS(112),
    [anon_sym_ansi_bright_green] = ACTIONS(112),
    [anon_sym_ansi_bright_magenta] = ACTIONS(112),
    [anon_sym_ansi_bright_red] = ACTIONS(112),
    [anon_sym_ansi_bright_white] = ACTIONS(112),
    [anon_sym_ansi_bright_yellow] = ACTIONS(112),
    [anon_sym_ansi_cyan] = ACTIONS(112),
    [anon_sym_ansi_green] = ACTIONS(112),
    [anon_sym_ansi_magenta] = ACTIONS(112),
    [anon_sym_ansi_red] = ACTIONS(112),
    [anon_sym_ansi_white] = ACTIONS(112),
    [anon_sym_ansi_yellow] = ACTIONS(112),
    [anon_sym_ascii] = ACTIONS(112),
    [anon_sym_blank] = ACTIONS(112),
    [anon_sym_block] = ACTIONS(112),
    [anon_sym_bold] = ACTIONS(112),
    [anon_sym_border_DASHbox] = ACTIONS(112),
    [anon_sym_both] = ACTIONS(112),
    [anon_sym_bottom] = ACTIONS(112),
    [anon_sym_center] = ACTIONS(112),
    [anon_sym_content_DASHbox] = ACTIONS(112),
    [anon_sym_dashed] = ACTIONS(112),
    [anon_sym_double] = ACTIONS(112),
    [anon_sym_end] = ACTIONS(112),
    [anon_sym_grid] = ACTIONS(112),
    [anon_sym_heavy] = ACTIONS(112),
    [anon_sym_hidden] = ACTIONS(112),
    [anon_sym_hkey] = ACTIONS(112),
    [anon_sym_horizontal] = ACTIONS(112),
    [anon_sym_inflect] = ACTIONS(112),
    [anon_sym_initial] = ACTIONS(112),
    [anon_sym_inner] = ACTIONS(112),
    [anon_sym_italic] = ACTIONS(112),
    [anon_sym_justify] = ACTIONS(112),
    [anon_sym_left] = ACTIONS(112),
    [anon_sym_middle] = ACTIONS(112),
    [anon_sym_none] = ACTIONS(112),
    [anon_sym_outer] = ACTIONS(112),
    [anon_sym_panel] = ACTIONS(112),
    [anon_sym_reverse] = ACTIONS(112),
    [anon_sym_right] = ACTIONS(112),
    [anon_sym_round] = ACTIONS(112),
    [anon_sym_screen] = ACTIONS(112),
    [anon_sym_scroll] = ACTIONS(112),
    [anon_sym_solid] = ACTIONS(112),
    [anon_sym_stable] = ACTIONS(112),
    [anon_sym_start] = ACTIONS(112),
    [anon_sym_strike] = ACTIONS(112),
    [anon_sym_tall] = ACTIONS(112),
    [anon_sym_thick] = ACTIONS(112),
    [anon_sym_top] = ACTIONS(112),
    [anon_sym_underline] = ACTIONS(112),
    [anon_sym_vertical] = ACTIONS(112),
    [anon_sym_visible] = ACTIONS(112),
    [anon_sym_vkey] = ACTIONS(112),
    [anon_sym_wide] = ACTIONS(112),
    [anon_sym_x] = ACTIONS(112),
    [anon_sym_y] = ACTIONS(112),
    [anon_sym_rgb] = ACTIONS(112),
    [anon_sym_rgba] = ACTIONS(112),
    [anon_sym_hsl] = ACTIONS(112),
    [anon_sym_hsla] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [15] = {
    [aux_sym_class_selector_token1] = ACTIONS(116),
    [anon_sym_BANGimportant] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
    [sym_hex_color] = ACTIONS(116),
    [anon_sym_aqua] = ACTIONS(116),
    [anon_sym_black] = ACTIONS(116),
    [anon_sym_blue] = ACTIONS(116),
    [anon_sym_fuchsia] = ACTIONS(116),
    [anon_sym_gray] = ACTIONS(116),
    [anon_sym_green] = ACTIONS(116),
    [anon_sym_lime] = ACTIONS(116),
    [anon_sym_maroon] = ACTIONS(116),
    [anon_sym_navy] = ACTIONS(116),
    [anon_sym_olive] = ACTIONS(116),
    [anon_sym_orange] = ACTIONS(116),
    [anon_sym_purple] = ACTIONS(116),
    [anon_sym_red] = ACTIONS(116),
    [anon_sym_silver] = ACTIONS(116),
    [anon_sym_teal] = ACTIONS(116),
    [anon_sym_white] = ACTIONS(116),
    [anon_sym_yellow] = ACTIONS(116),
    [anon_sym_transparent] = ACTIONS(116),
    [anon_sym_auto] = ACTIONS(116),
    [anon_sym_ansi_black] = ACTIONS(116),
    [anon_sym_ansi_blue] = ACTIONS(116),
    [anon_sym_ansi_bright_black] = ACTIONS(116),
    [anon_sym_ansi_bright_blue] = ACTIONS(116),
    [anon_sym_ansi_bright_cyan] = ACTIONS(116),
    [anon_sym_ansi_bright_green] = ACTIONS(116),
    [anon_sym_ansi_bright_magenta] = ACTIONS(116),
    [anon_sym_ansi_bright_red] = ACTIONS(116),
    [anon_sym_ansi_bright_white] = ACTIONS(116),
    [anon_sym_ansi_bright_yellow] = ACTIONS(116),
    [anon_sym_ansi_cyan] = ACTIONS(116),
    [anon_sym_ansi_green] = ACTIONS(116),
    [anon_sym_ansi_magenta] = ACTIONS(116),
    [anon_sym_ansi_red] = ACTIONS(116),
    [anon_sym_ansi_white] = ACTIONS(116),
    [anon_sym_ansi_yellow] = ACTIONS(116),
    [anon_sym_ascii] = ACTIONS(116),
    [anon_sym_blank] = ACTIONS(116),
    [anon_sym_block] = ACTIONS(116),
    [anon_sym_bold] = ACTIONS(116),
    [anon_sym_border_DASHbox] = ACTIONS(116),
    [anon_sym_both] = ACTIONS(116),
    [anon_sym_bottom] = ACTIONS(116),
    [anon_sym_center] = ACTIONS(116),
    [anon_sym_content_DASHbox] = ACTIONS(116),
    [anon_sym_dashed] = ACTIONS(116),
    [anon_sym_double] = ACTIONS(116),
    [anon_sym_end] = ACTIONS(116),
    [anon_sym_grid] = ACTIONS(116),
    [anon_sym_heavy] = ACTIONS(116),
    [anon_sym_hidden] = ACTIONS(116),
    [anon_sym_hkey] = ACTIONS(116),
    [anon_sym_horizontal] = ACTIONS(116),
    [anon_sym_inflect] = ACTIONS(116),
    [anon_sym_initial] = ACTIONS(116),
    [anon_sym_inner] = ACTIONS(116),
    [anon_sym_italic] = ACTIONS(116),
    [anon_sym_justify] = ACTIONS(116),
    [anon_sym_left] = ACTIONS(116),
    [anon_sym_middle] = ACTIONS(116),
    [anon_sym_none] = ACTIONS(116),
    [anon_sym_outer] = ACTIONS(116),
    [anon_sym_panel] = ACTIONS(116),
    [anon_sym_reverse] = ACTIONS(116),
    [anon_sym_right] = ACTIONS(116),
    [anon_sym_round] = ACTIONS(116),
    [anon_sym_screen] = ACTIONS(116),
    [anon_sym_scroll] = ACTIONS(116),
    [anon_sym_solid] = ACTIONS(116),
    [anon_sym_stable] = ACTIONS(116),
    [anon_sym_start] = ACTIONS(116),
    [anon_sym_strike] = ACTIONS(116),
    [anon_sym_tall] = ACTIONS(116),
    [anon_sym_thick] = ACTIONS(116),
    [anon_sym_top] = ACTIONS(116),
    [anon_sym_underline] = ACTIONS(116),
    [anon_sym_vertical] = ACTIONS(116),
    [anon_sym_visible] = ACTIONS(116),
    [anon_sym_vkey] = ACTIONS(116),
    [anon_sym_wide] = ACTIONS(116),
    [anon_sym_x] = ACTIONS(116),
    [anon_sym_y] = ACTIONS(116),
    [anon_sym_rgb] = ACTIONS(116),
    [anon_sym_rgba] = ACTIONS(116),
    [anon_sym_hsl] = ACTIONS(116),
    [anon_sym_hsla] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [16] = {
    [aux_sym_class_selector_token1] = ACTIONS(120),
    [anon_sym_BANGimportant] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [sym_hex_color] = ACTIONS(120),
    [anon_sym_aqua] = ACTIONS(120),
    [anon_sym_black] = ACTIONS(120),
    [anon_sym_blue] = ACTIONS(120),
    [anon_sym_fuchsia] = ACTIONS(120),
    [anon_sym_gray] = ACTIONS(120),
    [anon_sym_green] = ACTIONS(120),
    [anon_sym_lime] = ACTIONS(120),
    [anon_sym_maroon] = ACTIONS(120),
    [anon_sym_navy] = ACTIONS(120),
    [anon_sym_olive] = ACTIONS(120),
    [anon_sym_orange] = ACTIONS(120),
    [anon_sym_purple] = ACTIONS(120),
    [anon_sym_red] = ACTIONS(120),
    [anon_sym_silver] = ACTIONS(120),
    [anon_sym_teal] = ACTIONS(120),
    [anon_sym_white] = ACTIONS(120),
    [anon_sym_yellow] = ACTIONS(120),
    [anon_sym_transparent] = ACTIONS(120),
    [anon_sym_auto] = ACTIONS(120),
    [anon_sym_ansi_black] = ACTIONS(120),
    [anon_sym_ansi_blue] = ACTIONS(120),
    [anon_sym_ansi_bright_black] = ACTIONS(120),
    [anon_sym_ansi_bright_blue] = ACTIONS(120),
    [anon_sym_ansi_bright_cyan] = ACTIONS(120),
    [anon_sym_ansi_bright_green] = ACTIONS(120),
    [anon_sym_ansi_bright_magenta] = ACTIONS(120),
    [anon_sym_ansi_bright_red] = ACTIONS(120),
    [anon_sym_ansi_bright_white] = ACTIONS(120),
    [anon_sym_ansi_bright_yellow] = ACTIONS(120),
    [anon_sym_ansi_cyan] = ACTIONS(120),
    [anon_sym_ansi_green] = ACTIONS(120),
    [anon_sym_ansi_magenta] = ACTIONS(120),
    [anon_sym_ansi_red] = ACTIONS(120),
    [anon_sym_ansi_white] = ACTIONS(120),
    [anon_sym_ansi_yellow] = ACTIONS(120),
    [anon_sym_ascii] = ACTIONS(120),
    [anon_sym_blank] = ACTIONS(120),
    [anon_sym_block] = ACTIONS(120),
    [anon_sym_bold] = ACTIONS(120),
    [anon_sym_border_DASHbox] = ACTIONS(120),
    [anon_sym_both] = ACTIONS(120),
    [anon_sym_bottom] = ACTIONS(120),
    [anon_sym_center] = ACTIONS(120),
    [anon_sym_content_DASHbox] = ACTIONS(120),
    [anon_sym_dashed] = ACTIONS(120),
    [anon_sym_double] = ACTIONS(120),
    [anon_sym_end] = ACTIONS(120),
    [anon_sym_grid] = ACTIONS(120),
    [anon_sym_heavy] = ACTIONS(120),
    [anon_sym_hidden] = ACTIONS(120),
    [anon_sym_hkey] = ACTIONS(120),
    [anon_sym_horizontal] = ACTIONS(120),
    [anon_sym_inflect] = ACTIONS(120),
    [anon_sym_initial] = ACTIONS(120),
    [anon_sym_inner] = ACTIONS(120),
    [anon_sym_italic] = ACTIONS(120),
    [anon_sym_justify] = ACTIONS(120),
    [anon_sym_left] = ACTIONS(120),
    [anon_sym_middle] = ACTIONS(120),
    [anon_sym_none] = ACTIONS(120),
    [anon_sym_outer] = ACTIONS(120),
    [anon_sym_panel] = ACTIONS(120),
    [anon_sym_reverse] = ACTIONS(120),
    [anon_sym_right] = ACTIONS(120),
    [anon_sym_round] = ACTIONS(120),
    [anon_sym_screen] = ACTIONS(120),
    [anon_sym_scroll] = ACTIONS(120),
    [anon_sym_solid] = ACTIONS(120),
    [anon_sym_stable] = ACTIONS(120),
    [anon_sym_start] = ACTIONS(120),
    [anon_sym_strike] = ACTIONS(120),
    [anon_sym_tall] = ACTIONS(120),
    [anon_sym_thick] = ACTIONS(120),
    [anon_sym_top] = ACTIONS(120),
    [anon_sym_underline] = ACTIONS(120),
    [anon_sym_vertical] = ACTIONS(120),
    [anon_sym_visible] = ACTIONS(120),
    [anon_sym_vkey] = ACTIONS(120),
    [anon_sym_wide] = ACTIONS(120),
    [anon_sym_x] = ACTIONS(120),
    [anon_sym_y] = ACTIONS(120),
    [anon_sym_rgb] = ACTIONS(120),
    [anon_sym_rgba] = ACTIONS(120),
    [anon_sym_hsl] = ACTIONS(120),
    [anon_sym_hsla] = ACTIONS(120),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [17] = {
    [aux_sym_class_selector_token1] = ACTIONS(124),
    [anon_sym_BANGimportant] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [sym_number] = ACTIONS(126),
    [sym_hex_color] = ACTIONS(124),
    [anon_sym_aqua] = ACTIONS(124),
    [anon_sym_black] = ACTIONS(124),
    [anon_sym_blue] = ACTIONS(124),
    [anon_sym_fuchsia] = ACTIONS(124),
    [anon_sym_gray] = ACTIONS(124),
    [anon_sym_green] = ACTIONS(124),
    [anon_sym_lime] = ACTIONS(124),
    [anon_sym_maroon] = ACTIONS(124),
    [anon_sym_navy] = ACTIONS(124),
    [anon_sym_olive] = ACTIONS(124),
    [anon_sym_orange] = ACTIONS(124),
    [anon_sym_purple] = ACTIONS(124),
    [anon_sym_red] = ACTIONS(124),
    [anon_sym_silver] = ACTIONS(124),
    [anon_sym_teal] = ACTIONS(124),
    [anon_sym_white] = ACTIONS(124),
    [anon_sym_yellow] = ACTIONS(124),
    [anon_sym_transparent] = ACTIONS(124),
    [anon_sym_auto] = ACTIONS(124),
    [anon_sym_ansi_black] = ACTIONS(124),
    [anon_sym_ansi_blue] = ACTIONS(124),
    [anon_sym_ansi_bright_black] = ACTIONS(124),
    [anon_sym_ansi_bright_blue] = ACTIONS(124),
    [anon_sym_ansi_bright_cyan] = ACTIONS(124),
    [anon_sym_ansi_bright_green] = ACTIONS(124),
    [anon_sym_ansi_bright_magenta] = ACTIONS(124),
    [anon_sym_ansi_bright_red] = ACTIONS(124),
    [anon_sym_ansi_bright_white] = ACTIONS(124),
    [anon_sym_ansi_bright_yellow] = ACTIONS(124),
    [anon_sym_ansi_cyan] = ACTIONS(124),
    [anon_sym_ansi_green] = ACTIONS(124),
    [anon_sym_ansi_magenta] = ACTIONS(124),
    [anon_sym_ansi_red] = ACTIONS(124),
    [anon_sym_ansi_white] = ACTIONS(124),
    [anon_sym_ansi_yellow] = ACTIONS(124),
    [anon_sym_ascii] = ACTIONS(124),
    [anon_sym_blank] = ACTIONS(124),
    [anon_sym_block] = ACTIONS(124),
    [anon_sym_bold] = ACTIONS(124),
    [anon_sym_border_DASHbox] = ACTIONS(124),
    [anon_sym_both] = ACTIONS(124),
    [anon_sym_bottom] = ACTIONS(124),
    [anon_sym_center] = ACTIONS(124),
    [anon_sym_content_DASHbox] = ACTIONS(124),
    [anon_sym_dashed] = ACTIONS(124),
    [anon_sym_double] = ACTIONS(124),
    [anon_sym_end] = ACTIONS(124),
    [anon_sym_grid] = ACTIONS(124),
    [anon_sym_heavy] = ACTIONS(124),
    [anon_sym_hidden] = ACTIONS(124),
    [anon_sym_hkey] = ACTIONS(124),
    [anon_sym_horizontal] = ACTIONS(124),
    [anon_sym_inflect] = ACTIONS(124),
    [anon_sym_initial] = ACTIONS(124),
    [anon_sym_inner] = ACTIONS(124),
    [anon_sym_italic] = ACTIONS(124),
    [anon_sym_justify] = ACTIONS(124),
    [anon_sym_left] = ACTIONS(124),
    [anon_sym_middle] = ACTIONS(124),
    [anon_sym_none] = ACTIONS(124),
    [anon_sym_outer] = ACTIONS(124),
    [anon_sym_panel] = ACTIONS(124),
    [anon_sym_reverse] = ACTIONS(124),
    [anon_sym_right] = ACTIONS(124),
    [anon_sym_round] = ACTIONS(124),
    [anon_sym_screen] = ACTIONS(124),
    [anon_sym_scroll] = ACTIONS(124),
    [anon_sym_solid] = ACTIONS(124),
    [anon_sym_stable] = ACTIONS(124),
    [anon_sym_start] = ACTIONS(124),
    [anon_sym_strike] = ACTIONS(124),
    [anon_sym_tall] = ACTIONS(124),
    [anon_sym_thick] = ACTIONS(124),
    [anon_sym_top] = ACTIONS(124),
    [anon_sym_underline] = ACTIONS(124),
    [anon_sym_vertical] = ACTIONS(124),
    [anon_sym_visible] = ACTIONS(124),
    [anon_sym_vkey] = ACTIONS(124),
    [anon_sym_wide] = ACTIONS(124),
    [anon_sym_x] = ACTIONS(124),
    [anon_sym_y] = ACTIONS(124),
    [anon_sym_rgb] = ACTIONS(124),
    [anon_sym_rgba] = ACTIONS(124),
    [anon_sym_hsl] = ACTIONS(124),
    [anon_sym_hsla] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(126),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [18] = {
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(128),
    [sym_widget_selector] = ACTIONS(130),
    [anon_sym_POUND] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_align] = ACTIONS(130),
    [anon_sym_align_DASHhorizontal] = ACTIONS(128),
    [anon_sym_align_DASHvertical] = ACTIONS(128),
    [anon_sym_background] = ACTIONS(130),
    [anon_sym_border] = ACTIONS(130),
    [anon_sym_border_DASHbottom] = ACTIONS(128),
    [anon_sym_border_DASHleft] = ACTIONS(128),
    [anon_sym_border_DASHright] = ACTIONS(128),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(128),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(128),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(128),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(128),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(128),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(128),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(128),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(128),
    [anon_sym_border_DASHtop] = ACTIONS(128),
    [anon_sym_box_DASHsizing] = ACTIONS(128),
    [anon_sym_color] = ACTIONS(130),
    [anon_sym_column_DASHspan] = ACTIONS(128),
    [anon_sym_constrain] = ACTIONS(130),
    [anon_sym_content_DASHalign] = ACTIONS(130),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(128),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(128),
    [anon_sym_display] = ACTIONS(130),
    [anon_sym_dock] = ACTIONS(130),
    [anon_sym_grid_DASHcolumns] = ACTIONS(128),
    [anon_sym_grid_DASHgutter] = ACTIONS(128),
    [anon_sym_grid_DASHrows] = ACTIONS(128),
    [anon_sym_grid_DASHsize] = ACTIONS(128),
    [anon_sym_height] = ACTIONS(130),
    [anon_sym_keyline] = ACTIONS(130),
    [anon_sym_layer] = ACTIONS(130),
    [anon_sym_layers] = ACTIONS(130),
    [anon_sym_layout] = ACTIONS(130),
    [anon_sym_link_DASHbackground] = ACTIONS(130),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(128),
    [anon_sym_link_DASHcolor] = ACTIONS(130),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(128),
    [anon_sym_link_DASHstyle] = ACTIONS(130),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(128),
    [anon_sym_margin] = ACTIONS(130),
    [anon_sym_margin_DASHbottom] = ACTIONS(128),
    [anon_sym_margin_DASHleft] = ACTIONS(128),
    [anon_sym_margin_DASHright] = ACTIONS(128),
    [anon_sym_margin_DASHtop] = ACTIONS(128),
    [anon_sym_max_DASHheight] = ACTIONS(128),
    [anon_sym_max_DASHwidth] = ACTIONS(128),
    [anon_sym_min_DASHheight] = ACTIONS(128),
    [anon_sym_min_DASHwidth] = ACTIONS(128),
    [anon_sym_offset] = ACTIONS(130),
    [anon_sym_offset_DASHx] = ACTIONS(128),
    [anon_sym_offset_DASHy] = ACTIONS(128),
    [anon_sym_opacity] = ACTIONS(130),
    [anon_sym_outline] = ACTIONS(130),
    [anon_sym_outline_DASHbottom] = ACTIONS(128),
    [anon_sym_outline_DASHleft] = ACTIONS(128),
    [anon_sym_outline_DASHright] = ACTIONS(128),
    [anon_sym_outline_DASHtop] = ACTIONS(128),
    [anon_sym_overflow] = ACTIONS(130),
    [anon_sym_overflow_DASHx] = ACTIONS(128),
    [anon_sym_overflow_DASHy] = ACTIONS(128),
    [anon_sym_overlay] = ACTIONS(130),
    [anon_sym_padding] = ACTIONS(130),
    [anon_sym_padding_DASHbottom] = ACTIONS(128),
    [anon_sym_padding_DASHleft] = ACTIONS(128),
    [anon_sym_padding_DASHright] = ACTIONS(128),
    [anon_sym_padding_DASHtop] = ACTIONS(128),
    [anon_sym_row_DASHspan] = ACTIONS(128),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(130),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(128),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(128),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(130),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(128),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(128),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(128),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(128),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(130),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(128),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(128),
    [anon_sym_text_DASHalign] = ACTIONS(128),
    [anon_sym_text_DASHopacity] = ACTIONS(128),
    [anon_sym_text_DASHstyle] = ACTIONS(128),
    [anon_sym_tint] = ACTIONS(130),
    [anon_sym_visibility] = ACTIONS(130),
    [anon_sym_width] = ACTIONS(130),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [19] = {
    [aux_sym_class_selector_token1] = ACTIONS(132),
    [anon_sym_BANGimportant] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
    [sym_number] = ACTIONS(134),
    [sym_hex_color] = ACTIONS(132),
    [anon_sym_aqua] = ACTIONS(132),
    [anon_sym_black] = ACTIONS(132),
    [anon_sym_blue] = ACTIONS(132),
    [anon_sym_fuchsia] = ACTIONS(132),
    [anon_sym_gray] = ACTIONS(132),
    [anon_sym_green] = ACTIONS(132),
    [anon_sym_lime] = ACTIONS(132),
    [anon_sym_maroon] = ACTIONS(132),
    [anon_sym_navy] = ACTIONS(132),
    [anon_sym_olive] = ACTIONS(132),
    [anon_sym_orange] = ACTIONS(132),
    [anon_sym_purple] = ACTIONS(132),
    [anon_sym_red] = ACTIONS(132),
    [anon_sym_silver] = ACTIONS(132),
    [anon_sym_teal] = ACTIONS(132),
    [anon_sym_white] = ACTIONS(132),
    [anon_sym_yellow] = ACTIONS(132),
    [anon_sym_transparent] = ACTIONS(132),
    [anon_sym_auto] = ACTIONS(132),
    [anon_sym_ansi_black] = ACTIONS(132),
    [anon_sym_ansi_blue] = ACTIONS(132),
    [anon_sym_ansi_bright_black] = ACTIONS(132),
    [anon_sym_ansi_bright_blue] = ACTIONS(132),
    [anon_sym_ansi_bright_cyan] = ACTIONS(132),
    [anon_sym_ansi_bright_green] = ACTIONS(132),
    [anon_sym_ansi_bright_magenta] = ACTIONS(132),
    [anon_sym_ansi_bright_red] = ACTIONS(132),
    [anon_sym_ansi_bright_white] = ACTIONS(132),
    [anon_sym_ansi_bright_yellow] = ACTIONS(132),
    [anon_sym_ansi_cyan] = ACTIONS(132),
    [anon_sym_ansi_green] = ACTIONS(132),
    [anon_sym_ansi_magenta] = ACTIONS(132),
    [anon_sym_ansi_red] = ACTIONS(132),
    [anon_sym_ansi_white] = ACTIONS(132),
    [anon_sym_ansi_yellow] = ACTIONS(132),
    [anon_sym_ascii] = ACTIONS(132),
    [anon_sym_blank] = ACTIONS(132),
    [anon_sym_block] = ACTIONS(132),
    [anon_sym_bold] = ACTIONS(132),
    [anon_sym_border_DASHbox] = ACTIONS(132),
    [anon_sym_both] = ACTIONS(132),
    [anon_sym_bottom] = ACTIONS(132),
    [anon_sym_center] = ACTIONS(132),
    [anon_sym_content_DASHbox] = ACTIONS(132),
    [anon_sym_dashed] = ACTIONS(132),
    [anon_sym_double] = ACTIONS(132),
    [anon_sym_end] = ACTIONS(132),
    [anon_sym_grid] = ACTIONS(132),
    [anon_sym_heavy] = ACTIONS(132),
    [anon_sym_hidden] = ACTIONS(132),
    [anon_sym_hkey] = ACTIONS(132),
    [anon_sym_horizontal] = ACTIONS(132),
    [anon_sym_inflect] = ACTIONS(132),
    [anon_sym_initial] = ACTIONS(132),
    [anon_sym_inner] = ACTIONS(132),
    [anon_sym_italic] = ACTIONS(132),
    [anon_sym_justify] = ACTIONS(132),
    [anon_sym_left] = ACTIONS(132),
    [anon_sym_middle] = ACTIONS(132),
    [anon_sym_none] = ACTIONS(132),
    [anon_sym_outer] = ACTIONS(132),
    [anon_sym_panel] = ACTIONS(132),
    [anon_sym_reverse] = ACTIONS(132),
    [anon_sym_right] = ACTIONS(132),
    [anon_sym_round] = ACTIONS(132),
    [anon_sym_screen] = ACTIONS(132),
    [anon_sym_scroll] = ACTIONS(132),
    [anon_sym_solid] = ACTIONS(132),
    [anon_sym_stable] = ACTIONS(132),
    [anon_sym_start] = ACTIONS(132),
    [anon_sym_strike] = ACTIONS(132),
    [anon_sym_tall] = ACTIONS(132),
    [anon_sym_thick] = ACTIONS(132),
    [anon_sym_top] = ACTIONS(132),
    [anon_sym_underline] = ACTIONS(132),
    [anon_sym_vertical] = ACTIONS(132),
    [anon_sym_visible] = ACTIONS(132),
    [anon_sym_vkey] = ACTIONS(132),
    [anon_sym_wide] = ACTIONS(132),
    [anon_sym_x] = ACTIONS(132),
    [anon_sym_y] = ACTIONS(132),
    [anon_sym_rgb] = ACTIONS(132),
    [anon_sym_rgba] = ACTIONS(132),
    [anon_sym_hsl] = ACTIONS(132),
    [anon_sym_hsla] = ACTIONS(132),
    [anon_sym_DOLLAR] = ACTIONS(134),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [20] = {
    [anon_sym_AMP] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [sym_widget_selector] = ACTIONS(138),
    [anon_sym_POUND] = ACTIONS(138),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_align] = ACTIONS(138),
    [anon_sym_align_DASHhorizontal] = ACTIONS(136),
    [anon_sym_align_DASHvertical] = ACTIONS(136),
    [anon_sym_background] = ACTIONS(138),
    [anon_sym_border] = ACTIONS(138),
    [anon_sym_border_DASHbottom] = ACTIONS(136),
    [anon_sym_border_DASHleft] = ACTIONS(136),
    [anon_sym_border_DASHright] = ACTIONS(136),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(136),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(136),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(136),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(136),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(136),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(136),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(136),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(136),
    [anon_sym_border_DASHtop] = ACTIONS(136),
    [anon_sym_box_DASHsizing] = ACTIONS(136),
    [anon_sym_color] = ACTIONS(138),
    [anon_sym_column_DASHspan] = ACTIONS(136),
    [anon_sym_constrain] = ACTIONS(138),
    [anon_sym_content_DASHalign] = ACTIONS(138),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(136),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(136),
    [anon_sym_display] = ACTIONS(138),
    [anon_sym_dock] = ACTIONS(138),
    [anon_sym_grid_DASHcolumns] = ACTIONS(136),
    [anon_sym_grid_DASHgutter] = ACTIONS(136),
    [anon_sym_grid_DASHrows] = ACTIONS(136),
    [anon_sym_grid_DASHsize] = ACTIONS(136),
    [anon_sym_height] = ACTIONS(138),
    [anon_sym_keyline] = ACTIONS(138),
    [anon_sym_layer] = ACTIONS(138),
    [anon_sym_layers] = ACTIONS(138),
    [anon_sym_layout] = ACTIONS(138),
    [anon_sym_link_DASHbackground] = ACTIONS(138),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(136),
    [anon_sym_link_DASHcolor] = ACTIONS(138),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(136),
    [anon_sym_link_DASHstyle] = ACTIONS(138),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(136),
    [anon_sym_margin] = ACTIONS(138),
    [anon_sym_margin_DASHbottom] = ACTIONS(136),
    [anon_sym_margin_DASHleft] = ACTIONS(136),
    [anon_sym_margin_DASHright] = ACTIONS(136),
    [anon_sym_margin_DASHtop] = ACTIONS(136),
    [anon_sym_max_DASHheight] = ACTIONS(136),
    [anon_sym_max_DASHwidth] = ACTIONS(136),
    [anon_sym_min_DASHheight] = ACTIONS(136),
    [anon_sym_min_DASHwidth] = ACTIONS(136),
    [anon_sym_offset] = ACTIONS(138),
    [anon_sym_offset_DASHx] = ACTIONS(136),
    [anon_sym_offset_DASHy] = ACTIONS(136),
    [anon_sym_opacity] = ACTIONS(138),
    [anon_sym_outline] = ACTIONS(138),
    [anon_sym_outline_DASHbottom] = ACTIONS(136),
    [anon_sym_outline_DASHleft] = ACTIONS(136),
    [anon_sym_outline_DASHright] = ACTIONS(136),
    [anon_sym_outline_DASHtop] = ACTIONS(136),
    [anon_sym_overflow] = ACTIONS(138),
    [anon_sym_overflow_DASHx] = ACTIONS(136),
    [anon_sym_overflow_DASHy] = ACTIONS(136),
    [anon_sym_overlay] = ACTIONS(138),
    [anon_sym_padding] = ACTIONS(138),
    [anon_sym_padding_DASHbottom] = ACTIONS(136),
    [anon_sym_padding_DASHleft] = ACTIONS(136),
    [anon_sym_padding_DASHright] = ACTIONS(136),
    [anon_sym_padding_DASHtop] = ACTIONS(136),
    [anon_sym_row_DASHspan] = ACTIONS(136),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(138),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(136),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(136),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(138),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(136),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(136),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(136),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(136),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(138),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(136),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(136),
    [anon_sym_text_DASHalign] = ACTIONS(136),
    [anon_sym_text_DASHopacity] = ACTIONS(136),
    [anon_sym_text_DASHstyle] = ACTIONS(136),
    [anon_sym_tint] = ACTIONS(138),
    [anon_sym_visibility] = ACTIONS(138),
    [anon_sym_width] = ACTIONS(138),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [21] = {
    [aux_sym_class_selector_token1] = ACTIONS(140),
    [anon_sym_BANGimportant] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(142),
    [sym_number] = ACTIONS(142),
    [sym_hex_color] = ACTIONS(140),
    [anon_sym_aqua] = ACTIONS(140),
    [anon_sym_black] = ACTIONS(140),
    [anon_sym_blue] = ACTIONS(140),
    [anon_sym_fuchsia] = ACTIONS(140),
    [anon_sym_gray] = ACTIONS(140),
    [anon_sym_green] = ACTIONS(140),
    [anon_sym_lime] = ACTIONS(140),
    [anon_sym_maroon] = ACTIONS(140),
    [anon_sym_navy] = ACTIONS(140),
    [anon_sym_olive] = ACTIONS(140),
    [anon_sym_orange] = ACTIONS(140),
    [anon_sym_purple] = ACTIONS(140),
    [anon_sym_red] = ACTIONS(140),
    [anon_sym_silver] = ACTIONS(140),
    [anon_sym_teal] = ACTIONS(140),
    [anon_sym_white] = ACTIONS(140),
    [anon_sym_yellow] = ACTIONS(140),
    [anon_sym_transparent] = ACTIONS(140),
    [anon_sym_auto] = ACTIONS(140),
    [anon_sym_ansi_black] = ACTIONS(140),
    [anon_sym_ansi_blue] = ACTIONS(140),
    [anon_sym_ansi_bright_black] = ACTIONS(140),
    [anon_sym_ansi_bright_blue] = ACTIONS(140),
    [anon_sym_ansi_bright_cyan] = ACTIONS(140),
    [anon_sym_ansi_bright_green] = ACTIONS(140),
    [anon_sym_ansi_bright_magenta] = ACTIONS(140),
    [anon_sym_ansi_bright_red] = ACTIONS(140),
    [anon_sym_ansi_bright_white] = ACTIONS(140),
    [anon_sym_ansi_bright_yellow] = ACTIONS(140),
    [anon_sym_ansi_cyan] = ACTIONS(140),
    [anon_sym_ansi_green] = ACTIONS(140),
    [anon_sym_ansi_magenta] = ACTIONS(140),
    [anon_sym_ansi_red] = ACTIONS(140),
    [anon_sym_ansi_white] = ACTIONS(140),
    [anon_sym_ansi_yellow] = ACTIONS(140),
    [anon_sym_ascii] = ACTIONS(140),
    [anon_sym_blank] = ACTIONS(140),
    [anon_sym_block] = ACTIONS(140),
    [anon_sym_bold] = ACTIONS(140),
    [anon_sym_border_DASHbox] = ACTIONS(140),
    [anon_sym_both] = ACTIONS(140),
    [anon_sym_bottom] = ACTIONS(140),
    [anon_sym_center] = ACTIONS(140),
    [anon_sym_content_DASHbox] = ACTIONS(140),
    [anon_sym_dashed] = ACTIONS(140),
    [anon_sym_double] = ACTIONS(140),
    [anon_sym_end] = ACTIONS(140),
    [anon_sym_grid] = ACTIONS(140),
    [anon_sym_heavy] = ACTIONS(140),
    [anon_sym_hidden] = ACTIONS(140),
    [anon_sym_hkey] = ACTIONS(140),
    [anon_sym_horizontal] = ACTIONS(140),
    [anon_sym_inflect] = ACTIONS(140),
    [anon_sym_initial] = ACTIONS(140),
    [anon_sym_inner] = ACTIONS(140),
    [anon_sym_italic] = ACTIONS(140),
    [anon_sym_justify] = ACTIONS(140),
    [anon_sym_left] = ACTIONS(140),
    [anon_sym_middle] = ACTIONS(140),
    [anon_sym_none] = ACTIONS(140),
    [anon_sym_outer] = ACTIONS(140),
    [anon_sym_panel] = ACTIONS(140),
    [anon_sym_reverse] = ACTIONS(140),
    [anon_sym_right] = ACTIONS(140),
    [anon_sym_round] = ACTIONS(140),
    [anon_sym_screen] = ACTIONS(140),
    [anon_sym_scroll] = ACTIONS(140),
    [anon_sym_solid] = ACTIONS(140),
    [anon_sym_stable] = ACTIONS(140),
    [anon_sym_start] = ACTIONS(140),
    [anon_sym_strike] = ACTIONS(140),
    [anon_sym_tall] = ACTIONS(140),
    [anon_sym_thick] = ACTIONS(140),
    [anon_sym_top] = ACTIONS(140),
    [anon_sym_underline] = ACTIONS(140),
    [anon_sym_vertical] = ACTIONS(140),
    [anon_sym_visible] = ACTIONS(140),
    [anon_sym_vkey] = ACTIONS(140),
    [anon_sym_wide] = ACTIONS(140),
    [anon_sym_x] = ACTIONS(140),
    [anon_sym_y] = ACTIONS(140),
    [anon_sym_rgb] = ACTIONS(140),
    [anon_sym_rgba] = ACTIONS(140),
    [anon_sym_hsl] = ACTIONS(140),
    [anon_sym_hsla] = ACTIONS(140),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [22] = {
    [anon_sym_AMP] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(144),
    [sym_widget_selector] = ACTIONS(146),
    [anon_sym_POUND] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_align] = ACTIONS(146),
    [anon_sym_align_DASHhorizontal] = ACTIONS(144),
    [anon_sym_align_DASHvertical] = ACTIONS(144),
    [anon_sym_background] = ACTIONS(146),
    [anon_sym_border] = ACTIONS(146),
    [anon_sym_border_DASHbottom] = ACTIONS(144),
    [anon_sym_border_DASHleft] = ACTIONS(144),
    [anon_sym_border_DASHright] = ACTIONS(144),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(144),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(144),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(144),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(144),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(144),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(144),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(144),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(144),
    [anon_sym_border_DASHtop] = ACTIONS(144),
    [anon_sym_box_DASHsizing] = ACTIONS(144),
    [anon_sym_color] = ACTIONS(146),
    [anon_sym_column_DASHspan] = ACTIONS(144),
    [anon_sym_constrain] = ACTIONS(146),
    [anon_sym_content_DASHalign] = ACTIONS(146),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(144),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(144),
    [anon_sym_display] = ACTIONS(146),
    [anon_sym_dock] = ACTIONS(146),
    [anon_sym_grid_DASHcolumns] = ACTIONS(144),
    [anon_sym_grid_DASHgutter] = ACTIONS(144),
    [anon_sym_grid_DASHrows] = ACTIONS(144),
    [anon_sym_grid_DASHsize] = ACTIONS(144),
    [anon_sym_height] = ACTIONS(146),
    [anon_sym_keyline] = ACTIONS(146),
    [anon_sym_layer] = ACTIONS(146),
    [anon_sym_layers] = ACTIONS(146),
    [anon_sym_layout] = ACTIONS(146),
    [anon_sym_link_DASHbackground] = ACTIONS(146),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(144),
    [anon_sym_link_DASHcolor] = ACTIONS(146),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(144),
    [anon_sym_link_DASHstyle] = ACTIONS(146),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(144),
    [anon_sym_margin] = ACTIONS(146),
    [anon_sym_margin_DASHbottom] = ACTIONS(144),
    [anon_sym_margin_DASHleft] = ACTIONS(144),
    [anon_sym_margin_DASHright] = ACTIONS(144),
    [anon_sym_margin_DASHtop] = ACTIONS(144),
    [anon_sym_max_DASHheight] = ACTIONS(144),
    [anon_sym_max_DASHwidth] = ACTIONS(144),
    [anon_sym_min_DASHheight] = ACTIONS(144),
    [anon_sym_min_DASHwidth] = ACTIONS(144),
    [anon_sym_offset] = ACTIONS(146),
    [anon_sym_offset_DASHx] = ACTIONS(144),
    [anon_sym_offset_DASHy] = ACTIONS(144),
    [anon_sym_opacity] = ACTIONS(146),
    [anon_sym_outline] = ACTIONS(146),
    [anon_sym_outline_DASHbottom] = ACTIONS(144),
    [anon_sym_outline_DASHleft] = ACTIONS(144),
    [anon_sym_outline_DASHright] = ACTIONS(144),
    [anon_sym_outline_DASHtop] = ACTIONS(144),
    [anon_sym_overflow] = ACTIONS(146),
    [anon_sym_overflow_DASHx] = ACTIONS(144),
    [anon_sym_overflow_DASHy] = ACTIONS(144),
    [anon_sym_overlay] = ACTIONS(146),
    [anon_sym_padding] = ACTIONS(146),
    [anon_sym_padding_DASHbottom] = ACTIONS(144),
    [anon_sym_padding_DASHleft] = ACTIONS(144),
    [anon_sym_padding_DASHright] = ACTIONS(144),
    [anon_sym_padding_DASHtop] = ACTIONS(144),
    [anon_sym_row_DASHspan] = ACTIONS(144),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(146),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(144),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(144),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(146),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(144),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(144),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(144),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(144),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(146),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(144),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(144),
    [anon_sym_text_DASHalign] = ACTIONS(144),
    [anon_sym_text_DASHopacity] = ACTIONS(144),
    [anon_sym_text_DASHstyle] = ACTIONS(144),
    [anon_sym_tint] = ACTIONS(146),
    [anon_sym_visibility] = ACTIONS(146),
    [anon_sym_width] = ACTIONS(146),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [23] = {
    [anon_sym_AMP] = ACTIONS(148),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_widget_selector] = ACTIONS(150),
    [anon_sym_POUND] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_align] = ACTIONS(150),
    [anon_sym_align_DASHhorizontal] = ACTIONS(148),
    [anon_sym_align_DASHvertical] = ACTIONS(148),
    [anon_sym_background] = ACTIONS(150),
    [anon_sym_border] = ACTIONS(150),
    [anon_sym_border_DASHbottom] = ACTIONS(148),
    [anon_sym_border_DASHleft] = ACTIONS(148),
    [anon_sym_border_DASHright] = ACTIONS(148),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(148),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(148),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(148),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(148),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(148),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(148),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(148),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(148),
    [anon_sym_border_DASHtop] = ACTIONS(148),
    [anon_sym_box_DASHsizing] = ACTIONS(148),
    [anon_sym_color] = ACTIONS(150),
    [anon_sym_column_DASHspan] = ACTIONS(148),
    [anon_sym_constrain] = ACTIONS(150),
    [anon_sym_content_DASHalign] = ACTIONS(150),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(148),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(148),
    [anon_sym_display] = ACTIONS(150),
    [anon_sym_dock] = ACTIONS(150),
    [anon_sym_grid_DASHcolumns] = ACTIONS(148),
    [anon_sym_grid_DASHgutter] = ACTIONS(148),
    [anon_sym_grid_DASHrows] = ACTIONS(148),
    [anon_sym_grid_DASHsize] = ACTIONS(148),
    [anon_sym_height] = ACTIONS(150),
    [anon_sym_keyline] = ACTIONS(150),
    [anon_sym_layer] = ACTIONS(150),
    [anon_sym_layers] = ACTIONS(150),
    [anon_sym_layout] = ACTIONS(150),
    [anon_sym_link_DASHbackground] = ACTIONS(150),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(148),
    [anon_sym_link_DASHcolor] = ACTIONS(150),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(148),
    [anon_sym_link_DASHstyle] = ACTIONS(150),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(148),
    [anon_sym_margin] = ACTIONS(150),
    [anon_sym_margin_DASHbottom] = ACTIONS(148),
    [anon_sym_margin_DASHleft] = ACTIONS(148),
    [anon_sym_margin_DASHright] = ACTIONS(148),
    [anon_sym_margin_DASHtop] = ACTIONS(148),
    [anon_sym_max_DASHheight] = ACTIONS(148),
    [anon_sym_max_DASHwidth] = ACTIONS(148),
    [anon_sym_min_DASHheight] = ACTIONS(148),
    [anon_sym_min_DASHwidth] = ACTIONS(148),
    [anon_sym_offset] = ACTIONS(150),
    [anon_sym_offset_DASHx] = ACTIONS(148),
    [anon_sym_offset_DASHy] = ACTIONS(148),
    [anon_sym_opacity] = ACTIONS(150),
    [anon_sym_outline] = ACTIONS(150),
    [anon_sym_outline_DASHbottom] = ACTIONS(148),
    [anon_sym_outline_DASHleft] = ACTIONS(148),
    [anon_sym_outline_DASHright] = ACTIONS(148),
    [anon_sym_outline_DASHtop] = ACTIONS(148),
    [anon_sym_overflow] = ACTIONS(150),
    [anon_sym_overflow_DASHx] = ACTIONS(148),
    [anon_sym_overflow_DASHy] = ACTIONS(148),
    [anon_sym_overlay] = ACTIONS(150),
    [anon_sym_padding] = ACTIONS(150),
    [anon_sym_padding_DASHbottom] = ACTIONS(148),
    [anon_sym_padding_DASHleft] = ACTIONS(148),
    [anon_sym_padding_DASHright] = ACTIONS(148),
    [anon_sym_padding_DASHtop] = ACTIONS(148),
    [anon_sym_row_DASHspan] = ACTIONS(148),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(150),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(148),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(148),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(150),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(148),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(148),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(148),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(148),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(150),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(148),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(148),
    [anon_sym_text_DASHalign] = ACTIONS(148),
    [anon_sym_text_DASHopacity] = ACTIONS(148),
    [anon_sym_text_DASHstyle] = ACTIONS(148),
    [anon_sym_tint] = ACTIONS(150),
    [anon_sym_visibility] = ACTIONS(150),
    [anon_sym_width] = ACTIONS(150),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
  [24] = {
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [sym_widget_selector] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_align] = ACTIONS(154),
    [anon_sym_align_DASHhorizontal] = ACTIONS(152),
    [anon_sym_align_DASHvertical] = ACTIONS(152),
    [anon_sym_background] = ACTIONS(154),
    [anon_sym_border] = ACTIONS(154),
    [anon_sym_border_DASHbottom] = ACTIONS(152),
    [anon_sym_border_DASHleft] = ACTIONS(152),
    [anon_sym_border_DASHright] = ACTIONS(152),
    [anon_sym_border_DASHsubtitle_DASHalign] = ACTIONS(152),
    [anon_sym_border_DASHsubtitle_DASHbackground] = ACTIONS(152),
    [anon_sym_border_DASHsubtitle_DASHcolor] = ACTIONS(152),
    [anon_sym_border_DASHsubtitle_DASHstyle] = ACTIONS(152),
    [anon_sym_border_DASHtitle_DASHalign] = ACTIONS(152),
    [anon_sym_border_DASHtitle_DASHbackground] = ACTIONS(152),
    [anon_sym_border_DASHtitle_DASHcolor] = ACTIONS(152),
    [anon_sym_border_DASHtitle_DASHstyle] = ACTIONS(152),
    [anon_sym_border_DASHtop] = ACTIONS(152),
    [anon_sym_box_DASHsizing] = ACTIONS(152),
    [anon_sym_color] = ACTIONS(154),
    [anon_sym_column_DASHspan] = ACTIONS(152),
    [anon_sym_constrain] = ACTIONS(154),
    [anon_sym_content_DASHalign] = ACTIONS(154),
    [anon_sym_content_DASHalign_DASHhorizontal] = ACTIONS(152),
    [anon_sym_content_DASHalign_DASHvertical] = ACTIONS(152),
    [anon_sym_display] = ACTIONS(154),
    [anon_sym_dock] = ACTIONS(154),
    [anon_sym_grid_DASHcolumns] = ACTIONS(152),
    [anon_sym_grid_DASHgutter] = ACTIONS(152),
    [anon_sym_grid_DASHrows] = ACTIONS(152),
    [anon_sym_grid_DASHsize] = ACTIONS(152),
    [anon_sym_height] = ACTIONS(154),
    [anon_sym_keyline] = ACTIONS(154),
    [anon_sym_layer] = ACTIONS(154),
    [anon_sym_layers] = ACTIONS(154),
    [anon_sym_layout] = ACTIONS(154),
    [anon_sym_link_DASHbackground] = ACTIONS(154),
    [anon_sym_link_DASHbackground_DASHhover] = ACTIONS(152),
    [anon_sym_link_DASHcolor] = ACTIONS(154),
    [anon_sym_link_DASHcolor_DASHhover] = ACTIONS(152),
    [anon_sym_link_DASHstyle] = ACTIONS(154),
    [anon_sym_link_DASHstyle_DASHhover] = ACTIONS(152),
    [anon_sym_margin] = ACTIONS(154),
    [anon_sym_margin_DASHbottom] = ACTIONS(152),
    [anon_sym_margin_DASHleft] = ACTIONS(152),
    [anon_sym_margin_DASHright] = ACTIONS(152),
    [anon_sym_margin_DASHtop] = ACTIONS(152),
    [anon_sym_max_DASHheight] = ACTIONS(152),
    [anon_sym_max_DASHwidth] = ACTIONS(152),
    [anon_sym_min_DASHheight] = ACTIONS(152),
    [anon_sym_min_DASHwidth] = ACTIONS(152),
    [anon_sym_offset] = ACTIONS(154),
    [anon_sym_offset_DASHx] = ACTIONS(152),
    [anon_sym_offset_DASHy] = ACTIONS(152),
    [anon_sym_opacity] = ACTIONS(154),
    [anon_sym_outline] = ACTIONS(154),
    [anon_sym_outline_DASHbottom] = ACTIONS(152),
    [anon_sym_outline_DASHleft] = ACTIONS(152),
    [anon_sym_outline_DASHright] = ACTIONS(152),
    [anon_sym_outline_DASHtop] = ACTIONS(152),
    [anon_sym_overflow] = ACTIONS(154),
    [anon_sym_overflow_DASHx] = ACTIONS(152),
    [anon_sym_overflow_DASHy] = ACTIONS(152),
    [anon_sym_overlay] = ACTIONS(154),
    [anon_sym_padding] = ACTIONS(154),
    [anon_sym_padding_DASHbottom] = ACTIONS(152),
    [anon_sym_padding_DASHleft] = ACTIONS(152),
    [anon_sym_padding_DASHright] = ACTIONS(152),
    [anon_sym_padding_DASHtop] = ACTIONS(152),
    [anon_sym_row_DASHspan] = ACTIONS(152),
    [anon_sym_scrollbar_DASHbackground] = ACTIONS(154),
    [anon_sym_scrollbar_DASHbackground_DASHactive] = ACTIONS(152),
    [anon_sym_scrollbar_DASHbackground_DASHhover] = ACTIONS(152),
    [anon_sym_scrollbar_DASHcolor] = ACTIONS(154),
    [anon_sym_scrollbar_DASHcolor_DASHactive] = ACTIONS(152),
    [anon_sym_scrollbar_DASHcolor_DASHhover] = ACTIONS(152),
    [anon_sym_scrollbar_DASHcorner_DASHcolor] = ACTIONS(152),
    [anon_sym_scrollbar_DASHgutter] = ACTIONS(152),
    [anon_sym_scrollbar_DASHsize] = ACTIONS(154),
    [anon_sym_scrollbar_DASHsize_DASHhorizontal] = ACTIONS(152),
    [anon_sym_scrollbar_DASHsize_DASHvertical] = ACTIONS(152),
    [anon_sym_text_DASHalign] = ACTIONS(152),
    [anon_sym_text_DASHopacity] = ACTIONS(152),
    [anon_sym_text_DASHstyle] = ACTIONS(152),
    [anon_sym_tint] = ACTIONS(154),
    [anon_sym_visibility] = ACTIONS(154),
    [anon_sym_width] = ACTIONS(154),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment_block,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      sym_widget_selector,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_rule,
    STATE(38), 1,
      sym_simple_selector,
    STATE(41), 1,
      sym_selector,
    STATE(52), 1,
      sym_nesting_selector_rule,
    STATE(61), 1,
      sym_selector_list,
    STATE(39), 2,
      sym_class_selector,
      sym_id_selector,
    STATE(26), 3,
      sym_statement,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
  [49] = 15,
    ACTIONS(3), 1,
      sym_comment_block,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(166), 1,
      sym_widget_selector,
    ACTIONS(169), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_rule,
    STATE(38), 1,
      sym_simple_selector,
    STATE(41), 1,
      sym_selector,
    STATE(52), 1,
      sym_nesting_selector_rule,
    STATE(61), 1,
      sym_selector_list,
    STATE(39), 2,
      sym_class_selector,
      sym_id_selector,
    STATE(26), 3,
      sym_statement,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
  [98] = 10,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_widget_selector,
    ACTIONS(175), 1,
      aux_sym_selector_list_token1,
    ACTIONS(177), 1,
      anon_sym_AMP,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(38), 1,
      sym_simple_selector,
    STATE(52), 1,
      sym_nesting_selector_rule,
    STATE(53), 1,
      sym_selector,
    ACTIONS(5), 2,
      sym_comment_block,
      sym_comment_line,
    STATE(39), 2,
      sym_class_selector,
      sym_id_selector,
  [131] = 10,
    ACTIONS(3), 1,
      sym_comment_block,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      sym_widget_selector,
    ACTIONS(15), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_simple_selector,
    STATE(48), 1,
      sym_selector,
    STATE(52), 1,
      sym_nesting_selector_rule,
    STATE(39), 2,
      sym_class_selector,
      sym_id_selector,
  [163] = 4,
    ACTIONS(3), 1,
      sym_comment_block,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_DOT,
      sym_widget_selector,
      anon_sym_DOLLAR,
  [180] = 4,
    ACTIONS(3), 1,
      sym_comment_block,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_DOT,
      sym_widget_selector,
      anon_sym_DOLLAR,
  [197] = 4,
    ACTIONS(3), 1,
      sym_comment_block,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_DOT,
      sym_widget_selector,
      anon_sym_DOLLAR,
  [214] = 4,
    ACTIONS(3), 1,
      sym_comment_block,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_DOT,
      sym_widget_selector,
      anon_sym_DOLLAR,
  [231] = 4,
    ACTIONS(3), 1,
      sym_comment_block,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(150), 1,
      anon_sym_POUND,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_DOT,
      sym_widget_selector,
      anon_sym_DOLLAR,
  [248] = 7,
    ACTIONS(3), 1,
      sym_comment_block,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      sym_widget_selector,
    ACTIONS(15), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_simple_selector,
    STATE(39), 2,
      sym_class_selector,
      sym_id_selector,
  [271] = 4,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(189), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [287] = 3,
    ACTIONS(197), 1,
      anon_sym_focus,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(195), 4,
      anon_sym_disabled,
      anon_sym_enabled,
      anon_sym_focus_DASHwithin,
      anon_sym_hover,
  [301] = 4,
    ACTIONS(201), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_pseudo_class,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(199), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [317] = 4,
    ACTIONS(201), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_pseudo_class,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(203), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [333] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(205), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [344] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(207), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [355] = 5,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_GT,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      aux_sym_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [372] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(215), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [383] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(142), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [394] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(217), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [405] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(219), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [416] = 4,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_function_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [430] = 4,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_function_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [444] = 3,
    ACTIONS(211), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [456] = 4,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      aux_sym_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [470] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(234), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [480] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(236), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [490] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(203), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
  [500] = 3,
    ACTIONS(211), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(238), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [512] = 4,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_function_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [526] = 4,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_selector_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [540] = 3,
    ACTIONS(245), 1,
      aux_sym_class_selector_token1,
    STATE(68), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [551] = 3,
    ACTIONS(247), 1,
      anon_sym_BANGimportant,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [562] = 3,
    ACTIONS(251), 1,
      sym_number,
    STATE(69), 1,
      sym_function_parameters,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [573] = 3,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [584] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [593] = 3,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [604] = 3,
    ACTIONS(245), 1,
      aux_sym_class_selector_token1,
    STATE(50), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [615] = 3,
    ACTIONS(257), 1,
      aux_sym_class_selector_token1,
    STATE(50), 1,
      sym_pseudo_identifier,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [626] = 3,
    ACTIONS(259), 1,
      aux_sym_class_selector_token1,
    STATE(17), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [637] = 2,
    ACTIONS(261), 1,
      aux_sym_class_selector_token1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [645] = 2,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [653] = 2,
    ACTIONS(265), 1,
      aux_sym_class_selector_token1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [661] = 2,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [669] = 2,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [677] = 2,
    ACTIONS(271), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [685] = 2,
    ACTIONS(273), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [693] = 2,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [701] = 2,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [709] = 2,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [717] = 2,
    ACTIONS(281), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 49,
  [SMALL_STATE(27)] = 98,
  [SMALL_STATE(28)] = 131,
  [SMALL_STATE(29)] = 163,
  [SMALL_STATE(30)] = 180,
  [SMALL_STATE(31)] = 197,
  [SMALL_STATE(32)] = 214,
  [SMALL_STATE(33)] = 231,
  [SMALL_STATE(34)] = 248,
  [SMALL_STATE(35)] = 271,
  [SMALL_STATE(36)] = 287,
  [SMALL_STATE(37)] = 301,
  [SMALL_STATE(38)] = 317,
  [SMALL_STATE(39)] = 333,
  [SMALL_STATE(40)] = 344,
  [SMALL_STATE(41)] = 355,
  [SMALL_STATE(42)] = 372,
  [SMALL_STATE(43)] = 383,
  [SMALL_STATE(44)] = 394,
  [SMALL_STATE(45)] = 405,
  [SMALL_STATE(46)] = 416,
  [SMALL_STATE(47)] = 430,
  [SMALL_STATE(48)] = 444,
  [SMALL_STATE(49)] = 456,
  [SMALL_STATE(50)] = 470,
  [SMALL_STATE(51)] = 480,
  [SMALL_STATE(52)] = 490,
  [SMALL_STATE(53)] = 500,
  [SMALL_STATE(54)] = 512,
  [SMALL_STATE(55)] = 526,
  [SMALL_STATE(56)] = 540,
  [SMALL_STATE(57)] = 551,
  [SMALL_STATE(58)] = 562,
  [SMALL_STATE(59)] = 573,
  [SMALL_STATE(60)] = 584,
  [SMALL_STATE(61)] = 593,
  [SMALL_STATE(62)] = 604,
  [SMALL_STATE(63)] = 615,
  [SMALL_STATE(64)] = 626,
  [SMALL_STATE(65)] = 637,
  [SMALL_STATE(66)] = 645,
  [SMALL_STATE(67)] = 653,
  [SMALL_STATE(68)] = 661,
  [SMALL_STATE(69)] = 669,
  [SMALL_STATE(70)] = 677,
  [SMALL_STATE(71)] = 685,
  [SMALL_STATE(72)] = 693,
  [SMALL_STATE(73)] = 701,
  [SMALL_STATE(74)] = 709,
  [SMALL_STATE(75)] = 717,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_value_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_color, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_color, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ansi_color, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ansi_color, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_keyword, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_keyword, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_reference, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nesting_selector_rule, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_selector, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_list, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_selector, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_list_repeat1, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_list, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nesting_selector_rule, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_identifier, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_list_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_list_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [277] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tcss(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
