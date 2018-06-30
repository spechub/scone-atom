#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 238
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_Feature_COLON = 1,
  anon_sym_LF = 2,
  sym_title = 3,
  aux_sym_SLASH_BSLASHS_SLASH = 4,
  sym_tag = 5,
  anon_sym_Language = 6,
  anon_sym_PERCENTOWL = 7,
  anon_sym_PERCENTCommonLogic = 8,
  anon_sym_Test = 9,
  anon_sym_theontology = 10,
  anon_sym_Scenario_COLON = 11,
  anon_sym_that = 12,
  anon_sym_DOT = 13,
  anon_sym_thescenariois = 14,
  anon_sym_isenumeratedas = 15,
  anon_sym_and = 16,
  anon_sym_every = 17,
  anon_sym_is = 18,
  anon_sym_isasubclassof = 19,
  anon_sym_no = 20,
  anon_sym_isa = 21,
  anon_sym_aredisjoint = 22,
  anon_sym_some = 23,
  anon_sym_are = 24,
  anon_sym_aren_SQUOTEt = 25,
  anon_sym_isn_SQUOTEt = 26,
  anon_sym_thesameas = 27,
  sym_are_different = 28,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 29,
  aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 30,
  aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 31,
  sym_delimiter = 32,
  anon_sym_a = 33,
  anon_sym_an = 34,
  anon_sym_not = 35,
  anon_sym_neither = 36,
  anon_sym_nor = 37,
  anon_sym_or = 38,
  anon_sym_COMMA = 39,
  anon_sym_who = 40,
  anon_sym_which = 41,
  anon_sym_only = 42,
  anon_sym_the = 43,
  anon_sym_does = 44,
  anon_sym_doesn_SQUOTEt = 45,
  anon_sym_has = 46,
  anon_sym_hasn_SQUOTEt = 47,
  anon_sym_as = 48,
  anon_sym_of = 49,
  anon_sym_than = 50,
  anon_sym_to = 51,
  anon_sym_on = 52,
  anon_sym_in = 53,
  sym_And = 54,
  sym_given = 55,
  sym_then = 56,
  anon_sym_consistent = 57,
  anon_sym_inconsistent = 58,
  sym_is_defined_as = 59,
  anon_sym_don_SQUOTEt = 60,
  anon_sym_infer = 61,
  sym_star = 62,
  sym_BGround = 63,
  sym_source_file = 64,
  sym_feature = 65,
  sym_narrative = 66,
  sym_background = 67,
  sym_language_setting = 68,
  sym_language_ID = 69,
  sym_import = 70,
  sym_scenario = 71,
  sym_scenario_head = 72,
  sym_scenario_body = 73,
  sym_assumption_block = 74,
  sym_assumption = 75,
  sym_further_assumption = 76,
  sym_test_block = 77,
  sym_test = 78,
  sym_further_test = 79,
  sym_inference_test = 80,
  sym_consistency_test = 81,
  sym_sentence = 82,
  sym_infer_sentence = 83,
  sym_definition = 84,
  sym_proposition = 85,
  sym_universal = 86,
  sym_universal_positve = 87,
  sym_universal_negative = 88,
  sym_particular = 89,
  sym_fact = 90,
  sym_instance = 91,
  sym_relation = 92,
  sym_equation = 93,
  sym_different = 94,
  sym_source = 95,
  sym_source_body = 96,
  sym_class_expression = 97,
  sym_pos_class = 98,
  sym_class_atom = 99,
  sym_conjunction = 100,
  sym_disjunction = 101,
  sym_qualified_class = 102,
  sym_qualifier = 103,
  sym_quantifier = 104,
  sym_predicate_phrase = 105,
  sym_predicate_open = 106,
  sym_predicate_end = 107,
  sym_class_name = 108,
  sym_predicate_name = 109,
  sym_predicate_fragement = 110,
  sym_indiv_name = 111,
  sym_qname = 112,
  sym_uriref = 113,
  sym_consistency = 114,
  sym_infer_start = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_feature_repeat1 = 117,
  aux_sym_narrative_repeat1 = 118,
  aux_sym_background_repeat1 = 119,
  aux_sym_scenario_body_repeat1 = 120,
  aux_sym_assumption_block_repeat1 = 121,
  aux_sym_test_block_repeat1 = 122,
  aux_sym_definition_repeat1 = 123,
  aux_sym_universal_negative_repeat1 = 124,
  aux_sym_source_body_repeat1 = 125,
  aux_sym_conjunction_repeat1 = 126,
  aux_sym_conjunction_repeat2 = 127,
  aux_sym_disjunction_repeat1 = 128,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_Feature_COLON] = "Feature:",
  [anon_sym_LF] = "\n",
  [sym_title] = "title",
  [aux_sym_SLASH_BSLASHS_SLASH] = "/\\S/",
  [sym_tag] = "tag",
  [anon_sym_Language] = "Language",
  [anon_sym_PERCENTOWL] = "%OWL",
  [anon_sym_PERCENTCommonLogic] = "%CommonLogic",
  [anon_sym_Test] = "Test",
  [anon_sym_theontology] = "the ontology",
  [anon_sym_Scenario_COLON] = "Scenario:",
  [anon_sym_that] = "that",
  [anon_sym_DOT] = ".",
  [anon_sym_thescenariois] = "the scenario is",
  [anon_sym_isenumeratedas] = "is enumerated as",
  [anon_sym_and] = "and",
  [anon_sym_every] = "every",
  [anon_sym_is] = "is",
  [anon_sym_isasubclassof] = "is a subclass of",
  [anon_sym_no] = "no",
  [anon_sym_isa] = "is a",
  [anon_sym_aredisjoint] = "are disjoint",
  [anon_sym_some] = "some",
  [anon_sym_are] = "are",
  [anon_sym_aren_SQUOTEt] = "aren't",
  [anon_sym_isn_SQUOTEt] = "isn't",
  [anon_sym_thesameas] = "the same as",
  [sym_are_different] = "are_different",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/[^\"]/",
  [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\"[^\"]/",
  [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\"\"[^\"]/",
  [sym_delimiter] = "delimiter",
  [anon_sym_a] = "a ",
  [anon_sym_an] = "an ",
  [anon_sym_not] = "not",
  [anon_sym_neither] = "neither",
  [anon_sym_nor] = "nor",
  [anon_sym_or] = "or",
  [anon_sym_COMMA] = ",",
  [anon_sym_who] = "who",
  [anon_sym_which] = "which",
  [anon_sym_only] = "only",
  [anon_sym_the] = "the ",
  [anon_sym_does] = "does",
  [anon_sym_doesn_SQUOTEt] = "doesn't",
  [anon_sym_has] = "has",
  [anon_sym_hasn_SQUOTEt] = "hasn't",
  [anon_sym_as] = "as",
  [anon_sym_of] = "of",
  [anon_sym_than] = "than",
  [anon_sym_to] = "to",
  [anon_sym_on] = "on",
  [anon_sym_in] = "in",
  [sym_And] = "And",
  [sym_given] = "given",
  [sym_then] = "then",
  [anon_sym_consistent] = "consistent",
  [anon_sym_inconsistent] = "inconsistent",
  [sym_is_defined_as] = "is_defined_as",
  [anon_sym_don_SQUOTEt] = "don't",
  [anon_sym_infer] = "infer",
  [sym_star] = "star",
  [sym_BGround] = "BGround",
  [sym_source_file] = "source_file",
  [sym_feature] = "feature",
  [sym_narrative] = "narrative",
  [sym_background] = "background",
  [sym_language_setting] = "language_setting",
  [sym_language_ID] = "language_ID",
  [sym_import] = "import",
  [sym_scenario] = "scenario",
  [sym_scenario_head] = "scenario_head",
  [sym_scenario_body] = "scenario_body",
  [sym_assumption_block] = "assumption_block",
  [sym_assumption] = "assumption",
  [sym_further_assumption] = "further_assumption",
  [sym_test_block] = "test_block",
  [sym_test] = "test",
  [sym_further_test] = "further_test",
  [sym_inference_test] = "inference_test",
  [sym_consistency_test] = "consistency_test",
  [sym_sentence] = "sentence",
  [sym_infer_sentence] = "infer_sentence",
  [sym_definition] = "definition",
  [sym_proposition] = "proposition",
  [sym_universal] = "universal",
  [sym_universal_positve] = "universal_positve",
  [sym_universal_negative] = "universal_negative",
  [sym_particular] = "particular",
  [sym_fact] = "fact",
  [sym_instance] = "instance",
  [sym_relation] = "relation",
  [sym_equation] = "equation",
  [sym_different] = "different",
  [sym_source] = "source",
  [sym_source_body] = "source_body",
  [sym_class_expression] = "class_expression",
  [sym_pos_class] = "pos_class",
  [sym_class_atom] = "class_atom",
  [sym_conjunction] = "conjunction",
  [sym_disjunction] = "disjunction",
  [sym_qualified_class] = "qualified_class",
  [sym_qualifier] = "qualifier",
  [sym_quantifier] = "quantifier",
  [sym_predicate_phrase] = "predicate_phrase",
  [sym_predicate_open] = "predicate_open",
  [sym_predicate_end] = "predicate_end",
  [sym_class_name] = "class_name",
  [sym_predicate_name] = "predicate_name",
  [sym_predicate_fragement] = "predicate_fragement",
  [sym_indiv_name] = "indiv_name",
  [sym_qname] = "qname",
  [sym_uriref] = "uriref",
  [sym_consistency] = "consistency",
  [sym_infer_start] = "infer_start",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_feature_repeat1] = "feature_repeat1",
  [aux_sym_narrative_repeat1] = "narrative_repeat1",
  [aux_sym_background_repeat1] = "background_repeat1",
  [aux_sym_scenario_body_repeat1] = "scenario_body_repeat1",
  [aux_sym_assumption_block_repeat1] = "assumption_block_repeat1",
  [aux_sym_test_block_repeat1] = "test_block_repeat1",
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_universal_negative_repeat1] = "universal_negative_repeat1",
  [aux_sym_source_body_repeat1] = "source_body_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Feature_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASHS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Language] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTOWL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTCommonLogic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_theontology] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scenario_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_that] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thescenariois] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isenumeratedas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_every] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isasubclassof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aredisjoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aren_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isn_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thesameas] = {
    .visible = true,
    .named = false,
  },
  [sym_are_different] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_an] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neither] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_who] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_which] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_the] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_does] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doesn_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasn_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_than] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [sym_And] = {
    .visible = true,
    .named = true,
  },
  [sym_given] = {
    .visible = true,
    .named = true,
  },
  [sym_then] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_consistent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inconsistent] = {
    .visible = true,
    .named = false,
  },
  [sym_is_defined_as] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_don_SQUOTEt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infer] = {
    .visible = true,
    .named = false,
  },
  [sym_star] = {
    .visible = true,
    .named = true,
  },
  [sym_BGround] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_narrative] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_language_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_language_ID] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_head] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_body] = {
    .visible = true,
    .named = true,
  },
  [sym_assumption_block] = {
    .visible = true,
    .named = true,
  },
  [sym_assumption] = {
    .visible = true,
    .named = true,
  },
  [sym_further_assumption] = {
    .visible = true,
    .named = true,
  },
  [sym_test_block] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_further_test] = {
    .visible = true,
    .named = true,
  },
  [sym_inference_test] = {
    .visible = true,
    .named = true,
  },
  [sym_consistency_test] = {
    .visible = true,
    .named = true,
  },
  [sym_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_infer_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_proposition] = {
    .visible = true,
    .named = true,
  },
  [sym_universal] = {
    .visible = true,
    .named = true,
  },
  [sym_universal_positve] = {
    .visible = true,
    .named = true,
  },
  [sym_universal_negative] = {
    .visible = true,
    .named = true,
  },
  [sym_particular] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_different] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_source_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pos_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_class] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_open] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_end] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_name] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_fragement] = {
    .visible = true,
    .named = true,
  },
  [sym_indiv_name] = {
    .visible = true,
    .named = true,
  },
  [sym_qname] = {
    .visible = true,
    .named = true,
  },
  [sym_uriref] = {
    .visible = true,
    .named = true,
  },
  [sym_consistency] = {
    .visible = true,
    .named = true,
  },
  [sym_infer_start] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_narrative_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_background_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assumption_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_universal_negative_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'B')
        ADVANCE(25);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'd')
        ADVANCE(80);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'h')
        ADVANCE(92);
      if (lookahead == 'i')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(141);
      if (lookahead == 'o')
        ADVANCE(151);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == 't')
        ADVANCE(161);
      if (lookahead == 'w')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      ADVANCE(190);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'C')
        ADVANCE(3);
      if (lookahead == 'O')
        ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'o')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'm')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'm')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'o')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'n')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'L')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'o')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'g')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'i')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'c')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PERCENTCommonLogic);
      END_STATE();
    case 14:
      if (lookahead == 'W')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'L')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PERCENTOWL);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_star);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'd')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_And);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'a')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'c')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'k')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'g')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'r')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'o')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'u')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'n')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'd')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == ':')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_BGround);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'i')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'v')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'e')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'n')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_given);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'c')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'a')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'r')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'i')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'o')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ':')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Scenario_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_then);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == ' ')
        ADVANCE(55);
      if (lookahead == 'n')
        ADVANCE(56);
      if (lookahead == 'r')
        ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 56:
      if (lookahead == ' ')
        ADVANCE(57);
      if (lookahead == 'd')
        ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_an);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 59:
      if (lookahead == 'e')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_are);
      if (lookahead == ' ')
        ADVANCE(61);
      if (lookahead == 'n')
        ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'd')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'i')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'f')
        ADVANCE(64);
      if (lookahead == 's')
        ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'f')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'e')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'r')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'n')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 't')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_are_different);
      END_STATE();
    case 71:
      if (lookahead == 'j')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'o')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'i')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'n')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_aredisjoint);
      END_STATE();
    case 77:
      if (lookahead == '\'')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 't')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_aren_SQUOTEt);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'e')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 's')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_does);
      if (lookahead == 'n')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == '\'')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 't')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_doesn_SQUOTEt);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'v')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'r')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'y')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_every);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'a')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 's')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == 'n')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == '\'')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 't')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_hasn_SQUOTEt);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == 's')
        ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ')
        ADVANCE(101);
      if (lookahead == 'n')
        ADVANCE(138);
      END_STATE();
    case 101:
      if (lookahead == 'a')
        ADVANCE(102);
      if (lookahead == 'd')
        ADVANCE(115);
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_isa);
      if (lookahead == ' ')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 's')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'u')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'b')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'c')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'l')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'a')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 's')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 's')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == ' ')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'o')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'f')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_isasubclassof);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'f')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'i')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'n')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'd')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == ' ')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'a')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 's')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_is_defined_as);
      END_STATE();
    case 125:
      if (lookahead == 'n')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'u')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'm')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'e')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'r')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'a')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'e')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'd')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == ' ')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'a')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 's')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_isenumeratedas);
      END_STATE();
    case 138:
      if (lookahead == '\'')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_isn_SQUOTEt);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'e')
        ADVANCE(142);
      if (lookahead == 'o')
        ADVANCE(148);
      END_STATE();
    case 142:
      if (lookahead == 'i')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 't')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'h')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'r')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_neither);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'f')
        ADVANCE(152);
      if (lookahead == 'n')
        ADVANCE(153);
      if (lookahead == 'r')
        ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == 'l')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'y')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'm')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'e')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 'a')
        ADVANCE(163);
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 163:
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 166:
      if (lookahead == ' ')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_the);
      if (lookahead == 'o')
        ADVANCE(168);
      if (lookahead == 's')
        ADVANCE(176);
      END_STATE();
    case 168:
      if (lookahead == 'n')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 't')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'o')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'l')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'o')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'g')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'y')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_theontology);
      END_STATE();
    case 176:
      if (lookahead == 'a')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'm')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'e')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == ' ')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'a')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 's')
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_thesameas);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'i')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(189);
      END_STATE();
    case 186:
      if (lookahead == 'c')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'h')
        ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_which);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_who);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      END_STATE();
    case 191:
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'F')
        ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      END_STATE();
    case 192:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(21);
      END_STATE();
    case 193:
      if (lookahead == 'e')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'a')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 't')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'u')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'r')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == ':')
        ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_Feature_COLON);
      END_STATE();
    case 201:
      if (lookahead == '\n')
        SKIP(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(202);
      if (lookahead != 0)
        ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_title);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(203);
      END_STATE();
    case 204:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(204);
      END_STATE();
    case 205:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'B')
        ADVANCE(206);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(205);
      END_STATE();
    case 206:
      if (lookahead == 'a')
        ADVANCE(26);
      END_STATE();
    case 207:
      if (lookahead == 'c')
        ADVANCE(42);
      END_STATE();
    case 208:
      if (lookahead == '\n')
        ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 210:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(210);
      END_STATE();
    case 211:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 212:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 213:
      if (lookahead == 'L')
        ADVANCE(214);
      if (lookahead == 'T')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      END_STATE();
    case 214:
      if (lookahead == 'a')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'n')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'g')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'u')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'a')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'g')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'e')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Language);
      END_STATE();
    case 222:
      if (lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 's')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 't')
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_Test);
      END_STATE();
    case 226:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'B')
        ADVANCE(25);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(226);
      ADVANCE(190);
      END_STATE();
    case 227:
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(227);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 228:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(228);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == ' ')
        ADVANCE(55);
      if (lookahead == 'n')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == ' ')
        ADVANCE(57);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'a')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 236:
      if (lookahead == 't')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(236);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'e')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == ' ')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'o')
        ADVANCE(168);
      END_STATE();
    case 241:
      if (lookahead == 'd')
        ADVANCE(242);
      if (lookahead == 'i')
        ADVANCE(247);
      if (lookahead == 't')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      END_STATE();
    case 242:
      if (lookahead == 'o')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'n')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == '\'')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 't')
        ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_don_SQUOTEt);
      END_STATE();
    case 247:
      if (lookahead == 'n')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'f')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'e')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'r')
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_infer);
      END_STATE();
    case 252:
      if (lookahead == 'h')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'e')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == ' ')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 's')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'c')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'e')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'n')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'a')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'r')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'i')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'o')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == ' ')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'i')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 's')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_thescenariois);
      END_STATE();
    case 267:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(267);
      END_STATE();
    case 268:
      if (lookahead == 'n')
        ADVANCE(23);
      END_STATE();
    case 269:
      if (lookahead == 'i')
        ADVANCE(37);
      END_STATE();
    case 270:
      if (lookahead == 'h')
        ADVANCE(51);
      END_STATE();
    case 271:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      END_STATE();
    case 272:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(273);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      END_STATE();
    case 273:
      if (lookahead == '\"')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == '\"')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 276:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(276);
      END_STATE();
    case 277:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(277);
      ADVANCE(190);
      END_STATE();
    case 278:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(278);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 279:
      if (lookahead == '\"')
        ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      END_STATE();
    case 280:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(280);
      END_STATE();
    case 281:
      if (lookahead == 'a')
        ADVANCE(282);
      if (lookahead == 'd')
        ADVANCE(80);
      if (lookahead == 'h')
        ADVANCE(92);
      if (lookahead == 'i')
        ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(281);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'd')
        ADVANCE(58);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 's')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(138);
      END_STATE();
    case 286:
      if (lookahead == 'a')
        ADVANCE(287);
      if (lookahead == 'd')
        ADVANCE(115);
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 287:
      if (lookahead == ' ')
        ADVANCE(103);
      END_STATE();
    case 288:
      if (lookahead == 'd')
        ADVANCE(289);
      if (lookahead == 'h')
        ADVANCE(290);
      if (lookahead == 'i')
        ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      END_STATE();
    case 289:
      if (lookahead == 'o')
        ADVANCE(81);
      END_STATE();
    case 290:
      if (lookahead == 'a')
        ADVANCE(93);
      END_STATE();
    case 291:
      if (lookahead == 's')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'n')
        ADVANCE(138);
      END_STATE();
    case 293:
      if (lookahead == 'c')
        ADVANCE(294);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      END_STATE();
    case 294:
      if (lookahead == 'o')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'n')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 's')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'i')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 's')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 't')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'e')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'n')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 't')
        ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_consistent);
      END_STATE();
    case 304:
      if (lookahead == 'n')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'c')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'o')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'n')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 's')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'i')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 's')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 't')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'e')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'n')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 't')
        ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_inconsistent);
      END_STATE();
    case 316:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(316);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 317:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(317);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 318:
      if (lookahead == 'i')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(318);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 's')
        ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 321:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(322);
      if (lookahead == 'i')
        ADVANCE(325);
      if (lookahead == 'n')
        ADVANCE(326);
      if (lookahead == 'o')
        ADVANCE(328);
      if (lookahead == 't')
        ADVANCE(329);
      if (lookahead == 'w')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(321);
      END_STATE();
    case 322:
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'r')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'e')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_are);
      if (lookahead == 'n')
        ADVANCE(77);
      END_STATE();
    case 325:
      if (lookahead == 's')
        ADVANCE(320);
      END_STATE();
    case 326:
      if (lookahead == 'o')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'r')
        ADVANCE(149);
      END_STATE();
    case 328:
      if (lookahead == 'r')
        ADVANCE(156);
      END_STATE();
    case 329:
      if (lookahead == 'h')
        ADVANCE(234);
      END_STATE();
    case 330:
      if (lookahead == 'h')
        ADVANCE(185);
      END_STATE();
    case 331:
      if (lookahead == 'i')
        ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 's')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == ' ')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'a')
        ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_isa);
      END_STATE();
    case 336:
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(336);
      END_STATE();
    case 337:
      if (lookahead == 's')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == ' ')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'a')
        ADVANCE(335);
      if (lookahead == 'd')
        ADVANCE(115);
      END_STATE();
    case 340:
      if (lookahead == 'a')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(340);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'r')
        ADVANCE(323);
      END_STATE();
    case 342:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(343);
      if (lookahead == 'i')
        ADVANCE(344);
      if (lookahead == 'n')
        ADVANCE(326);
      if (lookahead == 'o')
        ADVANCE(328);
      if (lookahead == 't')
        ADVANCE(329);
      if (lookahead == 'w')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(342);
      END_STATE();
    case 343:
      if (lookahead == 'n')
        ADVANCE(283);
      END_STATE();
    case 344:
      if (lookahead == 's')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == ' ')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'd')
        ADVANCE(115);
      END_STATE();
    case 347:
      if (lookahead == 'i')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(347);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 's')
        ADVANCE(345);
      END_STATE();
    case 349:
      if (lookahead == '\"')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(354);
      if (lookahead != 0)
        ADVANCE(354);
      END_STATE();
    case 350:
      if (lookahead == '\"')
        ADVANCE(351);
      if (lookahead != 0)
        ADVANCE(353);
      END_STATE();
    case 351:
      if (lookahead == '\"')
        ADVANCE(275);
      if (lookahead != 0)
        ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 355:
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'n')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(355);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'e')
        ADVANCE(142);
      if (lookahead == 'o')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 't')
        ADVANCE(150);
      END_STATE();
    case 358:
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'n')
        ADVANCE(356);
      if (lookahead == 't')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(358);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'e')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == ' ')
        ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_the);
      if (lookahead == 's')
        ADVANCE(176);
      END_STATE();
    case 363:
      if (lookahead == 'a')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      END_STATE();
    case 364:
      if (lookahead == 's')
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 366:
      if (lookahead == 'a')
        ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(366);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'r')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'e')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == ' ')
        ADVANCE(61);
      END_STATE();
    case 370:
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(370);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 371:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(343);
      if (lookahead == 'o')
        ADVANCE(328);
      if (lookahead == 't')
        ADVANCE(329);
      if (lookahead == 'w')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(371);
      END_STATE();
    case 372:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == 'o')
        ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(372);
      END_STATE();
    case 373:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(343);
      if (lookahead == 'n')
        ADVANCE(326);
      if (lookahead == 'o')
        ADVANCE(328);
      if (lookahead == 't')
        ADVANCE(329);
      if (lookahead == 'w')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(373);
      END_STATE();
    case 374:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(282);
      if (lookahead == 'o')
        ADVANCE(375);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead == 'w')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(374);
      ADVANCE(190);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'r')
        ADVANCE(156);
      END_STATE();
    case 376:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(376);
      END_STATE();
    case 377:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(377);
      ADVANCE(190);
      END_STATE();
    case 378:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(343);
      if (lookahead == 'i')
        ADVANCE(379);
      if (lookahead == 'o')
        ADVANCE(380);
      if (lookahead == 't')
        ADVANCE(382);
      if (lookahead == 'w')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(378);
      END_STATE();
    case 379:
      if (lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 380:
      if (lookahead == 'f')
        ADVANCE(152);
      if (lookahead == 'n')
        ADVANCE(381);
      if (lookahead == 'r')
        ADVANCE(156);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 382:
      if (lookahead == 'h')
        ADVANCE(383);
      if (lookahead == 'o')
        ADVANCE(183);
      END_STATE();
    case 383:
      if (lookahead == 'a')
        ADVANCE(163);
      END_STATE();
    case 384:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(282);
      if (lookahead == 'i')
        ADVANCE(385);
      if (lookahead == 'o')
        ADVANCE(386);
      if (lookahead == 't')
        ADVANCE(387);
      if (lookahead == 'w')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(384);
      ADVANCE(190);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'f')
        ADVANCE(152);
      if (lookahead == 'n')
        ADVANCE(381);
      if (lookahead == 'r')
        ADVANCE(156);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(383);
      if (lookahead == 'o')
        ADVANCE(183);
      END_STATE();
    case 388:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(388);
      ADVANCE(190);
      END_STATE();
    case 389:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(343);
      if (lookahead == 'o')
        ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(389);
      END_STATE();
    case 390:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'o')
        ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(390);
      ADVANCE(190);
      END_STATE();
    case 391:
      if (lookahead == 'n')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(391);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(327);
      END_STATE();
    case 393:
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'n')
        ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(393);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(357);
      END_STATE();
    case 395:
      if (lookahead == 'i')
        ADVANCE(385);
      if (lookahead == 'o')
        ADVANCE(396);
      if (lookahead == 't')
        ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(395);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'f')
        ADVANCE(152);
      if (lookahead == 'n')
        ADVANCE(381);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(398);
      if (lookahead == 'o')
        ADVANCE(183);
      END_STATE();
    case 398:
      if (lookahead == 'a')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'n')
        ADVANCE(164);
      END_STATE();
    case 400:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(268);
      if (lookahead == 'G')
        ADVANCE(269);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(400);
      END_STATE();
    case 401:
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'n')
        ADVANCE(356);
      if (lookahead == 't')
        ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(401);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 'e')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == ' ')
        ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 406:
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 't')
        ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(406);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 407:
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(407);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'l')
        ADVANCE(154);
      END_STATE();
    case 410:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == 'A')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'n')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(410);
      ADVANCE(190);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 191},
  [2] = {.lex_state = 201},
  [3] = {.lex_state = 204},
  [4] = {.lex_state = 205},
  [5] = {.lex_state = 191},
  [6] = {.lex_state = 208},
  [7] = {.lex_state = 201},
  [8] = {.lex_state = 210},
  [9] = {.lex_state = 211},
  [10] = {.lex_state = 211},
  [11] = {.lex_state = 205},
  [12] = {.lex_state = 201},
  [13] = {.lex_state = 191},
  [14] = {.lex_state = 212},
  [15] = {.lex_state = 208},
  [16] = {.lex_state = 213},
  [17] = {.lex_state = 210},
  [18] = {.lex_state = 210},
  [19] = {.lex_state = 211},
  [20] = {.lex_state = 211},
  [21] = {.lex_state = 201},
  [22] = {.lex_state = 205},
  [23] = {.lex_state = 208},
  [24] = {.lex_state = 205},
  [25] = {.lex_state = 226},
  [26] = {.lex_state = 212},
  [27] = {.lex_state = 227},
  [28] = {.lex_state = 228},
  [29] = {.lex_state = 236},
  [30] = {.lex_state = 213},
  [31] = {.lex_state = 210},
  [32] = {.lex_state = 210},
  [33] = {.lex_state = 208},
  [34] = {.lex_state = 212},
  [35] = {.lex_state = 226},
  [36] = {.lex_state = 227},
  [37] = {.lex_state = 227},
  [38] = {.lex_state = 228},
  [39] = {.lex_state = 241},
  [40] = {.lex_state = 211},
  [41] = {.lex_state = 267},
  [42] = {.lex_state = 267},
  [43] = {.lex_state = 271},
  [44] = {.lex_state = 272},
  [45] = {.lex_state = 276},
  [46] = {.lex_state = 212},
  [47] = {.lex_state = 210},
  [48] = {.lex_state = 277},
  [49] = {.lex_state = 227},
  [50] = {.lex_state = 205},
  [51] = {.lex_state = 213},
  [52] = {.lex_state = 227},
  [53] = {.lex_state = 227},
  [54] = {.lex_state = 278},
  [55] = {.lex_state = 212},
  [56] = {.lex_state = 212},
  [57] = {.lex_state = 212},
  [58] = {.lex_state = 212},
  [59] = {.lex_state = 279},
  [60] = {.lex_state = 280},
  [61] = {.lex_state = 280},
  [62] = {.lex_state = 280},
  [63] = {.lex_state = 280},
  [64] = {.lex_state = 280},
  [65] = {.lex_state = 281},
  [66] = {.lex_state = 281},
  [67] = {.lex_state = 288},
  [68] = {.lex_state = 281},
  [69] = {.lex_state = 281},
  [70] = {.lex_state = 293},
  [71] = {.lex_state = 241},
  [72] = {.lex_state = 316},
  [73] = {.lex_state = 280},
  [74] = {.lex_state = 317},
  [75] = {.lex_state = 228},
  [76] = {.lex_state = 267},
  [77] = {.lex_state = 241},
  [78] = {.lex_state = 267},
  [79] = {.lex_state = 271},
  [80] = {.lex_state = 210},
  [81] = {.lex_state = 277},
  [82] = {.lex_state = 211},
  [83] = {.lex_state = 280},
  [84] = {.lex_state = 318},
  [85] = {.lex_state = 321},
  [86] = {.lex_state = 318},
  [87] = {.lex_state = 331},
  [88] = {.lex_state = 336},
  [89] = {.lex_state = 331},
  [90] = {.lex_state = 340},
  [91] = {.lex_state = 340},
  [92] = {.lex_state = 342},
  [93] = {.lex_state = 347},
  [94] = {.lex_state = 349},
  [95] = {.lex_state = 267},
  [96] = {.lex_state = 355},
  [97] = {.lex_state = 212},
  [98] = {.lex_state = 355},
  [99] = {.lex_state = 358},
  [100] = {.lex_state = 212},
  [101] = {.lex_state = 363},
  [102] = {.lex_state = 212},
  [103] = {.lex_state = 212},
  [104] = {.lex_state = 212},
  [105] = {.lex_state = 366},
  [106] = {.lex_state = 281},
  [107] = {.lex_state = 280},
  [108] = {.lex_state = 280},
  [109] = {.lex_state = 316},
  [110] = {.lex_state = 317},
  [111] = {.lex_state = 267},
  [112] = {.lex_state = 280},
  [113] = {.lex_state = 280},
  [114] = {.lex_state = 278},
  [115] = {.lex_state = 280},
  [116] = {.lex_state = 267},
  [117] = {.lex_state = 280},
  [118] = {.lex_state = 267},
  [119] = {.lex_state = 267},
  [120] = {.lex_state = 355},
  [121] = {.lex_state = 318},
  [122] = {.lex_state = 355},
  [123] = {.lex_state = 331},
  [124] = {.lex_state = 355},
  [125] = {.lex_state = 340},
  [126] = {.lex_state = 347},
  [127] = {.lex_state = 279},
  [128] = {.lex_state = 349},
  [129] = {.lex_state = 212},
  [130] = {.lex_state = 370},
  [131] = {.lex_state = 370},
  [132] = {.lex_state = 280},
  [133] = {.lex_state = 371},
  [134] = {.lex_state = 372},
  [135] = {.lex_state = 280},
  [136] = {.lex_state = 373},
  [137] = {.lex_state = 374},
  [138] = {.lex_state = 376},
  [139] = {.lex_state = 376},
  [140] = {.lex_state = 377},
  [141] = {.lex_state = 280},
  [142] = {.lex_state = 212},
  [143] = {.lex_state = 212},
  [144] = {.lex_state = 212},
  [145] = {.lex_state = 280},
  [146] = {.lex_state = 378},
  [147] = {.lex_state = 378},
  [148] = {.lex_state = 384},
  [149] = {.lex_state = 212},
  [150] = {.lex_state = 280},
  [151] = {.lex_state = 388},
  [152] = {.lex_state = 212},
  [153] = {.lex_state = 212},
  [154] = {.lex_state = 212},
  [155] = {.lex_state = 366},
  [156] = {.lex_state = 366},
  [157] = {.lex_state = 280},
  [158] = {.lex_state = 280},
  [159] = {.lex_state = 366},
  [160] = {.lex_state = 317},
  [161] = {.lex_state = 280},
  [162] = {.lex_state = 267},
  [163] = {.lex_state = 267},
  [164] = {.lex_state = 280},
  [165] = {.lex_state = 280},
  [166] = {.lex_state = 280},
  [167] = {.lex_state = 280},
  [168] = {.lex_state = 349},
  [169] = {.lex_state = 212},
  [170] = {.lex_state = 389},
  [171] = {.lex_state = 390},
  [172] = {.lex_state = 212},
  [173] = {.lex_state = 391},
  [174] = {.lex_state = 391},
  [175] = {.lex_state = 288},
  [176] = {.lex_state = 393},
  [177] = {.lex_state = 371},
  [178] = {.lex_state = 376},
  [179] = {.lex_state = 393},
  [180] = {.lex_state = 372},
  [181] = {.lex_state = 374},
  [182] = {.lex_state = 212},
  [183] = {.lex_state = 376},
  [184] = {.lex_state = 377},
  [185] = {.lex_state = 280},
  [186] = {.lex_state = 378},
  [187] = {.lex_state = 378},
  [188] = {.lex_state = 395},
  [189] = {.lex_state = 212},
  [190] = {.lex_state = 212},
  [191] = {.lex_state = 384},
  [192] = {.lex_state = 388},
  [193] = {.lex_state = 212},
  [194] = {.lex_state = 366},
  [195] = {.lex_state = 267},
  [196] = {.lex_state = 390},
  [197] = {.lex_state = 370},
  [198] = {.lex_state = 400},
  [199] = {.lex_state = 391},
  [200] = {.lex_state = 401},
  [201] = {.lex_state = 406},
  [202] = {.lex_state = 280},
  [203] = {.lex_state = 407},
  [204] = {.lex_state = 212},
  [205] = {.lex_state = 212},
  [206] = {.lex_state = 370},
  [207] = {.lex_state = 389},
  [208] = {.lex_state = 376},
  [209] = {.lex_state = 288},
  [210] = {.lex_state = 376},
  [211] = {.lex_state = 372},
  [212] = {.lex_state = 372},
  [213] = {.lex_state = 376},
  [214] = {.lex_state = 376},
  [215] = {.lex_state = 212},
  [216] = {.lex_state = 395},
  [217] = {.lex_state = 212},
  [218] = {.lex_state = 400},
  [219] = {.lex_state = 410},
  [220] = {.lex_state = 400},
  [221] = {.lex_state = 212},
  [222] = {.lex_state = 212},
  [223] = {.lex_state = 280},
  [224] = {.lex_state = 378},
  [225] = {.lex_state = 355},
  [226] = {.lex_state = 355},
  [227] = {.lex_state = 407},
  [228] = {.lex_state = 407},
  [229] = {.lex_state = 407},
  [230] = {.lex_state = 280},
  [231] = {.lex_state = 410},
  [232] = {.lex_state = 378},
  [233] = {.lex_state = 407},
  [234] = {.lex_state = 407},
  [235] = {.lex_state = 280},
  [236] = {.lex_state = 407},
  [237] = {.lex_state = 407},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(3),
    [sym_tag] = ACTIONS(1),
    [anon_sym_PERCENTOWL] = ACTIONS(1),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(1),
    [anon_sym_theontology] = ACTIONS(1),
    [anon_sym_Scenario_COLON] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_isenumeratedas] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_every] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(3),
    [anon_sym_isasubclassof] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(3),
    [anon_sym_isa] = ACTIONS(3),
    [anon_sym_aredisjoint] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_are] = ACTIONS(3),
    [anon_sym_aren_SQUOTEt] = ACTIONS(1),
    [anon_sym_isn_SQUOTEt] = ACTIONS(1),
    [anon_sym_thesameas] = ACTIONS(1),
    [sym_are_different] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_an] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_neither] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_who] = ACTIONS(1),
    [anon_sym_which] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_the] = ACTIONS(3),
    [anon_sym_does] = ACTIONS(3),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(3),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_than] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(1),
    [sym_And] = ACTIONS(1),
    [sym_given] = ACTIONS(1),
    [sym_then] = ACTIONS(1),
    [sym_is_defined_as] = ACTIONS(1),
    [sym_star] = ACTIONS(1),
    [sym_BGround] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_feature] = STATE(4),
    [aux_sym_feature_repeat1] = STATE(5),
    [anon_sym_Feature_COLON] = ACTIONS(5),
    [sym_tag] = ACTIONS(7),
  },
  [2] = {
    [sym_title] = ACTIONS(9),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [4] = {
    [sym_background] = STATE(9),
    [sym_scenario] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_feature_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_tag] = ACTIONS(15),
    [anon_sym_Scenario_COLON] = ACTIONS(17),
    [sym_BGround] = ACTIONS(19),
  },
  [5] = {
    [aux_sym_feature_repeat1] = STATE(13),
    [anon_sym_Feature_COLON] = ACTIONS(21),
    [sym_tag] = ACTIONS(23),
  },
  [6] = {
    [anon_sym_LF] = ACTIONS(25),
  },
  [7] = {
    [sym_title] = ACTIONS(27),
  },
  [8] = {
    [sym_language_setting] = STATE(17),
    [sym_import] = STATE(18),
    [aux_sym_background_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_tag] = ACTIONS(29),
    [anon_sym_Scenario_COLON] = ACTIONS(29),
    [sym_star] = ACTIONS(31),
  },
  [9] = {
    [sym_scenario] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_feature_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_tag] = ACTIONS(15),
    [anon_sym_Scenario_COLON] = ACTIONS(17),
  },
  [10] = {
    [sym_scenario] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_feature_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_tag] = ACTIONS(15),
    [anon_sym_Scenario_COLON] = ACTIONS(17),
  },
  [11] = {
    [aux_sym_feature_repeat1] = STATE(22),
    [sym_tag] = ACTIONS(35),
    [anon_sym_Scenario_COLON] = ACTIONS(37),
  },
  [12] = {
    [sym_title] = ACTIONS(39),
  },
  [13] = {
    [aux_sym_feature_repeat1] = STATE(13),
    [anon_sym_Feature_COLON] = ACTIONS(41),
    [sym_tag] = ACTIONS(43),
  },
  [14] = {
    [sym_narrative] = STATE(24),
    [aux_sym_narrative_repeat1] = STATE(25),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(46),
  },
  [15] = {
    [sym_scenario_head] = STATE(27),
    [anon_sym_LF] = ACTIONS(48),
  },
  [16] = {
    [anon_sym_Language] = ACTIONS(50),
    [anon_sym_Test] = ACTIONS(52),
  },
  [17] = {
    [sym_import] = STATE(31),
    [aux_sym_background_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_tag] = ACTIONS(54),
    [anon_sym_Scenario_COLON] = ACTIONS(54),
    [sym_star] = ACTIONS(56),
  },
  [18] = {
    [sym_import] = STATE(32),
    [aux_sym_background_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_tag] = ACTIONS(54),
    [anon_sym_Scenario_COLON] = ACTIONS(54),
    [sym_star] = ACTIONS(56),
  },
  [19] = {
    [sym_scenario] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_feature_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_tag] = ACTIONS(15),
    [anon_sym_Scenario_COLON] = ACTIONS(17),
  },
  [20] = {
    [sym_scenario] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_feature_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_tag] = ACTIONS(62),
    [anon_sym_Scenario_COLON] = ACTIONS(65),
  },
  [21] = {
    [sym_title] = ACTIONS(68),
  },
  [22] = {
    [aux_sym_feature_repeat1] = STATE(22),
    [sym_tag] = ACTIONS(70),
    [anon_sym_Scenario_COLON] = ACTIONS(41),
  },
  [23] = {
    [anon_sym_LF] = ACTIONS(73),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_tag] = ACTIONS(75),
    [anon_sym_Scenario_COLON] = ACTIONS(75),
    [sym_BGround] = ACTIONS(75),
  },
  [25] = {
    [aux_sym_narrative_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(79),
    [sym_tag] = ACTIONS(77),
    [anon_sym_Scenario_COLON] = ACTIONS(77),
    [sym_BGround] = ACTIONS(77),
  },
  [26] = {
    [sym_narrative] = STATE(36),
    [aux_sym_narrative_repeat1] = STATE(37),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(81),
  },
  [27] = {
    [sym_scenario_body] = STATE(40),
    [sym_assumption_block] = STATE(43),
    [sym_assumption] = STATE(41),
    [sym_test_block] = STATE(43),
    [sym_test] = STATE(42),
    [aux_sym_scenario_body_repeat1] = STATE(43),
    [sym_given] = ACTIONS(83),
    [sym_then] = ACTIONS(85),
  },
  [28] = {
    [sym_language_ID] = STATE(45),
    [anon_sym_PERCENTOWL] = ACTIONS(87),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(87),
  },
  [29] = {
    [sym_uriref] = STATE(47),
    [aux_sym_narrative_repeat1] = STATE(48),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(89),
    [anon_sym_theontology] = ACTIONS(91),
  },
  [30] = {
    [anon_sym_Test] = ACTIONS(52),
  },
  [31] = {
    [sym_import] = STATE(32),
    [aux_sym_background_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_tag] = ACTIONS(93),
    [anon_sym_Scenario_COLON] = ACTIONS(93),
    [sym_star] = ACTIONS(56),
  },
  [32] = {
    [sym_import] = STATE(32),
    [aux_sym_background_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_tag] = ACTIONS(95),
    [anon_sym_Scenario_COLON] = ACTIONS(95),
    [sym_star] = ACTIONS(97),
  },
  [33] = {
    [sym_scenario_head] = STATE(49),
    [anon_sym_LF] = ACTIONS(48),
  },
  [34] = {
    [sym_narrative] = STATE(50),
    [aux_sym_narrative_repeat1] = STATE(25),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(46),
  },
  [35] = {
    [aux_sym_narrative_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(102),
    [sym_tag] = ACTIONS(100),
    [anon_sym_Scenario_COLON] = ACTIONS(100),
    [sym_BGround] = ACTIONS(100),
  },
  [36] = {
    [sym_language_setting] = STATE(52),
    [sym_given] = ACTIONS(105),
    [sym_then] = ACTIONS(105),
    [sym_star] = ACTIONS(107),
  },
  [37] = {
    [aux_sym_narrative_repeat1] = STATE(53),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(109),
    [sym_given] = ACTIONS(77),
    [sym_then] = ACTIONS(77),
    [sym_star] = ACTIONS(77),
  },
  [38] = {
    [sym_language_ID] = STATE(59),
    [sym_sentence] = STATE(60),
    [sym_definition] = STATE(61),
    [sym_proposition] = STATE(61),
    [sym_universal] = STATE(62),
    [sym_universal_positve] = STATE(63),
    [sym_universal_negative] = STATE(63),
    [sym_particular] = STATE(62),
    [sym_fact] = STATE(61),
    [sym_instance] = STATE(64),
    [sym_relation] = STATE(64),
    [sym_equation] = STATE(64),
    [sym_different] = STATE(64),
    [sym_source] = STATE(61),
    [sym_pos_class] = STATE(65),
    [sym_class_name] = STATE(66),
    [sym_indiv_name] = STATE(67),
    [sym_qname] = STATE(68),
    [aux_sym_narrative_repeat1] = STATE(69),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(111),
    [anon_sym_PERCENTOWL] = ACTIONS(87),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(87),
    [anon_sym_that] = ACTIONS(113),
    [anon_sym_every] = ACTIONS(115),
    [anon_sym_no] = ACTIONS(117),
    [anon_sym_some] = ACTIONS(119),
    [anon_sym_a] = ACTIONS(121),
    [anon_sym_an] = ACTIONS(121),
  },
  [39] = {
    [sym_inference_test] = STATE(73),
    [sym_consistency_test] = STATE(73),
    [sym_infer_start] = STATE(74),
    [anon_sym_thescenariois] = ACTIONS(123),
    [anon_sym_don_SQUOTEt] = ACTIONS(125),
    [anon_sym_infer] = ACTIONS(127),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_tag] = ACTIONS(129),
    [anon_sym_Scenario_COLON] = ACTIONS(129),
  },
  [41] = {
    [sym_further_assumption] = STATE(76),
    [aux_sym_assumption_block_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_tag] = ACTIONS(131),
    [anon_sym_Scenario_COLON] = ACTIONS(131),
    [sym_And] = ACTIONS(133),
    [sym_given] = ACTIONS(131),
    [sym_then] = ACTIONS(131),
  },
  [42] = {
    [sym_further_test] = STATE(78),
    [aux_sym_test_block_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_tag] = ACTIONS(135),
    [anon_sym_Scenario_COLON] = ACTIONS(135),
    [sym_And] = ACTIONS(137),
    [sym_given] = ACTIONS(135),
    [sym_then] = ACTIONS(135),
  },
  [43] = {
    [sym_assumption_block] = STATE(79),
    [sym_assumption] = STATE(41),
    [sym_test_block] = STATE(79),
    [sym_test] = STATE(42),
    [aux_sym_scenario_body_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_tag] = ACTIONS(139),
    [anon_sym_Scenario_COLON] = ACTIONS(139),
    [sym_given] = ACTIONS(83),
    [sym_then] = ACTIONS(85),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_tag] = ACTIONS(141),
    [anon_sym_Scenario_COLON] = ACTIONS(141),
    [sym_delimiter] = ACTIONS(141),
    [sym_given] = ACTIONS(141),
    [sym_then] = ACTIONS(141),
    [sym_star] = ACTIONS(141),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_tag] = ACTIONS(143),
    [anon_sym_Scenario_COLON] = ACTIONS(143),
    [sym_given] = ACTIONS(143),
    [sym_then] = ACTIONS(143),
    [sym_star] = ACTIONS(143),
  },
  [46] = {
    [sym_uriref] = STATE(80),
    [aux_sym_narrative_repeat1] = STATE(48),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(145),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_tag] = ACTIONS(147),
    [anon_sym_Scenario_COLON] = ACTIONS(147),
    [sym_star] = ACTIONS(147),
  },
  [48] = {
    [aux_sym_narrative_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(151),
    [sym_tag] = ACTIONS(149),
    [anon_sym_Scenario_COLON] = ACTIONS(149),
    [sym_star] = ACTIONS(149),
  },
  [49] = {
    [sym_scenario_body] = STATE(82),
    [sym_assumption_block] = STATE(43),
    [sym_assumption] = STATE(41),
    [sym_test_block] = STATE(43),
    [sym_test] = STATE(42),
    [aux_sym_scenario_body_repeat1] = STATE(43),
    [sym_given] = ACTIONS(83),
    [sym_then] = ACTIONS(85),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_tag] = ACTIONS(153),
    [anon_sym_Scenario_COLON] = ACTIONS(153),
    [sym_BGround] = ACTIONS(153),
  },
  [51] = {
    [anon_sym_Language] = ACTIONS(50),
  },
  [52] = {
    [sym_given] = ACTIONS(155),
    [sym_then] = ACTIONS(155),
  },
  [53] = {
    [aux_sym_narrative_repeat1] = STATE(53),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(157),
    [sym_given] = ACTIONS(100),
    [sym_then] = ACTIONS(100),
    [sym_star] = ACTIONS(100),
  },
  [54] = {
    [sym_language_ID] = STATE(59),
    [sym_sentence] = STATE(83),
    [sym_definition] = STATE(61),
    [sym_proposition] = STATE(61),
    [sym_universal] = STATE(62),
    [sym_universal_positve] = STATE(63),
    [sym_universal_negative] = STATE(63),
    [sym_particular] = STATE(62),
    [sym_fact] = STATE(61),
    [sym_instance] = STATE(64),
    [sym_relation] = STATE(64),
    [sym_equation] = STATE(64),
    [sym_different] = STATE(64),
    [sym_source] = STATE(61),
    [sym_pos_class] = STATE(65),
    [sym_class_name] = STATE(66),
    [sym_indiv_name] = STATE(67),
    [sym_qname] = STATE(68),
    [aux_sym_narrative_repeat1] = STATE(69),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(111),
    [anon_sym_PERCENTOWL] = ACTIONS(87),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(87),
    [anon_sym_every] = ACTIONS(115),
    [anon_sym_no] = ACTIONS(117),
    [anon_sym_some] = ACTIONS(119),
    [anon_sym_a] = ACTIONS(121),
    [anon_sym_an] = ACTIONS(121),
  },
  [55] = {
    [sym_class_name] = STATE(84),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(86),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(160),
  },
  [56] = {
    [sym_class_name] = STATE(87),
    [sym_qname] = STATE(88),
    [aux_sym_narrative_repeat1] = STATE(89),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(162),
  },
  [57] = {
    [sym_class_name] = STATE(90),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(91),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(164),
  },
  [58] = {
    [sym_class_name] = STATE(92),
    [sym_qname] = STATE(88),
    [aux_sym_narrative_repeat1] = STATE(93),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(166),
  },
  [59] = {
    [sym_delimiter] = ACTIONS(168),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_tag] = ACTIONS(170),
    [anon_sym_Scenario_COLON] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(172),
    [sym_And] = ACTIONS(170),
    [sym_given] = ACTIONS(170),
    [sym_then] = ACTIONS(170),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_tag] = ACTIONS(174),
    [anon_sym_Scenario_COLON] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [sym_And] = ACTIONS(174),
    [sym_given] = ACTIONS(174),
    [sym_then] = ACTIONS(174),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_tag] = ACTIONS(176),
    [anon_sym_Scenario_COLON] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(176),
    [sym_And] = ACTIONS(176),
    [sym_given] = ACTIONS(176),
    [sym_then] = ACTIONS(176),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [sym_tag] = ACTIONS(178),
    [anon_sym_Scenario_COLON] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [sym_And] = ACTIONS(178),
    [sym_given] = ACTIONS(178),
    [sym_then] = ACTIONS(178),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [sym_And] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [65] = {
    [sym_is_defined_as] = ACTIONS(182),
  },
  [66] = {
    [anon_sym_isenumeratedas] = ACTIONS(184),
    [anon_sym_isasubclassof] = ACTIONS(186),
    [sym_is_defined_as] = ACTIONS(188),
  },
  [67] = {
    [sym_predicate_phrase] = STATE(102),
    [sym_predicate_open] = STATE(103),
    [anon_sym_is] = ACTIONS(190),
    [anon_sym_isn_SQUOTEt] = ACTIONS(192),
    [anon_sym_does] = ACTIONS(194),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(196),
    [anon_sym_has] = ACTIONS(198),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(200),
  },
  [68] = {
    [aux_sym_universal_negative_repeat1] = STATE(105),
    [anon_sym_isenumeratedas] = ACTIONS(202),
    [anon_sym_and] = ACTIONS(204),
    [anon_sym_is] = ACTIONS(206),
    [anon_sym_isasubclassof] = ACTIONS(202),
    [anon_sym_isn_SQUOTEt] = ACTIONS(208),
    [anon_sym_does] = ACTIONS(206),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(208),
    [anon_sym_has] = ACTIONS(206),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(208),
    [sym_is_defined_as] = ACTIONS(202),
  },
  [69] = {
    [aux_sym_narrative_repeat1] = STATE(106),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(210),
    [anon_sym_isenumeratedas] = ACTIONS(212),
    [anon_sym_and] = ACTIONS(212),
    [anon_sym_is] = ACTIONS(214),
    [anon_sym_isasubclassof] = ACTIONS(212),
    [anon_sym_isn_SQUOTEt] = ACTIONS(212),
    [anon_sym_does] = ACTIONS(214),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(212),
    [anon_sym_has] = ACTIONS(214),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(212),
    [sym_is_defined_as] = ACTIONS(212),
  },
  [70] = {
    [sym_consistency] = STATE(108),
    [anon_sym_consistent] = ACTIONS(216),
    [anon_sym_inconsistent] = ACTIONS(216),
  },
  [71] = {
    [anon_sym_infer] = ACTIONS(218),
  },
  [72] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(220),
    [anon_sym_PERCENTOWL] = ACTIONS(222),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(222),
    [anon_sym_that] = ACTIONS(224),
    [anon_sym_every] = ACTIONS(222),
    [anon_sym_no] = ACTIONS(222),
    [anon_sym_a] = ACTIONS(222),
    [anon_sym_an] = ACTIONS(222),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_tag] = ACTIONS(226),
    [anon_sym_Scenario_COLON] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(228),
    [sym_And] = ACTIONS(226),
    [sym_given] = ACTIONS(226),
    [sym_then] = ACTIONS(226),
  },
  [74] = {
    [sym_language_ID] = STATE(59),
    [sym_infer_sentence] = STATE(112),
    [sym_definition] = STATE(113),
    [sym_universal] = STATE(113),
    [sym_universal_positve] = STATE(63),
    [sym_universal_negative] = STATE(63),
    [sym_fact] = STATE(113),
    [sym_instance] = STATE(64),
    [sym_relation] = STATE(64),
    [sym_equation] = STATE(64),
    [sym_different] = STATE(64),
    [sym_source] = STATE(113),
    [sym_pos_class] = STATE(65),
    [sym_class_name] = STATE(66),
    [sym_indiv_name] = STATE(67),
    [sym_qname] = STATE(68),
    [aux_sym_narrative_repeat1] = STATE(69),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(111),
    [anon_sym_PERCENTOWL] = ACTIONS(87),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(87),
    [anon_sym_every] = ACTIONS(115),
    [anon_sym_no] = ACTIONS(117),
    [anon_sym_a] = ACTIONS(121),
    [anon_sym_an] = ACTIONS(121),
  },
  [75] = {
    [sym_language_ID] = STATE(59),
    [sym_sentence] = STATE(115),
    [sym_definition] = STATE(61),
    [sym_proposition] = STATE(61),
    [sym_universal] = STATE(62),
    [sym_universal_positve] = STATE(63),
    [sym_universal_negative] = STATE(63),
    [sym_particular] = STATE(62),
    [sym_fact] = STATE(61),
    [sym_instance] = STATE(64),
    [sym_relation] = STATE(64),
    [sym_equation] = STATE(64),
    [sym_different] = STATE(64),
    [sym_source] = STATE(61),
    [sym_pos_class] = STATE(65),
    [sym_class_name] = STATE(66),
    [sym_indiv_name] = STATE(67),
    [sym_qname] = STATE(68),
    [aux_sym_narrative_repeat1] = STATE(69),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(111),
    [anon_sym_PERCENTOWL] = ACTIONS(87),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(87),
    [anon_sym_that] = ACTIONS(230),
    [anon_sym_every] = ACTIONS(115),
    [anon_sym_no] = ACTIONS(117),
    [anon_sym_some] = ACTIONS(119),
    [anon_sym_a] = ACTIONS(121),
    [anon_sym_an] = ACTIONS(121),
  },
  [76] = {
    [sym_further_assumption] = STATE(116),
    [aux_sym_assumption_block_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_tag] = ACTIONS(232),
    [anon_sym_Scenario_COLON] = ACTIONS(232),
    [sym_And] = ACTIONS(133),
    [sym_given] = ACTIONS(232),
    [sym_then] = ACTIONS(232),
  },
  [77] = {
    [sym_inference_test] = STATE(117),
    [sym_consistency_test] = STATE(117),
    [sym_infer_start] = STATE(74),
    [anon_sym_thescenariois] = ACTIONS(123),
    [anon_sym_don_SQUOTEt] = ACTIONS(125),
    [anon_sym_infer] = ACTIONS(127),
  },
  [78] = {
    [sym_further_test] = STATE(118),
    [aux_sym_test_block_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym_tag] = ACTIONS(234),
    [anon_sym_Scenario_COLON] = ACTIONS(234),
    [sym_And] = ACTIONS(137),
    [sym_given] = ACTIONS(234),
    [sym_then] = ACTIONS(234),
  },
  [79] = {
    [sym_assumption_block] = STATE(79),
    [sym_assumption] = STATE(41),
    [sym_test_block] = STATE(79),
    [sym_test] = STATE(42),
    [aux_sym_scenario_body_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_tag] = ACTIONS(236),
    [anon_sym_Scenario_COLON] = ACTIONS(236),
    [sym_given] = ACTIONS(238),
    [sym_then] = ACTIONS(241),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym_tag] = ACTIONS(244),
    [anon_sym_Scenario_COLON] = ACTIONS(244),
    [sym_star] = ACTIONS(244),
  },
  [81] = {
    [aux_sym_narrative_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(246),
    [sym_tag] = ACTIONS(100),
    [anon_sym_Scenario_COLON] = ACTIONS(100),
    [sym_star] = ACTIONS(100),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_tag] = ACTIONS(249),
    [anon_sym_Scenario_COLON] = ACTIONS(249),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_tag] = ACTIONS(251),
    [anon_sym_Scenario_COLON] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [sym_And] = ACTIONS(251),
    [sym_given] = ACTIONS(251),
    [sym_then] = ACTIONS(251),
  },
  [84] = {
    [anon_sym_is] = ACTIONS(255),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_tag] = ACTIONS(202),
    [anon_sym_Scenario_COLON] = ACTIONS(202),
    [anon_sym_that] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_and] = ACTIONS(202),
    [anon_sym_is] = ACTIONS(202),
    [anon_sym_are] = ACTIONS(257),
    [anon_sym_aren_SQUOTEt] = ACTIONS(202),
    [anon_sym_nor] = ACTIONS(202),
    [anon_sym_or] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_who] = ACTIONS(202),
    [anon_sym_which] = ACTIONS(202),
    [sym_And] = ACTIONS(202),
    [sym_given] = ACTIONS(202),
    [sym_then] = ACTIONS(202),
  },
  [86] = {
    [aux_sym_narrative_repeat1] = STATE(121),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(259),
    [anon_sym_is] = ACTIONS(212),
  },
  [87] = {
    [anon_sym_isa] = ACTIONS(261),
  },
  [88] = {
    [anon_sym_isa] = ACTIONS(202),
    [sym_is_defined_as] = ACTIONS(202),
  },
  [89] = {
    [aux_sym_narrative_repeat1] = STATE(123),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(263),
    [anon_sym_isa] = ACTIONS(212),
  },
  [90] = {
    [anon_sym_are] = ACTIONS(265),
    [anon_sym_aren_SQUOTEt] = ACTIONS(267),
  },
  [91] = {
    [aux_sym_narrative_repeat1] = STATE(125),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(269),
    [anon_sym_are] = ACTIONS(214),
    [anon_sym_aren_SQUOTEt] = ACTIONS(212),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [sym_tag] = ACTIONS(271),
    [anon_sym_Scenario_COLON] = ACTIONS(271),
    [anon_sym_that] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [anon_sym_and] = ACTIONS(271),
    [anon_sym_nor] = ACTIONS(271),
    [anon_sym_or] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_who] = ACTIONS(271),
    [anon_sym_which] = ACTIONS(271),
    [sym_And] = ACTIONS(271),
    [sym_given] = ACTIONS(271),
    [sym_then] = ACTIONS(271),
    [sym_is_defined_as] = ACTIONS(271),
  },
  [93] = {
    [aux_sym_narrative_repeat1] = STATE(126),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(273),
    [sym_is_defined_as] = ACTIONS(212),
  },
  [94] = {
    [sym_source_body] = STATE(127),
    [aux_sym_source_body_repeat1] = STATE(128),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(277),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_tag] = ACTIONS(251),
    [anon_sym_Scenario_COLON] = ACTIONS(251),
    [sym_And] = ACTIONS(251),
    [sym_given] = ACTIONS(251),
    [sym_then] = ACTIONS(251),
  },
  [96] = {
    [sym_class_expression] = STATE(132),
    [sym_pos_class] = STATE(133),
    [sym_class_atom] = STATE(134),
    [sym_conjunction] = STATE(135),
    [sym_disjunction] = STATE(135),
    [sym_qualified_class] = STATE(135),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(279),
    [anon_sym_a] = ACTIONS(281),
    [anon_sym_an] = ACTIONS(281),
    [anon_sym_not] = ACTIONS(283),
    [anon_sym_neither] = ACTIONS(285),
  },
  [97] = {
    [sym_indiv_name] = STATE(138),
    [sym_qname] = STATE(139),
    [aux_sym_narrative_repeat1] = STATE(140),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(287),
  },
  [98] = {
    [sym_class_expression] = STATE(141),
    [sym_pos_class] = STATE(133),
    [sym_class_atom] = STATE(134),
    [sym_conjunction] = STATE(135),
    [sym_disjunction] = STATE(135),
    [sym_qualified_class] = STATE(135),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(279),
    [anon_sym_a] = ACTIONS(281),
    [anon_sym_an] = ACTIONS(281),
    [anon_sym_not] = ACTIONS(283),
    [anon_sym_neither] = ACTIONS(285),
  },
  [99] = {
    [sym_class_expression] = STATE(145),
    [sym_pos_class] = STATE(133),
    [sym_class_atom] = STATE(134),
    [sym_conjunction] = STATE(135),
    [sym_disjunction] = STATE(135),
    [sym_qualified_class] = STATE(135),
    [sym_class_name] = STATE(136),
    [sym_predicate_fragement] = STATE(146),
    [sym_qname] = STATE(147),
    [aux_sym_narrative_repeat1] = STATE(148),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(289),
    [anon_sym_thesameas] = ACTIONS(291),
    [anon_sym_a] = ACTIONS(293),
    [anon_sym_an] = ACTIONS(293),
    [anon_sym_not] = ACTIONS(283),
    [anon_sym_neither] = ACTIONS(285),
    [anon_sym_the] = ACTIONS(295),
  },
  [100] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(297),
  },
  [101] = {
    [anon_sym_as] = ACTIONS(299),
  },
  [102] = {
    [sym_indiv_name] = STATE(150),
    [sym_qname] = STATE(139),
    [aux_sym_narrative_repeat1] = STATE(151),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(301),
  },
  [103] = {
    [sym_predicate_name] = STATE(152),
    [sym_qname] = STATE(153),
    [aux_sym_narrative_repeat1] = STATE(154),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(303),
  },
  [104] = {
    [sym_qname] = STATE(155),
    [aux_sym_narrative_repeat1] = STATE(156),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(305),
  },
  [105] = {
    [aux_sym_universal_negative_repeat1] = STATE(159),
    [anon_sym_and] = ACTIONS(204),
    [anon_sym_aredisjoint] = ACTIONS(307),
    [sym_are_different] = ACTIONS(309),
  },
  [106] = {
    [aux_sym_narrative_repeat1] = STATE(106),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(311),
    [anon_sym_isenumeratedas] = ACTIONS(100),
    [anon_sym_and] = ACTIONS(100),
    [anon_sym_is] = ACTIONS(314),
    [anon_sym_isasubclassof] = ACTIONS(100),
    [anon_sym_isn_SQUOTEt] = ACTIONS(100),
    [anon_sym_does] = ACTIONS(314),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(100),
    [anon_sym_has] = ACTIONS(314),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(100),
    [sym_is_defined_as] = ACTIONS(100),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [sym_tag] = ACTIONS(316),
    [anon_sym_Scenario_COLON] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(316),
    [sym_And] = ACTIONS(316),
    [sym_given] = ACTIONS(316),
    [sym_then] = ACTIONS(316),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [sym_tag] = ACTIONS(318),
    [anon_sym_Scenario_COLON] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(318),
    [sym_And] = ACTIONS(318),
    [sym_given] = ACTIONS(318),
    [sym_then] = ACTIONS(318),
  },
  [109] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(320),
    [anon_sym_PERCENTOWL] = ACTIONS(322),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(322),
    [anon_sym_that] = ACTIONS(324),
    [anon_sym_every] = ACTIONS(322),
    [anon_sym_no] = ACTIONS(322),
    [anon_sym_a] = ACTIONS(322),
    [anon_sym_an] = ACTIONS(322),
  },
  [110] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(320),
    [anon_sym_PERCENTOWL] = ACTIONS(322),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(322),
    [anon_sym_every] = ACTIONS(322),
    [anon_sym_no] = ACTIONS(322),
    [anon_sym_a] = ACTIONS(322),
    [anon_sym_an] = ACTIONS(322),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym_tag] = ACTIONS(326),
    [anon_sym_Scenario_COLON] = ACTIONS(326),
    [sym_And] = ACTIONS(326),
    [sym_given] = ACTIONS(326),
    [sym_then] = ACTIONS(326),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [sym_tag] = ACTIONS(328),
    [anon_sym_Scenario_COLON] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(328),
    [sym_And] = ACTIONS(328),
    [sym_given] = ACTIONS(328),
    [sym_then] = ACTIONS(328),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [sym_tag] = ACTIONS(330),
    [anon_sym_Scenario_COLON] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [sym_And] = ACTIONS(330),
    [sym_given] = ACTIONS(330),
    [sym_then] = ACTIONS(330),
  },
  [114] = {
    [sym_language_ID] = STATE(59),
    [sym_sentence] = STATE(161),
    [sym_definition] = STATE(61),
    [sym_proposition] = STATE(61),
    [sym_universal] = STATE(62),
    [sym_universal_positve] = STATE(63),
    [sym_universal_negative] = STATE(63),
    [sym_particular] = STATE(62),
    [sym_fact] = STATE(61),
    [sym_instance] = STATE(64),
    [sym_relation] = STATE(64),
    [sym_equation] = STATE(64),
    [sym_different] = STATE(64),
    [sym_source] = STATE(61),
    [sym_pos_class] = STATE(65),
    [sym_class_name] = STATE(66),
    [sym_indiv_name] = STATE(67),
    [sym_qname] = STATE(68),
    [aux_sym_narrative_repeat1] = STATE(69),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(111),
    [anon_sym_PERCENTOWL] = ACTIONS(87),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(87),
    [anon_sym_every] = ACTIONS(115),
    [anon_sym_no] = ACTIONS(117),
    [anon_sym_some] = ACTIONS(119),
    [anon_sym_a] = ACTIONS(121),
    [anon_sym_an] = ACTIONS(121),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [sym_tag] = ACTIONS(332),
    [anon_sym_Scenario_COLON] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(334),
    [sym_And] = ACTIONS(332),
    [sym_given] = ACTIONS(332),
    [sym_then] = ACTIONS(332),
  },
  [116] = {
    [sym_further_assumption] = STATE(116),
    [aux_sym_assumption_block_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym_tag] = ACTIONS(336),
    [anon_sym_Scenario_COLON] = ACTIONS(336),
    [sym_And] = ACTIONS(338),
    [sym_given] = ACTIONS(336),
    [sym_then] = ACTIONS(336),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [sym_tag] = ACTIONS(341),
    [anon_sym_Scenario_COLON] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_And] = ACTIONS(341),
    [sym_given] = ACTIONS(341),
    [sym_then] = ACTIONS(341),
  },
  [118] = {
    [sym_further_test] = STATE(118),
    [aux_sym_test_block_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(345),
    [sym_tag] = ACTIONS(345),
    [anon_sym_Scenario_COLON] = ACTIONS(345),
    [sym_And] = ACTIONS(347),
    [sym_given] = ACTIONS(345),
    [sym_then] = ACTIONS(345),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_tag] = ACTIONS(350),
    [anon_sym_Scenario_COLON] = ACTIONS(350),
    [sym_And] = ACTIONS(350),
    [sym_given] = ACTIONS(350),
    [sym_then] = ACTIONS(350),
  },
  [120] = {
    [sym_class_expression] = STATE(164),
    [sym_pos_class] = STATE(133),
    [sym_class_atom] = STATE(134),
    [sym_conjunction] = STATE(135),
    [sym_disjunction] = STATE(135),
    [sym_qualified_class] = STATE(135),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(279),
    [anon_sym_a] = ACTIONS(281),
    [anon_sym_an] = ACTIONS(281),
    [anon_sym_not] = ACTIONS(283),
    [anon_sym_neither] = ACTIONS(285),
  },
  [121] = {
    [aux_sym_narrative_repeat1] = STATE(121),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(352),
    [anon_sym_is] = ACTIONS(100),
  },
  [122] = {
    [sym_class_expression] = STATE(165),
    [sym_pos_class] = STATE(133),
    [sym_class_atom] = STATE(134),
    [sym_conjunction] = STATE(135),
    [sym_disjunction] = STATE(135),
    [sym_qualified_class] = STATE(135),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(279),
    [anon_sym_a] = ACTIONS(281),
    [anon_sym_an] = ACTIONS(281),
    [anon_sym_not] = ACTIONS(283),
    [anon_sym_neither] = ACTIONS(285),
  },
  [123] = {
    [aux_sym_narrative_repeat1] = STATE(123),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(355),
    [anon_sym_isa] = ACTIONS(100),
  },
  [124] = {
    [sym_class_expression] = STATE(166),
    [sym_pos_class] = STATE(133),
    [sym_class_atom] = STATE(134),
    [sym_conjunction] = STATE(135),
    [sym_disjunction] = STATE(135),
    [sym_qualified_class] = STATE(135),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(279),
    [anon_sym_a] = ACTIONS(281),
    [anon_sym_an] = ACTIONS(281),
    [anon_sym_not] = ACTIONS(283),
    [anon_sym_neither] = ACTIONS(285),
  },
  [125] = {
    [aux_sym_narrative_repeat1] = STATE(125),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(358),
    [anon_sym_are] = ACTIONS(314),
    [anon_sym_aren_SQUOTEt] = ACTIONS(100),
  },
  [126] = {
    [aux_sym_narrative_repeat1] = STATE(126),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(361),
    [sym_is_defined_as] = ACTIONS(100),
  },
  [127] = {
    [sym_delimiter] = ACTIONS(364),
  },
  [128] = {
    [aux_sym_source_body_repeat1] = STATE(168),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(368),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(368),
    [sym_delimiter] = ACTIONS(370),
  },
  [129] = {
    [sym_class_name] = STATE(92),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(372),
  },
  [130] = {
    [sym_pos_class] = STATE(170),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(171),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(374),
    [anon_sym_a] = ACTIONS(376),
    [anon_sym_an] = ACTIONS(376),
  },
  [131] = {
    [sym_pos_class] = STATE(173),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(174),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(378),
    [anon_sym_a] = ACTIONS(380),
    [anon_sym_an] = ACTIONS(380),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [sym_tag] = ACTIONS(382),
    [anon_sym_Scenario_COLON] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(382),
    [sym_And] = ACTIONS(382),
    [sym_given] = ACTIONS(382),
    [sym_then] = ACTIONS(382),
  },
  [133] = {
    [aux_sym_conjunction_repeat1] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(384),
    [sym_tag] = ACTIONS(384),
    [anon_sym_Scenario_COLON] = ACTIONS(384),
    [anon_sym_that] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_and] = ACTIONS(388),
    [anon_sym_or] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_who] = ACTIONS(386),
    [anon_sym_which] = ACTIONS(386),
    [sym_And] = ACTIONS(384),
    [sym_given] = ACTIONS(384),
    [sym_then] = ACTIONS(384),
  },
  [134] = {
    [aux_sym_disjunction_repeat1] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(392),
    [sym_tag] = ACTIONS(392),
    [anon_sym_Scenario_COLON] = ACTIONS(392),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_or] = ACTIONS(394),
    [sym_And] = ACTIONS(392),
    [sym_given] = ACTIONS(392),
    [sym_then] = ACTIONS(392),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [sym_tag] = ACTIONS(392),
    [anon_sym_Scenario_COLON] = ACTIONS(392),
    [anon_sym_DOT] = ACTIONS(392),
    [sym_And] = ACTIONS(392),
    [sym_given] = ACTIONS(392),
    [sym_then] = ACTIONS(392),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_tag] = ACTIONS(188),
    [anon_sym_Scenario_COLON] = ACTIONS(188),
    [anon_sym_that] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(188),
    [anon_sym_and] = ACTIONS(188),
    [anon_sym_nor] = ACTIONS(188),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_who] = ACTIONS(188),
    [anon_sym_which] = ACTIONS(188),
    [sym_And] = ACTIONS(188),
    [sym_given] = ACTIONS(188),
    [sym_then] = ACTIONS(188),
  },
  [137] = {
    [aux_sym_narrative_repeat1] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(396),
    [sym_tag] = ACTIONS(212),
    [anon_sym_Scenario_COLON] = ACTIONS(212),
    [anon_sym_that] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_and] = ACTIONS(212),
    [anon_sym_or] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_who] = ACTIONS(212),
    [anon_sym_which] = ACTIONS(212),
    [sym_And] = ACTIONS(212),
    [sym_given] = ACTIONS(212),
    [sym_then] = ACTIONS(212),
  },
  [138] = {
    [aux_sym_definition_repeat1] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(382),
    [sym_tag] = ACTIONS(382),
    [anon_sym_Scenario_COLON] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(382),
    [anon_sym_and] = ACTIONS(398),
    [sym_And] = ACTIONS(382),
    [sym_given] = ACTIONS(382),
    [sym_then] = ACTIONS(382),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_tag] = ACTIONS(208),
    [anon_sym_Scenario_COLON] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_and] = ACTIONS(208),
    [sym_And] = ACTIONS(208),
    [sym_given] = ACTIONS(208),
    [sym_then] = ACTIONS(208),
  },
  [140] = {
    [aux_sym_narrative_repeat1] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(400),
    [sym_tag] = ACTIONS(212),
    [anon_sym_Scenario_COLON] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_and] = ACTIONS(212),
    [sym_And] = ACTIONS(212),
    [sym_given] = ACTIONS(212),
    [sym_then] = ACTIONS(212),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [sym_tag] = ACTIONS(402),
    [anon_sym_Scenario_COLON] = ACTIONS(402),
    [anon_sym_DOT] = ACTIONS(402),
    [sym_And] = ACTIONS(402),
    [sym_given] = ACTIONS(402),
    [sym_then] = ACTIONS(402),
  },
  [142] = {
    [sym_indiv_name] = STATE(185),
    [sym_qname] = STATE(139),
    [aux_sym_narrative_repeat1] = STATE(151),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(301),
  },
  [143] = {
    [sym_class_name] = STATE(92),
    [sym_predicate_fragement] = STATE(186),
    [sym_qname] = STATE(147),
    [aux_sym_narrative_repeat1] = STATE(148),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(404),
  },
  [144] = {
    [sym_predicate_fragement] = STATE(186),
    [sym_qname] = STATE(187),
    [aux_sym_narrative_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(406),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [sym_tag] = ACTIONS(408),
    [anon_sym_Scenario_COLON] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(408),
    [sym_And] = ACTIONS(408),
    [sym_given] = ACTIONS(408),
    [sym_then] = ACTIONS(408),
  },
  [146] = {
    [sym_predicate_end] = STATE(190),
    [anon_sym_of] = ACTIONS(410),
    [anon_sym_than] = ACTIONS(410),
    [anon_sym_to] = ACTIONS(410),
    [anon_sym_on] = ACTIONS(410),
    [anon_sym_in] = ACTIONS(410),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_tag] = ACTIONS(202),
    [anon_sym_Scenario_COLON] = ACTIONS(202),
    [anon_sym_that] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_and] = ACTIONS(202),
    [anon_sym_or] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_who] = ACTIONS(202),
    [anon_sym_which] = ACTIONS(202),
    [anon_sym_of] = ACTIONS(412),
    [anon_sym_than] = ACTIONS(412),
    [anon_sym_to] = ACTIONS(412),
    [anon_sym_on] = ACTIONS(412),
    [anon_sym_in] = ACTIONS(412),
    [sym_And] = ACTIONS(202),
    [sym_given] = ACTIONS(202),
    [sym_then] = ACTIONS(202),
  },
  [148] = {
    [aux_sym_narrative_repeat1] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(414),
    [sym_tag] = ACTIONS(212),
    [anon_sym_Scenario_COLON] = ACTIONS(212),
    [anon_sym_that] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_and] = ACTIONS(212),
    [anon_sym_or] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_who] = ACTIONS(212),
    [anon_sym_which] = ACTIONS(212),
    [anon_sym_of] = ACTIONS(212),
    [anon_sym_than] = ACTIONS(212),
    [anon_sym_to] = ACTIONS(212),
    [anon_sym_on] = ACTIONS(212),
    [anon_sym_in] = ACTIONS(212),
    [sym_And] = ACTIONS(212),
    [sym_given] = ACTIONS(212),
    [sym_then] = ACTIONS(212),
  },
  [149] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(416),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [sym_tag] = ACTIONS(418),
    [anon_sym_Scenario_COLON] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(418),
    [sym_And] = ACTIONS(418),
    [sym_given] = ACTIONS(418),
    [sym_then] = ACTIONS(418),
  },
  [151] = {
    [aux_sym_narrative_repeat1] = STATE(192),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(420),
    [sym_tag] = ACTIONS(212),
    [anon_sym_Scenario_COLON] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [sym_And] = ACTIONS(212),
    [sym_given] = ACTIONS(212),
    [sym_then] = ACTIONS(212),
  },
  [152] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(422),
  },
  [153] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(424),
  },
  [154] = {
    [aux_sym_narrative_repeat1] = STATE(193),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(212),
  },
  [155] = {
    [anon_sym_and] = ACTIONS(426),
    [anon_sym_aredisjoint] = ACTIONS(426),
    [sym_are_different] = ACTIONS(426),
  },
  [156] = {
    [aux_sym_narrative_repeat1] = STATE(194),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(428),
    [anon_sym_and] = ACTIONS(212),
    [anon_sym_aredisjoint] = ACTIONS(212),
    [sym_are_different] = ACTIONS(212),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(430),
    [sym_tag] = ACTIONS(430),
    [anon_sym_Scenario_COLON] = ACTIONS(430),
    [anon_sym_DOT] = ACTIONS(430),
    [sym_And] = ACTIONS(430),
    [sym_given] = ACTIONS(430),
    [sym_then] = ACTIONS(430),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [sym_tag] = ACTIONS(432),
    [anon_sym_Scenario_COLON] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [sym_And] = ACTIONS(432),
    [sym_given] = ACTIONS(432),
    [sym_then] = ACTIONS(432),
  },
  [159] = {
    [aux_sym_universal_negative_repeat1] = STATE(159),
    [anon_sym_and] = ACTIONS(434),
    [anon_sym_aredisjoint] = ACTIONS(426),
    [sym_are_different] = ACTIONS(426),
  },
  [160] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(437),
    [anon_sym_PERCENTOWL] = ACTIONS(439),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(439),
    [anon_sym_every] = ACTIONS(439),
    [anon_sym_no] = ACTIONS(439),
    [anon_sym_a] = ACTIONS(439),
    [anon_sym_an] = ACTIONS(439),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_tag] = ACTIONS(441),
    [anon_sym_Scenario_COLON] = ACTIONS(441),
    [anon_sym_DOT] = ACTIONS(443),
    [sym_And] = ACTIONS(441),
    [sym_given] = ACTIONS(441),
    [sym_then] = ACTIONS(441),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_tag] = ACTIONS(441),
    [anon_sym_Scenario_COLON] = ACTIONS(441),
    [sym_And] = ACTIONS(441),
    [sym_given] = ACTIONS(441),
    [sym_then] = ACTIONS(441),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_tag] = ACTIONS(445),
    [anon_sym_Scenario_COLON] = ACTIONS(445),
    [sym_And] = ACTIONS(445),
    [sym_given] = ACTIONS(445),
    [sym_then] = ACTIONS(445),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_tag] = ACTIONS(447),
    [anon_sym_Scenario_COLON] = ACTIONS(447),
    [anon_sym_DOT] = ACTIONS(447),
    [sym_And] = ACTIONS(447),
    [sym_given] = ACTIONS(447),
    [sym_then] = ACTIONS(447),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [sym_tag] = ACTIONS(449),
    [anon_sym_Scenario_COLON] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(449),
    [sym_And] = ACTIONS(449),
    [sym_given] = ACTIONS(449),
    [sym_then] = ACTIONS(449),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [sym_tag] = ACTIONS(451),
    [anon_sym_Scenario_COLON] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(451),
    [sym_And] = ACTIONS(451),
    [sym_given] = ACTIONS(451),
    [sym_then] = ACTIONS(451),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_tag] = ACTIONS(453),
    [anon_sym_Scenario_COLON] = ACTIONS(453),
    [anon_sym_DOT] = ACTIONS(453),
    [sym_And] = ACTIONS(453),
    [sym_given] = ACTIONS(453),
    [sym_then] = ACTIONS(453),
  },
  [168] = {
    [aux_sym_source_body_repeat1] = STATE(168),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(458),
    [sym_delimiter] = ACTIONS(461),
  },
  [169] = {
    [sym_class_name] = STATE(92),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(171),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(463),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_tag] = ACTIONS(465),
    [anon_sym_Scenario_COLON] = ACTIONS(465),
    [anon_sym_DOT] = ACTIONS(465),
    [anon_sym_and] = ACTIONS(465),
    [anon_sym_or] = ACTIONS(465),
    [sym_And] = ACTIONS(465),
    [sym_given] = ACTIONS(465),
    [sym_then] = ACTIONS(465),
  },
  [171] = {
    [aux_sym_narrative_repeat1] = STATE(196),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(467),
    [sym_tag] = ACTIONS(212),
    [anon_sym_Scenario_COLON] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_or] = ACTIONS(212),
    [sym_And] = ACTIONS(212),
    [sym_given] = ACTIONS(212),
    [sym_then] = ACTIONS(212),
  },
  [172] = {
    [sym_class_name] = STATE(92),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(174),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(469),
  },
  [173] = {
    [aux_sym_conjunction_repeat2] = STATE(198),
    [anon_sym_nor] = ACTIONS(471),
  },
  [174] = {
    [aux_sym_narrative_repeat1] = STATE(199),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(473),
    [anon_sym_nor] = ACTIONS(212),
  },
  [175] = {
    [sym_qualifier] = STATE(202),
    [sym_predicate_phrase] = STATE(203),
    [sym_predicate_open] = STATE(204),
    [anon_sym_is] = ACTIONS(475),
    [anon_sym_isn_SQUOTEt] = ACTIONS(477),
    [anon_sym_does] = ACTIONS(194),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(196),
    [anon_sym_has] = ACTIONS(198),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(200),
  },
  [176] = {
    [sym_pos_class] = STATE(207),
    [sym_class_atom] = STATE(208),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(140),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(479),
    [anon_sym_a] = ACTIONS(481),
    [anon_sym_an] = ACTIONS(481),
    [anon_sym_not] = ACTIONS(483),
  },
  [177] = {
    [anon_sym_that] = ACTIONS(485),
    [anon_sym_who] = ACTIONS(485),
    [anon_sym_which] = ACTIONS(485),
  },
  [178] = {
    [aux_sym_conjunction_repeat1] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(487),
    [sym_tag] = ACTIONS(487),
    [anon_sym_Scenario_COLON] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_and] = ACTIONS(388),
    [sym_And] = ACTIONS(487),
    [sym_given] = ACTIONS(487),
    [sym_then] = ACTIONS(487),
  },
  [179] = {
    [sym_pos_class] = STATE(207),
    [sym_class_atom] = STATE(211),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(171),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(374),
    [anon_sym_a] = ACTIONS(376),
    [anon_sym_an] = ACTIONS(376),
    [anon_sym_not] = ACTIONS(283),
  },
  [180] = {
    [aux_sym_disjunction_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(489),
    [sym_tag] = ACTIONS(489),
    [anon_sym_Scenario_COLON] = ACTIONS(489),
    [anon_sym_DOT] = ACTIONS(489),
    [anon_sym_or] = ACTIONS(394),
    [sym_And] = ACTIONS(489),
    [sym_given] = ACTIONS(489),
    [sym_then] = ACTIONS(489),
  },
  [181] = {
    [aux_sym_narrative_repeat1] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(491),
    [sym_tag] = ACTIONS(100),
    [anon_sym_Scenario_COLON] = ACTIONS(100),
    [anon_sym_that] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_and] = ACTIONS(100),
    [anon_sym_or] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_who] = ACTIONS(100),
    [anon_sym_which] = ACTIONS(100),
    [sym_And] = ACTIONS(100),
    [sym_given] = ACTIONS(100),
    [sym_then] = ACTIONS(100),
  },
  [182] = {
    [sym_indiv_name] = STATE(213),
    [sym_qname] = STATE(139),
    [aux_sym_narrative_repeat1] = STATE(140),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(287),
  },
  [183] = {
    [aux_sym_definition_repeat1] = STATE(214),
    [ts_builtin_sym_end] = ACTIONS(494),
    [sym_tag] = ACTIONS(494),
    [anon_sym_Scenario_COLON] = ACTIONS(494),
    [anon_sym_DOT] = ACTIONS(494),
    [anon_sym_and] = ACTIONS(398),
    [sym_And] = ACTIONS(494),
    [sym_given] = ACTIONS(494),
    [sym_then] = ACTIONS(494),
  },
  [184] = {
    [aux_sym_narrative_repeat1] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(496),
    [sym_tag] = ACTIONS(100),
    [anon_sym_Scenario_COLON] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_and] = ACTIONS(100),
    [sym_And] = ACTIONS(100),
    [sym_given] = ACTIONS(100),
    [sym_then] = ACTIONS(100),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [sym_tag] = ACTIONS(499),
    [anon_sym_Scenario_COLON] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(499),
    [sym_And] = ACTIONS(499),
    [sym_given] = ACTIONS(499),
    [sym_then] = ACTIONS(499),
  },
  [186] = {
    [sym_predicate_end] = STATE(215),
    [anon_sym_of] = ACTIONS(410),
    [anon_sym_than] = ACTIONS(410),
    [anon_sym_to] = ACTIONS(410),
    [anon_sym_on] = ACTIONS(410),
    [anon_sym_in] = ACTIONS(410),
  },
  [187] = {
    [anon_sym_of] = ACTIONS(412),
    [anon_sym_than] = ACTIONS(412),
    [anon_sym_to] = ACTIONS(412),
    [anon_sym_on] = ACTIONS(412),
    [anon_sym_in] = ACTIONS(412),
  },
  [188] = {
    [aux_sym_narrative_repeat1] = STATE(216),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(501),
    [anon_sym_of] = ACTIONS(212),
    [anon_sym_than] = ACTIONS(212),
    [anon_sym_to] = ACTIONS(212),
    [anon_sym_on] = ACTIONS(212),
    [anon_sym_in] = ACTIONS(212),
  },
  [189] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(503),
  },
  [190] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(505),
  },
  [191] = {
    [aux_sym_narrative_repeat1] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(507),
    [sym_tag] = ACTIONS(100),
    [anon_sym_Scenario_COLON] = ACTIONS(100),
    [anon_sym_that] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_and] = ACTIONS(100),
    [anon_sym_or] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_who] = ACTIONS(100),
    [anon_sym_which] = ACTIONS(100),
    [anon_sym_of] = ACTIONS(100),
    [anon_sym_than] = ACTIONS(100),
    [anon_sym_to] = ACTIONS(100),
    [anon_sym_on] = ACTIONS(100),
    [anon_sym_in] = ACTIONS(100),
    [sym_And] = ACTIONS(100),
    [sym_given] = ACTIONS(100),
    [sym_then] = ACTIONS(100),
  },
  [192] = {
    [aux_sym_narrative_repeat1] = STATE(192),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(510),
    [sym_tag] = ACTIONS(100),
    [anon_sym_Scenario_COLON] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [sym_And] = ACTIONS(100),
    [sym_given] = ACTIONS(100),
    [sym_then] = ACTIONS(100),
  },
  [193] = {
    [aux_sym_narrative_repeat1] = STATE(193),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(513),
  },
  [194] = {
    [aux_sym_narrative_repeat1] = STATE(194),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(516),
    [anon_sym_and] = ACTIONS(100),
    [anon_sym_aredisjoint] = ACTIONS(100),
    [sym_are_different] = ACTIONS(100),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [sym_tag] = ACTIONS(519),
    [anon_sym_Scenario_COLON] = ACTIONS(519),
    [sym_And] = ACTIONS(519),
    [sym_given] = ACTIONS(519),
    [sym_then] = ACTIONS(519),
  },
  [196] = {
    [aux_sym_narrative_repeat1] = STATE(196),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(521),
    [sym_tag] = ACTIONS(100),
    [anon_sym_Scenario_COLON] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_or] = ACTIONS(100),
    [sym_And] = ACTIONS(100),
    [sym_given] = ACTIONS(100),
    [sym_then] = ACTIONS(100),
  },
  [197] = {
    [sym_pos_class] = STATE(218),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(219),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(524),
    [anon_sym_a] = ACTIONS(526),
    [anon_sym_an] = ACTIONS(526),
  },
  [198] = {
    [aux_sym_conjunction_repeat2] = STATE(220),
    [ts_builtin_sym_end] = ACTIONS(528),
    [sym_tag] = ACTIONS(528),
    [anon_sym_Scenario_COLON] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [anon_sym_nor] = ACTIONS(471),
    [sym_And] = ACTIONS(528),
    [sym_given] = ACTIONS(528),
    [sym_then] = ACTIONS(528),
  },
  [199] = {
    [aux_sym_narrative_repeat1] = STATE(199),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(530),
    [anon_sym_nor] = ACTIONS(100),
  },
  [200] = {
    [sym_class_expression] = STATE(223),
    [sym_pos_class] = STATE(133),
    [sym_class_atom] = STATE(134),
    [sym_conjunction] = STATE(135),
    [sym_disjunction] = STATE(135),
    [sym_qualified_class] = STATE(135),
    [sym_class_name] = STATE(136),
    [sym_predicate_fragement] = STATE(224),
    [sym_qname] = STATE(147),
    [aux_sym_narrative_repeat1] = STATE(148),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(289),
    [anon_sym_a] = ACTIONS(533),
    [anon_sym_an] = ACTIONS(533),
    [anon_sym_not] = ACTIONS(283),
    [anon_sym_neither] = ACTIONS(285),
    [anon_sym_the] = ACTIONS(535),
  },
  [201] = {
    [sym_predicate_fragement] = STATE(224),
    [sym_qname] = STATE(187),
    [aux_sym_narrative_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(537),
    [anon_sym_a] = ACTIONS(535),
    [anon_sym_an] = ACTIONS(535),
    [anon_sym_the] = ACTIONS(535),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [sym_tag] = ACTIONS(539),
    [anon_sym_Scenario_COLON] = ACTIONS(539),
    [anon_sym_DOT] = ACTIONS(539),
    [sym_And] = ACTIONS(539),
    [sym_given] = ACTIONS(539),
    [sym_then] = ACTIONS(539),
  },
  [203] = {
    [sym_quantifier] = STATE(226),
    [anon_sym_some] = ACTIONS(541),
    [anon_sym_only] = ACTIONS(541),
  },
  [204] = {
    [sym_predicate_name] = STATE(227),
    [sym_qname] = STATE(228),
    [aux_sym_narrative_repeat1] = STATE(229),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(543),
  },
  [205] = {
    [sym_class_name] = STATE(92),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(140),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(287),
  },
  [206] = {
    [sym_pos_class] = STATE(170),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(140),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(479),
    [anon_sym_a] = ACTIONS(481),
    [anon_sym_an] = ACTIONS(481),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [sym_tag] = ACTIONS(384),
    [anon_sym_Scenario_COLON] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_and] = ACTIONS(384),
    [anon_sym_or] = ACTIONS(384),
    [sym_And] = ACTIONS(384),
    [sym_given] = ACTIONS(384),
    [sym_then] = ACTIONS(384),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [sym_tag] = ACTIONS(545),
    [anon_sym_Scenario_COLON] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_and] = ACTIONS(545),
    [sym_And] = ACTIONS(545),
    [sym_given] = ACTIONS(545),
    [sym_then] = ACTIONS(545),
  },
  [209] = {
    [sym_qualifier] = STATE(230),
    [sym_predicate_phrase] = STATE(203),
    [sym_predicate_open] = STATE(204),
    [anon_sym_is] = ACTIONS(475),
    [anon_sym_isn_SQUOTEt] = ACTIONS(477),
    [anon_sym_does] = ACTIONS(194),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(196),
    [anon_sym_has] = ACTIONS(198),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(200),
  },
  [210] = {
    [aux_sym_conjunction_repeat1] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(545),
    [sym_tag] = ACTIONS(545),
    [anon_sym_Scenario_COLON] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_and] = ACTIONS(547),
    [sym_And] = ACTIONS(545),
    [sym_given] = ACTIONS(545),
    [sym_then] = ACTIONS(545),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [sym_tag] = ACTIONS(550),
    [anon_sym_Scenario_COLON] = ACTIONS(550),
    [anon_sym_DOT] = ACTIONS(550),
    [anon_sym_or] = ACTIONS(550),
    [sym_And] = ACTIONS(550),
    [sym_given] = ACTIONS(550),
    [sym_then] = ACTIONS(550),
  },
  [212] = {
    [aux_sym_disjunction_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(550),
    [sym_tag] = ACTIONS(550),
    [anon_sym_Scenario_COLON] = ACTIONS(550),
    [anon_sym_DOT] = ACTIONS(550),
    [anon_sym_or] = ACTIONS(552),
    [sym_And] = ACTIONS(550),
    [sym_given] = ACTIONS(550),
    [sym_then] = ACTIONS(550),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(555),
    [sym_tag] = ACTIONS(555),
    [anon_sym_Scenario_COLON] = ACTIONS(555),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_and] = ACTIONS(555),
    [sym_And] = ACTIONS(555),
    [sym_given] = ACTIONS(555),
    [sym_then] = ACTIONS(555),
  },
  [214] = {
    [aux_sym_definition_repeat1] = STATE(214),
    [ts_builtin_sym_end] = ACTIONS(555),
    [sym_tag] = ACTIONS(555),
    [anon_sym_Scenario_COLON] = ACTIONS(555),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_and] = ACTIONS(557),
    [sym_And] = ACTIONS(555),
    [sym_given] = ACTIONS(555),
    [sym_then] = ACTIONS(555),
  },
  [215] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(560),
  },
  [216] = {
    [aux_sym_narrative_repeat1] = STATE(216),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(562),
    [anon_sym_of] = ACTIONS(100),
    [anon_sym_than] = ACTIONS(100),
    [anon_sym_to] = ACTIONS(100),
    [anon_sym_on] = ACTIONS(100),
    [anon_sym_in] = ACTIONS(100),
  },
  [217] = {
    [sym_class_name] = STATE(92),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(219),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(565),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(567),
    [sym_tag] = ACTIONS(567),
    [anon_sym_Scenario_COLON] = ACTIONS(567),
    [anon_sym_DOT] = ACTIONS(567),
    [anon_sym_nor] = ACTIONS(567),
    [sym_And] = ACTIONS(567),
    [sym_given] = ACTIONS(567),
    [sym_then] = ACTIONS(567),
  },
  [219] = {
    [aux_sym_narrative_repeat1] = STATE(231),
    [ts_builtin_sym_end] = ACTIONS(212),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(569),
    [sym_tag] = ACTIONS(212),
    [anon_sym_Scenario_COLON] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_nor] = ACTIONS(212),
    [sym_And] = ACTIONS(212),
    [sym_given] = ACTIONS(212),
    [sym_then] = ACTIONS(212),
  },
  [220] = {
    [aux_sym_conjunction_repeat2] = STATE(220),
    [ts_builtin_sym_end] = ACTIONS(567),
    [sym_tag] = ACTIONS(567),
    [anon_sym_Scenario_COLON] = ACTIONS(567),
    [anon_sym_DOT] = ACTIONS(567),
    [anon_sym_nor] = ACTIONS(571),
    [sym_And] = ACTIONS(567),
    [sym_given] = ACTIONS(567),
    [sym_then] = ACTIONS(567),
  },
  [221] = {
    [sym_class_name] = STATE(92),
    [sym_predicate_fragement] = STATE(232),
    [sym_qname] = STATE(147),
    [aux_sym_narrative_repeat1] = STATE(148),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(404),
  },
  [222] = {
    [sym_predicate_fragement] = STATE(232),
    [sym_qname] = STATE(187),
    [aux_sym_narrative_repeat1] = STATE(188),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(406),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [sym_tag] = ACTIONS(574),
    [anon_sym_Scenario_COLON] = ACTIONS(574),
    [anon_sym_DOT] = ACTIONS(574),
    [sym_And] = ACTIONS(574),
    [sym_given] = ACTIONS(574),
    [sym_then] = ACTIONS(574),
  },
  [224] = {
    [sym_predicate_end] = STATE(234),
    [anon_sym_of] = ACTIONS(576),
    [anon_sym_than] = ACTIONS(576),
    [anon_sym_to] = ACTIONS(576),
    [anon_sym_on] = ACTIONS(576),
    [anon_sym_in] = ACTIONS(576),
  },
  [225] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(578),
    [anon_sym_a] = ACTIONS(580),
    [anon_sym_an] = ACTIONS(580),
    [anon_sym_not] = ACTIONS(580),
    [anon_sym_neither] = ACTIONS(580),
  },
  [226] = {
    [sym_class_expression] = STATE(235),
    [sym_pos_class] = STATE(133),
    [sym_class_atom] = STATE(134),
    [sym_conjunction] = STATE(135),
    [sym_disjunction] = STATE(135),
    [sym_qualified_class] = STATE(135),
    [sym_class_name] = STATE(136),
    [sym_qname] = STATE(85),
    [aux_sym_narrative_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(279),
    [anon_sym_a] = ACTIONS(281),
    [anon_sym_an] = ACTIONS(281),
    [anon_sym_not] = ACTIONS(283),
    [anon_sym_neither] = ACTIONS(285),
  },
  [227] = {
    [anon_sym_some] = ACTIONS(422),
    [anon_sym_only] = ACTIONS(422),
  },
  [228] = {
    [anon_sym_some] = ACTIONS(424),
    [anon_sym_only] = ACTIONS(424),
  },
  [229] = {
    [aux_sym_narrative_repeat1] = STATE(236),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(582),
    [anon_sym_some] = ACTIONS(212),
    [anon_sym_only] = ACTIONS(212),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(584),
    [sym_tag] = ACTIONS(584),
    [anon_sym_Scenario_COLON] = ACTIONS(584),
    [anon_sym_DOT] = ACTIONS(584),
    [sym_And] = ACTIONS(584),
    [sym_given] = ACTIONS(584),
    [sym_then] = ACTIONS(584),
  },
  [231] = {
    [aux_sym_narrative_repeat1] = STATE(231),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(586),
    [sym_tag] = ACTIONS(100),
    [anon_sym_Scenario_COLON] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_nor] = ACTIONS(100),
    [sym_And] = ACTIONS(100),
    [sym_given] = ACTIONS(100),
    [sym_then] = ACTIONS(100),
  },
  [232] = {
    [sym_predicate_end] = STATE(237),
    [anon_sym_of] = ACTIONS(576),
    [anon_sym_than] = ACTIONS(576),
    [anon_sym_to] = ACTIONS(576),
    [anon_sym_on] = ACTIONS(576),
    [anon_sym_in] = ACTIONS(576),
  },
  [233] = {
    [anon_sym_some] = ACTIONS(503),
    [anon_sym_only] = ACTIONS(503),
  },
  [234] = {
    [anon_sym_some] = ACTIONS(505),
    [anon_sym_only] = ACTIONS(505),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [sym_tag] = ACTIONS(589),
    [anon_sym_Scenario_COLON] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(589),
    [sym_And] = ACTIONS(589),
    [sym_given] = ACTIONS(589),
    [sym_then] = ACTIONS(589),
  },
  [236] = {
    [aux_sym_narrative_repeat1] = STATE(236),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(591),
    [anon_sym_some] = ACTIONS(100),
    [anon_sym_only] = ACTIONS(100),
  },
  [237] = {
    [anon_sym_some] = ACTIONS(560),
    [anon_sym_only] = ACTIONS(560),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(11),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_background, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(22),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(13),
  [46] = {.count = 1, .reusable = true}, SHIFT(25),
  [48] = {.count = 1, .reusable = true}, SHIFT(26),
  [50] = {.count = 1, .reusable = true}, SHIFT(28),
  [52] = {.count = 1, .reusable = true}, SHIFT(29),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_background, 2),
  [56] = {.count = 1, .reusable = true}, SHIFT(30),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [60] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [68] = {.count = 1, .reusable = true}, SHIFT(33),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(22),
  [73] = {.count = 1, .reusable = true}, SHIFT(34),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 4),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_narrative, 1),
  [79] = {.count = 1, .reusable = false}, SHIFT(35),
  [81] = {.count = 1, .reusable = true}, SHIFT(37),
  [83] = {.count = 1, .reusable = true}, SHIFT(38),
  [85] = {.count = 1, .reusable = true}, SHIFT(39),
  [87] = {.count = 1, .reusable = true}, SHIFT(44),
  [89] = {.count = 1, .reusable = false}, SHIFT(48),
  [91] = {.count = 1, .reusable = true}, SHIFT(46),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_background, 3),
  [95] = {.count = 1, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(30),
  [100] = {.count = 1, .reusable = true}, REDUCE(aux_sym_narrative_repeat1, 2),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(35),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 2),
  [107] = {.count = 1, .reusable = true}, SHIFT(51),
  [109] = {.count = 1, .reusable = false}, SHIFT(53),
  [111] = {.count = 1, .reusable = false}, SHIFT(69),
  [113] = {.count = 1, .reusable = true}, SHIFT(54),
  [115] = {.count = 1, .reusable = true}, SHIFT(55),
  [117] = {.count = 1, .reusable = true}, SHIFT(56),
  [119] = {.count = 1, .reusable = true}, SHIFT(57),
  [121] = {.count = 1, .reusable = true}, SHIFT(58),
  [123] = {.count = 1, .reusable = true}, SHIFT(70),
  [125] = {.count = 1, .reusable = true}, SHIFT(71),
  [127] = {.count = 1, .reusable = true}, SHIFT(72),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 4),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_assumption_block, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(75),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_test_block, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(77),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_body, 1),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_language_ID, 1),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_language_setting, 3),
  [145] = {.count = 1, .reusable = true}, SHIFT(48),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_uriref, 1),
  [151] = {.count = 1, .reusable = false}, SHIFT(81),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 5),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 3),
  [157] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(53),
  [160] = {.count = 1, .reusable = true}, SHIFT(86),
  [162] = {.count = 1, .reusable = true}, SHIFT(89),
  [164] = {.count = 1, .reusable = true}, SHIFT(91),
  [166] = {.count = 1, .reusable = true}, SHIFT(93),
  [168] = {.count = 1, .reusable = true}, SHIFT(94),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 2),
  [172] = {.count = 1, .reusable = true}, SHIFT(95),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 1),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_proposition, 1),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_universal, 1),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 1),
  [182] = {.count = 1, .reusable = true}, SHIFT(96),
  [184] = {.count = 1, .reusable = true}, SHIFT(97),
  [186] = {.count = 1, .reusable = true}, SHIFT(98),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 1),
  [190] = {.count = 1, .reusable = false}, SHIFT(99),
  [192] = {.count = 1, .reusable = true}, SHIFT(99),
  [194] = {.count = 1, .reusable = false}, SHIFT(100),
  [196] = {.count = 1, .reusable = true}, SHIFT(100),
  [198] = {.count = 1, .reusable = false}, SHIFT(101),
  [200] = {.count = 1, .reusable = true}, SHIFT(101),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_class_name, 1),
  [204] = {.count = 1, .reusable = true}, SHIFT(104),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_indiv_name, 1),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_indiv_name, 1),
  [210] = {.count = 1, .reusable = false}, SHIFT(106),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_qname, 1),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_qname, 1),
  [216] = {.count = 1, .reusable = true}, SHIFT(107),
  [218] = {.count = 1, .reusable = true}, SHIFT(109),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 1),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 1),
  [224] = {.count = 1, .reusable = true}, SHIFT(110),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_test, 2),
  [228] = {.count = 1, .reusable = true}, SHIFT(111),
  [230] = {.count = 1, .reusable = true}, SHIFT(114),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_assumption_block, 2),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_test_block, 2),
  [236] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(38),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(39),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [246] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(81),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 5),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 3),
  [253] = {.count = 1, .reusable = true}, SHIFT(119),
  [255] = {.count = 1, .reusable = true}, SHIFT(120),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_class_name, 1),
  [259] = {.count = 1, .reusable = false}, SHIFT(121),
  [261] = {.count = 1, .reusable = true}, SHIFT(122),
  [263] = {.count = 1, .reusable = false}, SHIFT(123),
  [265] = {.count = 1, .reusable = false}, SHIFT(124),
  [267] = {.count = 1, .reusable = true}, SHIFT(124),
  [269] = {.count = 1, .reusable = false}, SHIFT(125),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 2),
  [273] = {.count = 1, .reusable = false}, SHIFT(126),
  [275] = {.count = 1, .reusable = true}, SHIFT(128),
  [277] = {.count = 1, .reusable = false}, SHIFT(128),
  [279] = {.count = 1, .reusable = false}, SHIFT(137),
  [281] = {.count = 1, .reusable = true}, SHIFT(129),
  [283] = {.count = 1, .reusable = true}, SHIFT(130),
  [285] = {.count = 1, .reusable = true}, SHIFT(131),
  [287] = {.count = 1, .reusable = true}, SHIFT(140),
  [289] = {.count = 1, .reusable = false}, SHIFT(148),
  [291] = {.count = 1, .reusable = true}, SHIFT(142),
  [293] = {.count = 1, .reusable = true}, SHIFT(143),
  [295] = {.count = 1, .reusable = false}, SHIFT(144),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 1),
  [299] = {.count = 1, .reusable = true}, SHIFT(149),
  [301] = {.count = 1, .reusable = true}, SHIFT(151),
  [303] = {.count = 1, .reusable = true}, SHIFT(154),
  [305] = {.count = 1, .reusable = true}, SHIFT(156),
  [307] = {.count = 1, .reusable = true}, SHIFT(157),
  [309] = {.count = 1, .reusable = true}, SHIFT(158),
  [311] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(106),
  [314] = {.count = 1, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_consistency, 1),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_consistency_test, 2),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 2),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 2),
  [324] = {.count = 1, .reusable = true}, SHIFT(160),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_test, 3),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_inference_test, 2),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_infer_sentence, 1),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_further_assumption, 2),
  [334] = {.count = 1, .reusable = true}, SHIFT(162),
  [336] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assumption_block_repeat1, 2),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym_assumption_block_repeat1, 2), SHIFT_REPEAT(75),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_further_test, 2),
  [343] = {.count = 1, .reusable = true}, SHIFT(163),
  [345] = {.count = 1, .reusable = true}, REDUCE(aux_sym_test_block_repeat1, 2),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_test_block_repeat1, 2), SHIFT_REPEAT(77),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 4),
  [352] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(121),
  [355] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(123),
  [358] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(125),
  [361] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(126),
  [364] = {.count = 1, .reusable = true}, SHIFT(167),
  [366] = {.count = 1, .reusable = true}, SHIFT(168),
  [368] = {.count = 1, .reusable = false}, SHIFT(168),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_source_body, 1),
  [372] = {.count = 1, .reusable = true}, SHIFT(137),
  [374] = {.count = 1, .reusable = false}, SHIFT(171),
  [376] = {.count = 1, .reusable = true}, SHIFT(169),
  [378] = {.count = 1, .reusable = false}, SHIFT(174),
  [380] = {.count = 1, .reusable = true}, SHIFT(172),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 3),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1),
  [386] = {.count = 1, .reusable = true}, SHIFT(175),
  [388] = {.count = 1, .reusable = true}, SHIFT(176),
  [390] = {.count = 1, .reusable = true}, SHIFT(177),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_class_expression, 1),
  [394] = {.count = 1, .reusable = true}, SHIFT(179),
  [396] = {.count = 1, .reusable = false}, SHIFT(181),
  [398] = {.count = 1, .reusable = true}, SHIFT(182),
  [400] = {.count = 1, .reusable = false}, SHIFT(184),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positve, 3),
  [404] = {.count = 1, .reusable = true}, SHIFT(148),
  [406] = {.count = 1, .reusable = true}, SHIFT(188),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 3),
  [410] = {.count = 1, .reusable = true}, SHIFT(189),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_fragement, 1),
  [414] = {.count = 1, .reusable = false}, SHIFT(191),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 2),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_relation, 3),
  [420] = {.count = 1, .reusable = false}, SHIFT(192),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 2),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_name, 1),
  [426] = {.count = 1, .reusable = true}, REDUCE(aux_sym_universal_negative_repeat1, 2),
  [428] = {.count = 1, .reusable = false}, SHIFT(194),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 3),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_different, 3),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_universal_negative_repeat1, 2), SHIFT_REPEAT(104),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 3),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 3),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_further_assumption, 3),
  [443] = {.count = 1, .reusable = true}, SHIFT(195),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_further_test, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positve, 4),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 4),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_particular, 4),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_source, 4),
  [455] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(168),
  [458] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(168),
  [461] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2),
  [463] = {.count = 1, .reusable = true}, SHIFT(171),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 2),
  [467] = {.count = 1, .reusable = false}, SHIFT(196),
  [469] = {.count = 1, .reusable = true}, SHIFT(174),
  [471] = {.count = 1, .reusable = true}, SHIFT(197),
  [473] = {.count = 1, .reusable = false}, SHIFT(199),
  [475] = {.count = 1, .reusable = false}, SHIFT(200),
  [477] = {.count = 1, .reusable = true}, SHIFT(201),
  [479] = {.count = 1, .reusable = false}, SHIFT(140),
  [481] = {.count = 1, .reusable = true}, SHIFT(205),
  [483] = {.count = 1, .reusable = true}, SHIFT(206),
  [485] = {.count = 1, .reusable = true}, SHIFT(209),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 2),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [491] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(181),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 4),
  [496] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(184),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_equation, 4),
  [501] = {.count = 1, .reusable = false}, SHIFT(216),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_end, 1),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 3),
  [507] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(191),
  [510] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(192),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(193),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(194),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_further_assumption, 4),
  [521] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(196),
  [524] = {.count = 1, .reusable = false}, SHIFT(219),
  [526] = {.count = 1, .reusable = true}, SHIFT(217),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [530] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(199),
  [533] = {.count = 1, .reusable = true}, SHIFT(221),
  [535] = {.count = 1, .reusable = true}, SHIFT(222),
  [537] = {.count = 1, .reusable = false}, SHIFT(188),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 3),
  [541] = {.count = 1, .reusable = true}, SHIFT(225),
  [543] = {.count = 1, .reusable = true}, SHIFT(229),
  [545] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [547] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(176),
  [550] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(179),
  [555] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2),
  [557] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(182),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 4),
  [562] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(216),
  [565] = {.count = 1, .reusable = true}, SHIFT(219),
  [567] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [569] = {.count = 1, .reusable = false}, SHIFT(231),
  [571] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(197),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 2),
  [576] = {.count = 1, .reusable = true}, SHIFT(233),
  [578] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [582] = {.count = 1, .reusable = false}, SHIFT(236),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 4),
  [586] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(231),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 3),
  [591] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(236),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scone() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
