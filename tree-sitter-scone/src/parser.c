#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 236
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
  anon_sym_Background_COLON = 5,
  sym_tag = 6,
  anon_sym_Language = 7,
  anon_sym_PERCENTOWL = 8,
  anon_sym_PERCENTCommonLogic = 9,
  anon_sym_Test = 10,
  anon_sym_theontology = 11,
  anon_sym_Scenario_COLON = 12,
  anon_sym_that = 13,
  anon_sym_DOT = 14,
  anon_sym_thescenariois = 15,
  anon_sym_isenumeratedas = 16,
  anon_sym_and = 17,
  anon_sym_every = 18,
  anon_sym_is = 19,
  anon_sym_isasubclassof = 20,
  anon_sym_no = 21,
  anon_sym_isa = 22,
  anon_sym_aredisjoint = 23,
  anon_sym_some = 24,
  anon_sym_are = 25,
  anon_sym_aren_SQUOTEt = 26,
  anon_sym_isn_SQUOTEt = 27,
  anon_sym_thesameas = 28,
  sym_are_different = 29,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 30,
  aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 31,
  aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 32,
  sym_delimiter = 33,
  anon_sym_a = 34,
  anon_sym_an = 35,
  anon_sym_not = 36,
  anon_sym_neither = 37,
  anon_sym_nor = 38,
  anon_sym_or = 39,
  anon_sym_COMMA = 40,
  anon_sym_who = 41,
  anon_sym_which = 42,
  anon_sym_only = 43,
  anon_sym_the = 44,
  anon_sym_does = 45,
  anon_sym_doesn_SQUOTEt = 46,
  anon_sym_has = 47,
  anon_sym_hasn_SQUOTEt = 48,
  anon_sym_as = 49,
  anon_sym_of = 50,
  anon_sym_than = 51,
  anon_sym_to = 52,
  anon_sym_on = 53,
  anon_sym_in = 54,
  sym_And = 55,
  sym_given = 56,
  sym_then = 57,
  anon_sym_consistent = 58,
  anon_sym_inconsistent = 59,
  sym_is_defined_as = 60,
  anon_sym_don_SQUOTEt = 61,
  anon_sym_infer = 62,
  sym_star = 63,
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
  [anon_sym_Background_COLON] = "Background:",
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
  [anon_sym_Background_COLON] = {
    .visible = true,
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
      ACCEPT_TOKEN(anon_sym_Background_COLON);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 213:
      if (lookahead == 'n')
        ADVANCE(23);
      END_STATE();
    case 214:
      if (lookahead == 'i')
        ADVANCE(37);
      END_STATE();
    case 215:
      if (lookahead == 'h')
        ADVANCE(51);
      END_STATE();
    case 216:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 217:
      if (lookahead == 'L')
        ADVANCE(218);
      if (lookahead == 'T')
        ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == 'a')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'n')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'g')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'u')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'a')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'g')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_Language);
      END_STATE();
    case 226:
      if (lookahead == 'e')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 's')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 't')
        ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Test);
      END_STATE();
    case 230:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(233);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == 't')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(230);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == ' ')
        ADVANCE(55);
      if (lookahead == 'n')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == ' ')
        ADVANCE(57);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'a')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 238:
      if (lookahead == 'd')
        ADVANCE(239);
      if (lookahead == 'i')
        ADVANCE(244);
      if (lookahead == 't')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(238);
      END_STATE();
    case 239:
      if (lookahead == 'o')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'n')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == '\'')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 't')
        ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_don_SQUOTEt);
      END_STATE();
    case 244:
      if (lookahead == 'n')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'f')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'e')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'r')
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_infer);
      END_STATE();
    case 249:
      if (lookahead == 'h')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'e')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == ' ')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 's')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'c')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'e')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'n')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'a')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'r')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'i')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'o')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == ' ')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'i')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 's')
        ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_thescenariois);
      END_STATE();
    case 264:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(264);
      END_STATE();
    case 265:
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
        SKIP(265);
      ADVANCE(190);
      END_STATE();
    case 266:
      if (lookahead == 't')
        ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(266);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'e')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == ' ')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'o')
        ADVANCE(168);
      END_STATE();
    case 271:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(272);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      END_STATE();
    case 272:
      if (lookahead == '\"')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == '\"')
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 275:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(233);
      if (lookahead == 's')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 276:
      if (lookahead == '\"')
        ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(276);
      END_STATE();
    case 277:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'A')
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(277);
      END_STATE();
    case 278:
      if (lookahead == 'a')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(80);
      if (lookahead == 'h')
        ADVANCE(92);
      if (lookahead == 'i')
        ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(278);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'd')
        ADVANCE(58);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 's')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ')
        ADVANCE(283);
      if (lookahead == 'n')
        ADVANCE(138);
      END_STATE();
    case 283:
      if (lookahead == 'a')
        ADVANCE(284);
      if (lookahead == 'd')
        ADVANCE(115);
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 284:
      if (lookahead == ' ')
        ADVANCE(103);
      END_STATE();
    case 285:
      if (lookahead == 'd')
        ADVANCE(286);
      if (lookahead == 'h')
        ADVANCE(287);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      END_STATE();
    case 286:
      if (lookahead == 'o')
        ADVANCE(81);
      END_STATE();
    case 287:
      if (lookahead == 'a')
        ADVANCE(93);
      END_STATE();
    case 288:
      if (lookahead == 's')
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'n')
        ADVANCE(138);
      END_STATE();
    case 290:
      if (lookahead == 'c')
        ADVANCE(291);
      if (lookahead == 'i')
        ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(290);
      END_STATE();
    case 291:
      if (lookahead == 'o')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'n')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 's')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'i')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 's')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 't')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'e')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'n')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 't')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_consistent);
      END_STATE();
    case 301:
      if (lookahead == 'n')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'c')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'o')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'n')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 's')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'i')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 's')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 't')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'e')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'n')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 't')
        ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_inconsistent);
      END_STATE();
    case 313:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(233);
      if (lookahead == 't')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(313);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 314:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == 'n')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(314);
      if (lookahead != 0)
        ADVANCE(190);
      END_STATE();
    case 315:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == '@')
        ADVANCE(192);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(315);
      END_STATE();
    case 316:
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
        SKIP(316);
      ADVANCE(190);
      END_STATE();
    case 317:
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
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
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
        ADVANCE(280);
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
        ADVANCE(236);
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
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
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
        ADVANCE(280);
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
        ADVANCE(274);
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
        ADVANCE(231);
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
        ADVANCE(231);
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
        ADVANCE(280);
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
        ADVANCE(231);
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
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
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
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
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
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
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
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(375);
      if (lookahead == 't')
        ADVANCE(235);
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
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
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
        ADVANCE(279);
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
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
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
        ADVANCE(279);
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
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
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
        ADVANCE(231);
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
        ADVANCE(213);
      if (lookahead == 'G')
        ADVANCE(214);
      if (lookahead == 'S')
        ADVANCE(207);
      if (lookahead == 'T')
        ADVANCE(215);
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
        ADVANCE(231);
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
        ADVANCE(231);
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
  [7] = {.lex_state = 210},
  [8] = {.lex_state = 201},
  [9] = {.lex_state = 211},
  [10] = {.lex_state = 212},
  [11] = {.lex_state = 211},
  [12] = {.lex_state = 205},
  [13] = {.lex_state = 201},
  [14] = {.lex_state = 191},
  [15] = {.lex_state = 216},
  [16] = {.lex_state = 217},
  [17] = {.lex_state = 210},
  [18] = {.lex_state = 210},
  [19] = {.lex_state = 208},
  [20] = {.lex_state = 211},
  [21] = {.lex_state = 230},
  [22] = {.lex_state = 238},
  [23] = {.lex_state = 211},
  [24] = {.lex_state = 212},
  [25] = {.lex_state = 212},
  [26] = {.lex_state = 264},
  [27] = {.lex_state = 211},
  [28] = {.lex_state = 212},
  [29] = {.lex_state = 205},
  [30] = {.lex_state = 208},
  [31] = {.lex_state = 205},
  [32] = {.lex_state = 265},
  [33] = {.lex_state = 230},
  [34] = {.lex_state = 266},
  [35] = {.lex_state = 217},
  [36] = {.lex_state = 210},
  [37] = {.lex_state = 210},
  [38] = {.lex_state = 216},
  [39] = {.lex_state = 271},
  [40] = {.lex_state = 275},
  [41] = {.lex_state = 216},
  [42] = {.lex_state = 216},
  [43] = {.lex_state = 216},
  [44] = {.lex_state = 216},
  [45] = {.lex_state = 276},
  [46] = {.lex_state = 277},
  [47] = {.lex_state = 277},
  [48] = {.lex_state = 277},
  [49] = {.lex_state = 277},
  [50] = {.lex_state = 277},
  [51] = {.lex_state = 278},
  [52] = {.lex_state = 278},
  [53] = {.lex_state = 285},
  [54] = {.lex_state = 278},
  [55] = {.lex_state = 278},
  [56] = {.lex_state = 290},
  [57] = {.lex_state = 238},
  [58] = {.lex_state = 313},
  [59] = {.lex_state = 277},
  [60] = {.lex_state = 314},
  [61] = {.lex_state = 230},
  [62] = {.lex_state = 212},
  [63] = {.lex_state = 238},
  [64] = {.lex_state = 212},
  [65] = {.lex_state = 264},
  [66] = {.lex_state = 211},
  [67] = {.lex_state = 216},
  [68] = {.lex_state = 265},
  [69] = {.lex_state = 315},
  [70] = {.lex_state = 216},
  [71] = {.lex_state = 210},
  [72] = {.lex_state = 316},
  [73] = {.lex_state = 315},
  [74] = {.lex_state = 317},
  [75] = {.lex_state = 277},
  [76] = {.lex_state = 318},
  [77] = {.lex_state = 321},
  [78] = {.lex_state = 318},
  [79] = {.lex_state = 331},
  [80] = {.lex_state = 336},
  [81] = {.lex_state = 331},
  [82] = {.lex_state = 340},
  [83] = {.lex_state = 340},
  [84] = {.lex_state = 342},
  [85] = {.lex_state = 347},
  [86] = {.lex_state = 349},
  [87] = {.lex_state = 212},
  [88] = {.lex_state = 355},
  [89] = {.lex_state = 216},
  [90] = {.lex_state = 355},
  [91] = {.lex_state = 358},
  [92] = {.lex_state = 216},
  [93] = {.lex_state = 363},
  [94] = {.lex_state = 216},
  [95] = {.lex_state = 216},
  [96] = {.lex_state = 216},
  [97] = {.lex_state = 366},
  [98] = {.lex_state = 278},
  [99] = {.lex_state = 277},
  [100] = {.lex_state = 277},
  [101] = {.lex_state = 313},
  [102] = {.lex_state = 314},
  [103] = {.lex_state = 212},
  [104] = {.lex_state = 277},
  [105] = {.lex_state = 277},
  [106] = {.lex_state = 275},
  [107] = {.lex_state = 277},
  [108] = {.lex_state = 212},
  [109] = {.lex_state = 277},
  [110] = {.lex_state = 212},
  [111] = {.lex_state = 205},
  [112] = {.lex_state = 210},
  [113] = {.lex_state = 316},
  [114] = {.lex_state = 217},
  [115] = {.lex_state = 212},
  [116] = {.lex_state = 317},
  [117] = {.lex_state = 212},
  [118] = {.lex_state = 355},
  [119] = {.lex_state = 318},
  [120] = {.lex_state = 355},
  [121] = {.lex_state = 331},
  [122] = {.lex_state = 355},
  [123] = {.lex_state = 340},
  [124] = {.lex_state = 347},
  [125] = {.lex_state = 276},
  [126] = {.lex_state = 349},
  [127] = {.lex_state = 216},
  [128] = {.lex_state = 370},
  [129] = {.lex_state = 370},
  [130] = {.lex_state = 277},
  [131] = {.lex_state = 371},
  [132] = {.lex_state = 372},
  [133] = {.lex_state = 277},
  [134] = {.lex_state = 373},
  [135] = {.lex_state = 374},
  [136] = {.lex_state = 376},
  [137] = {.lex_state = 376},
  [138] = {.lex_state = 377},
  [139] = {.lex_state = 277},
  [140] = {.lex_state = 216},
  [141] = {.lex_state = 216},
  [142] = {.lex_state = 216},
  [143] = {.lex_state = 277},
  [144] = {.lex_state = 378},
  [145] = {.lex_state = 378},
  [146] = {.lex_state = 384},
  [147] = {.lex_state = 216},
  [148] = {.lex_state = 277},
  [149] = {.lex_state = 388},
  [150] = {.lex_state = 216},
  [151] = {.lex_state = 216},
  [152] = {.lex_state = 216},
  [153] = {.lex_state = 366},
  [154] = {.lex_state = 366},
  [155] = {.lex_state = 277},
  [156] = {.lex_state = 277},
  [157] = {.lex_state = 366},
  [158] = {.lex_state = 314},
  [159] = {.lex_state = 277},
  [160] = {.lex_state = 212},
  [161] = {.lex_state = 212},
  [162] = {.lex_state = 277},
  [163] = {.lex_state = 277},
  [164] = {.lex_state = 277},
  [165] = {.lex_state = 277},
  [166] = {.lex_state = 349},
  [167] = {.lex_state = 216},
  [168] = {.lex_state = 389},
  [169] = {.lex_state = 390},
  [170] = {.lex_state = 216},
  [171] = {.lex_state = 391},
  [172] = {.lex_state = 391},
  [173] = {.lex_state = 285},
  [174] = {.lex_state = 393},
  [175] = {.lex_state = 371},
  [176] = {.lex_state = 376},
  [177] = {.lex_state = 393},
  [178] = {.lex_state = 372},
  [179] = {.lex_state = 374},
  [180] = {.lex_state = 216},
  [181] = {.lex_state = 376},
  [182] = {.lex_state = 377},
  [183] = {.lex_state = 277},
  [184] = {.lex_state = 378},
  [185] = {.lex_state = 378},
  [186] = {.lex_state = 395},
  [187] = {.lex_state = 216},
  [188] = {.lex_state = 216},
  [189] = {.lex_state = 384},
  [190] = {.lex_state = 388},
  [191] = {.lex_state = 216},
  [192] = {.lex_state = 366},
  [193] = {.lex_state = 212},
  [194] = {.lex_state = 390},
  [195] = {.lex_state = 370},
  [196] = {.lex_state = 400},
  [197] = {.lex_state = 391},
  [198] = {.lex_state = 401},
  [199] = {.lex_state = 406},
  [200] = {.lex_state = 277},
  [201] = {.lex_state = 407},
  [202] = {.lex_state = 216},
  [203] = {.lex_state = 216},
  [204] = {.lex_state = 370},
  [205] = {.lex_state = 389},
  [206] = {.lex_state = 376},
  [207] = {.lex_state = 285},
  [208] = {.lex_state = 376},
  [209] = {.lex_state = 372},
  [210] = {.lex_state = 372},
  [211] = {.lex_state = 376},
  [212] = {.lex_state = 376},
  [213] = {.lex_state = 216},
  [214] = {.lex_state = 395},
  [215] = {.lex_state = 216},
  [216] = {.lex_state = 400},
  [217] = {.lex_state = 410},
  [218] = {.lex_state = 400},
  [219] = {.lex_state = 216},
  [220] = {.lex_state = 216},
  [221] = {.lex_state = 277},
  [222] = {.lex_state = 378},
  [223] = {.lex_state = 355},
  [224] = {.lex_state = 355},
  [225] = {.lex_state = 407},
  [226] = {.lex_state = 407},
  [227] = {.lex_state = 407},
  [228] = {.lex_state = 277},
  [229] = {.lex_state = 410},
  [230] = {.lex_state = 378},
  [231] = {.lex_state = 407},
  [232] = {.lex_state = 407},
  [233] = {.lex_state = 277},
  [234] = {.lex_state = 407},
  [235] = {.lex_state = 407},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(3),
    [anon_sym_Background_COLON] = ACTIONS(1),
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
    [sym_scenario] = STATE(11),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_Background_COLON] = ACTIONS(15),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [5] = {
    [aux_sym_feature_repeat1] = STATE(14),
    [anon_sym_Feature_COLON] = ACTIONS(21),
    [sym_tag] = ACTIONS(23),
  },
  [6] = {
    [anon_sym_LF] = ACTIONS(25),
  },
  [7] = {
    [sym_language_setting] = STATE(17),
    [sym_import] = STATE(18),
    [aux_sym_background_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_tag] = ACTIONS(27),
    [anon_sym_Scenario_COLON] = ACTIONS(27),
    [sym_star] = ACTIONS(29),
  },
  [8] = {
    [sym_title] = ACTIONS(31),
  },
  [9] = {
    [sym_scenario] = STATE(20),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [10] = {
    [sym_scenario_body] = STATE(23),
    [sym_assumption_block] = STATE(26),
    [sym_assumption] = STATE(24),
    [sym_test_block] = STATE(26),
    [sym_test] = STATE(25),
    [aux_sym_scenario_body_repeat1] = STATE(26),
    [sym_given] = ACTIONS(35),
    [sym_then] = ACTIONS(37),
  },
  [11] = {
    [sym_scenario] = STATE(27),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(27),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [12] = {
    [sym_scenario_head] = STATE(28),
    [aux_sym_feature_repeat1] = STATE(29),
    [sym_tag] = ACTIONS(39),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [13] = {
    [sym_title] = ACTIONS(41),
  },
  [14] = {
    [aux_sym_feature_repeat1] = STATE(14),
    [anon_sym_Feature_COLON] = ACTIONS(43),
    [sym_tag] = ACTIONS(45),
  },
  [15] = {
    [sym_narrative] = STATE(31),
    [aux_sym_narrative_repeat1] = STATE(32),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(48),
  },
  [16] = {
    [anon_sym_Language] = ACTIONS(50),
    [anon_sym_Test] = ACTIONS(52),
  },
  [17] = {
    [sym_import] = STATE(36),
    [aux_sym_background_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_tag] = ACTIONS(54),
    [anon_sym_Scenario_COLON] = ACTIONS(54),
    [sym_star] = ACTIONS(56),
  },
  [18] = {
    [sym_import] = STATE(37),
    [aux_sym_background_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_tag] = ACTIONS(54),
    [anon_sym_Scenario_COLON] = ACTIONS(54),
    [sym_star] = ACTIONS(56),
  },
  [19] = {
    [anon_sym_LF] = ACTIONS(58),
  },
  [20] = {
    [sym_scenario] = STATE(27),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(27),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [21] = {
    [sym_language_ID] = STATE(45),
    [sym_sentence] = STATE(46),
    [sym_definition] = STATE(47),
    [sym_proposition] = STATE(47),
    [sym_universal] = STATE(48),
    [sym_universal_positve] = STATE(49),
    [sym_universal_negative] = STATE(49),
    [sym_particular] = STATE(48),
    [sym_fact] = STATE(47),
    [sym_instance] = STATE(50),
    [sym_relation] = STATE(50),
    [sym_equation] = STATE(50),
    [sym_different] = STATE(50),
    [sym_source] = STATE(47),
    [sym_pos_class] = STATE(51),
    [sym_class_name] = STATE(52),
    [sym_indiv_name] = STATE(53),
    [sym_qname] = STATE(54),
    [aux_sym_narrative_repeat1] = STATE(55),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(62),
    [anon_sym_PERCENTOWL] = ACTIONS(64),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(64),
    [anon_sym_that] = ACTIONS(66),
    [anon_sym_every] = ACTIONS(68),
    [anon_sym_no] = ACTIONS(70),
    [anon_sym_some] = ACTIONS(72),
    [anon_sym_a] = ACTIONS(74),
    [anon_sym_an] = ACTIONS(74),
  },
  [22] = {
    [sym_inference_test] = STATE(59),
    [sym_consistency_test] = STATE(59),
    [sym_infer_start] = STATE(60),
    [anon_sym_thescenariois] = ACTIONS(76),
    [anon_sym_don_SQUOTEt] = ACTIONS(78),
    [anon_sym_infer] = ACTIONS(80),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_tag] = ACTIONS(82),
    [anon_sym_Scenario_COLON] = ACTIONS(82),
  },
  [24] = {
    [sym_further_assumption] = STATE(62),
    [aux_sym_assumption_block_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_tag] = ACTIONS(84),
    [anon_sym_Scenario_COLON] = ACTIONS(84),
    [sym_And] = ACTIONS(86),
    [sym_given] = ACTIONS(84),
    [sym_then] = ACTIONS(84),
  },
  [25] = {
    [sym_further_test] = STATE(64),
    [aux_sym_test_block_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_tag] = ACTIONS(88),
    [anon_sym_Scenario_COLON] = ACTIONS(88),
    [sym_And] = ACTIONS(90),
    [sym_given] = ACTIONS(88),
    [sym_then] = ACTIONS(88),
  },
  [26] = {
    [sym_assumption_block] = STATE(65),
    [sym_assumption] = STATE(24),
    [sym_test_block] = STATE(65),
    [sym_test] = STATE(25),
    [aux_sym_scenario_body_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_tag] = ACTIONS(92),
    [anon_sym_Scenario_COLON] = ACTIONS(92),
    [sym_given] = ACTIONS(35),
    [sym_then] = ACTIONS(37),
  },
  [27] = {
    [sym_scenario] = STATE(27),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(27),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_tag] = ACTIONS(96),
    [anon_sym_Scenario_COLON] = ACTIONS(99),
  },
  [28] = {
    [sym_scenario_body] = STATE(66),
    [sym_assumption_block] = STATE(26),
    [sym_assumption] = STATE(24),
    [sym_test_block] = STATE(26),
    [sym_test] = STATE(25),
    [aux_sym_scenario_body_repeat1] = STATE(26),
    [sym_given] = ACTIONS(35),
    [sym_then] = ACTIONS(37),
  },
  [29] = {
    [aux_sym_feature_repeat1] = STATE(29),
    [sym_tag] = ACTIONS(102),
    [anon_sym_Scenario_COLON] = ACTIONS(43),
  },
  [30] = {
    [anon_sym_LF] = ACTIONS(105),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_Background_COLON] = ACTIONS(107),
    [sym_tag] = ACTIONS(107),
    [anon_sym_Scenario_COLON] = ACTIONS(107),
  },
  [32] = {
    [aux_sym_narrative_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(109),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(111),
    [anon_sym_Background_COLON] = ACTIONS(109),
    [sym_tag] = ACTIONS(109),
    [anon_sym_Scenario_COLON] = ACTIONS(109),
  },
  [33] = {
    [sym_language_ID] = STATE(69),
    [anon_sym_PERCENTOWL] = ACTIONS(64),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(64),
  },
  [34] = {
    [sym_uriref] = STATE(71),
    [aux_sym_narrative_repeat1] = STATE(72),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(113),
    [anon_sym_theontology] = ACTIONS(115),
  },
  [35] = {
    [anon_sym_Test] = ACTIONS(52),
  },
  [36] = {
    [sym_import] = STATE(37),
    [aux_sym_background_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_tag] = ACTIONS(117),
    [anon_sym_Scenario_COLON] = ACTIONS(117),
    [sym_star] = ACTIONS(56),
  },
  [37] = {
    [sym_import] = STATE(37),
    [aux_sym_background_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_tag] = ACTIONS(119),
    [anon_sym_Scenario_COLON] = ACTIONS(119),
    [sym_star] = ACTIONS(121),
  },
  [38] = {
    [sym_narrative] = STATE(73),
    [aux_sym_narrative_repeat1] = STATE(74),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(124),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_tag] = ACTIONS(126),
    [anon_sym_Scenario_COLON] = ACTIONS(126),
    [sym_delimiter] = ACTIONS(126),
    [sym_given] = ACTIONS(126),
    [sym_then] = ACTIONS(126),
    [sym_star] = ACTIONS(126),
  },
  [40] = {
    [sym_language_ID] = STATE(45),
    [sym_sentence] = STATE(75),
    [sym_definition] = STATE(47),
    [sym_proposition] = STATE(47),
    [sym_universal] = STATE(48),
    [sym_universal_positve] = STATE(49),
    [sym_universal_negative] = STATE(49),
    [sym_particular] = STATE(48),
    [sym_fact] = STATE(47),
    [sym_instance] = STATE(50),
    [sym_relation] = STATE(50),
    [sym_equation] = STATE(50),
    [sym_different] = STATE(50),
    [sym_source] = STATE(47),
    [sym_pos_class] = STATE(51),
    [sym_class_name] = STATE(52),
    [sym_indiv_name] = STATE(53),
    [sym_qname] = STATE(54),
    [aux_sym_narrative_repeat1] = STATE(55),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(62),
    [anon_sym_PERCENTOWL] = ACTIONS(64),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(64),
    [anon_sym_every] = ACTIONS(68),
    [anon_sym_no] = ACTIONS(70),
    [anon_sym_some] = ACTIONS(72),
    [anon_sym_a] = ACTIONS(74),
    [anon_sym_an] = ACTIONS(74),
  },
  [41] = {
    [sym_class_name] = STATE(76),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(78),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(128),
  },
  [42] = {
    [sym_class_name] = STATE(79),
    [sym_qname] = STATE(80),
    [aux_sym_narrative_repeat1] = STATE(81),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(130),
  },
  [43] = {
    [sym_class_name] = STATE(82),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(83),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(132),
  },
  [44] = {
    [sym_class_name] = STATE(84),
    [sym_qname] = STATE(80),
    [aux_sym_narrative_repeat1] = STATE(85),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(134),
  },
  [45] = {
    [sym_delimiter] = ACTIONS(136),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_tag] = ACTIONS(138),
    [anon_sym_Scenario_COLON] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(140),
    [sym_And] = ACTIONS(138),
    [sym_given] = ACTIONS(138),
    [sym_then] = ACTIONS(138),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_tag] = ACTIONS(142),
    [anon_sym_Scenario_COLON] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
    [sym_And] = ACTIONS(142),
    [sym_given] = ACTIONS(142),
    [sym_then] = ACTIONS(142),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_tag] = ACTIONS(144),
    [anon_sym_Scenario_COLON] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(144),
    [sym_And] = ACTIONS(144),
    [sym_given] = ACTIONS(144),
    [sym_then] = ACTIONS(144),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_tag] = ACTIONS(146),
    [anon_sym_Scenario_COLON] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(146),
    [sym_And] = ACTIONS(146),
    [sym_given] = ACTIONS(146),
    [sym_then] = ACTIONS(146),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_tag] = ACTIONS(148),
    [anon_sym_Scenario_COLON] = ACTIONS(148),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_And] = ACTIONS(148),
    [sym_given] = ACTIONS(148),
    [sym_then] = ACTIONS(148),
  },
  [51] = {
    [sym_is_defined_as] = ACTIONS(150),
  },
  [52] = {
    [anon_sym_isenumeratedas] = ACTIONS(152),
    [anon_sym_isasubclassof] = ACTIONS(154),
    [sym_is_defined_as] = ACTIONS(156),
  },
  [53] = {
    [sym_predicate_phrase] = STATE(94),
    [sym_predicate_open] = STATE(95),
    [anon_sym_is] = ACTIONS(158),
    [anon_sym_isn_SQUOTEt] = ACTIONS(160),
    [anon_sym_does] = ACTIONS(162),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(164),
    [anon_sym_has] = ACTIONS(166),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(168),
  },
  [54] = {
    [aux_sym_universal_negative_repeat1] = STATE(97),
    [anon_sym_isenumeratedas] = ACTIONS(170),
    [anon_sym_and] = ACTIONS(172),
    [anon_sym_is] = ACTIONS(174),
    [anon_sym_isasubclassof] = ACTIONS(170),
    [anon_sym_isn_SQUOTEt] = ACTIONS(176),
    [anon_sym_does] = ACTIONS(174),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(176),
    [anon_sym_has] = ACTIONS(174),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(176),
    [sym_is_defined_as] = ACTIONS(170),
  },
  [55] = {
    [aux_sym_narrative_repeat1] = STATE(98),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(178),
    [anon_sym_isenumeratedas] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(180),
    [anon_sym_is] = ACTIONS(182),
    [anon_sym_isasubclassof] = ACTIONS(180),
    [anon_sym_isn_SQUOTEt] = ACTIONS(180),
    [anon_sym_does] = ACTIONS(182),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(180),
    [anon_sym_has] = ACTIONS(182),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(180),
    [sym_is_defined_as] = ACTIONS(180),
  },
  [56] = {
    [sym_consistency] = STATE(100),
    [anon_sym_consistent] = ACTIONS(184),
    [anon_sym_inconsistent] = ACTIONS(184),
  },
  [57] = {
    [anon_sym_infer] = ACTIONS(186),
  },
  [58] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(188),
    [anon_sym_PERCENTOWL] = ACTIONS(190),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(190),
    [anon_sym_that] = ACTIONS(192),
    [anon_sym_every] = ACTIONS(190),
    [anon_sym_no] = ACTIONS(190),
    [anon_sym_a] = ACTIONS(190),
    [anon_sym_an] = ACTIONS(190),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_tag] = ACTIONS(194),
    [anon_sym_Scenario_COLON] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(196),
    [sym_And] = ACTIONS(194),
    [sym_given] = ACTIONS(194),
    [sym_then] = ACTIONS(194),
  },
  [60] = {
    [sym_language_ID] = STATE(45),
    [sym_infer_sentence] = STATE(104),
    [sym_definition] = STATE(105),
    [sym_universal] = STATE(105),
    [sym_universal_positve] = STATE(49),
    [sym_universal_negative] = STATE(49),
    [sym_fact] = STATE(105),
    [sym_instance] = STATE(50),
    [sym_relation] = STATE(50),
    [sym_equation] = STATE(50),
    [sym_different] = STATE(50),
    [sym_source] = STATE(105),
    [sym_pos_class] = STATE(51),
    [sym_class_name] = STATE(52),
    [sym_indiv_name] = STATE(53),
    [sym_qname] = STATE(54),
    [aux_sym_narrative_repeat1] = STATE(55),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(62),
    [anon_sym_PERCENTOWL] = ACTIONS(64),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(64),
    [anon_sym_every] = ACTIONS(68),
    [anon_sym_no] = ACTIONS(70),
    [anon_sym_a] = ACTIONS(74),
    [anon_sym_an] = ACTIONS(74),
  },
  [61] = {
    [sym_language_ID] = STATE(45),
    [sym_sentence] = STATE(107),
    [sym_definition] = STATE(47),
    [sym_proposition] = STATE(47),
    [sym_universal] = STATE(48),
    [sym_universal_positve] = STATE(49),
    [sym_universal_negative] = STATE(49),
    [sym_particular] = STATE(48),
    [sym_fact] = STATE(47),
    [sym_instance] = STATE(50),
    [sym_relation] = STATE(50),
    [sym_equation] = STATE(50),
    [sym_different] = STATE(50),
    [sym_source] = STATE(47),
    [sym_pos_class] = STATE(51),
    [sym_class_name] = STATE(52),
    [sym_indiv_name] = STATE(53),
    [sym_qname] = STATE(54),
    [aux_sym_narrative_repeat1] = STATE(55),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(62),
    [anon_sym_PERCENTOWL] = ACTIONS(64),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(64),
    [anon_sym_that] = ACTIONS(198),
    [anon_sym_every] = ACTIONS(68),
    [anon_sym_no] = ACTIONS(70),
    [anon_sym_some] = ACTIONS(72),
    [anon_sym_a] = ACTIONS(74),
    [anon_sym_an] = ACTIONS(74),
  },
  [62] = {
    [sym_further_assumption] = STATE(108),
    [aux_sym_assumption_block_repeat1] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_tag] = ACTIONS(200),
    [anon_sym_Scenario_COLON] = ACTIONS(200),
    [sym_And] = ACTIONS(86),
    [sym_given] = ACTIONS(200),
    [sym_then] = ACTIONS(200),
  },
  [63] = {
    [sym_inference_test] = STATE(109),
    [sym_consistency_test] = STATE(109),
    [sym_infer_start] = STATE(60),
    [anon_sym_thescenariois] = ACTIONS(76),
    [anon_sym_don_SQUOTEt] = ACTIONS(78),
    [anon_sym_infer] = ACTIONS(80),
  },
  [64] = {
    [sym_further_test] = STATE(110),
    [aux_sym_test_block_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_tag] = ACTIONS(202),
    [anon_sym_Scenario_COLON] = ACTIONS(202),
    [sym_And] = ACTIONS(90),
    [sym_given] = ACTIONS(202),
    [sym_then] = ACTIONS(202),
  },
  [65] = {
    [sym_assumption_block] = STATE(65),
    [sym_assumption] = STATE(24),
    [sym_test_block] = STATE(65),
    [sym_test] = STATE(25),
    [aux_sym_scenario_body_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym_tag] = ACTIONS(204),
    [anon_sym_Scenario_COLON] = ACTIONS(204),
    [sym_given] = ACTIONS(206),
    [sym_then] = ACTIONS(209),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym_tag] = ACTIONS(212),
    [anon_sym_Scenario_COLON] = ACTIONS(212),
  },
  [67] = {
    [sym_narrative] = STATE(111),
    [aux_sym_narrative_repeat1] = STATE(32),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(48),
  },
  [68] = {
    [aux_sym_narrative_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(216),
    [anon_sym_Background_COLON] = ACTIONS(214),
    [sym_tag] = ACTIONS(214),
    [anon_sym_Scenario_COLON] = ACTIONS(214),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_tag] = ACTIONS(219),
    [anon_sym_Scenario_COLON] = ACTIONS(219),
    [sym_given] = ACTIONS(219),
    [sym_then] = ACTIONS(219),
    [sym_star] = ACTIONS(219),
  },
  [70] = {
    [sym_uriref] = STATE(112),
    [aux_sym_narrative_repeat1] = STATE(72),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(221),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_tag] = ACTIONS(223),
    [anon_sym_Scenario_COLON] = ACTIONS(223),
    [sym_star] = ACTIONS(223),
  },
  [72] = {
    [aux_sym_narrative_repeat1] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(225),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(227),
    [sym_tag] = ACTIONS(225),
    [anon_sym_Scenario_COLON] = ACTIONS(225),
    [sym_star] = ACTIONS(225),
  },
  [73] = {
    [sym_language_setting] = STATE(115),
    [sym_given] = ACTIONS(229),
    [sym_then] = ACTIONS(229),
    [sym_star] = ACTIONS(231),
  },
  [74] = {
    [aux_sym_narrative_repeat1] = STATE(116),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(233),
    [sym_given] = ACTIONS(109),
    [sym_then] = ACTIONS(109),
    [sym_star] = ACTIONS(109),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_tag] = ACTIONS(235),
    [anon_sym_Scenario_COLON] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(237),
    [sym_And] = ACTIONS(235),
    [sym_given] = ACTIONS(235),
    [sym_then] = ACTIONS(235),
  },
  [76] = {
    [anon_sym_is] = ACTIONS(239),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_tag] = ACTIONS(170),
    [anon_sym_Scenario_COLON] = ACTIONS(170),
    [anon_sym_that] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_and] = ACTIONS(170),
    [anon_sym_is] = ACTIONS(170),
    [anon_sym_are] = ACTIONS(241),
    [anon_sym_aren_SQUOTEt] = ACTIONS(170),
    [anon_sym_nor] = ACTIONS(170),
    [anon_sym_or] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_who] = ACTIONS(170),
    [anon_sym_which] = ACTIONS(170),
    [sym_And] = ACTIONS(170),
    [sym_given] = ACTIONS(170),
    [sym_then] = ACTIONS(170),
  },
  [78] = {
    [aux_sym_narrative_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(243),
    [anon_sym_is] = ACTIONS(180),
  },
  [79] = {
    [anon_sym_isa] = ACTIONS(245),
  },
  [80] = {
    [anon_sym_isa] = ACTIONS(170),
    [sym_is_defined_as] = ACTIONS(170),
  },
  [81] = {
    [aux_sym_narrative_repeat1] = STATE(121),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(247),
    [anon_sym_isa] = ACTIONS(180),
  },
  [82] = {
    [anon_sym_are] = ACTIONS(249),
    [anon_sym_aren_SQUOTEt] = ACTIONS(251),
  },
  [83] = {
    [aux_sym_narrative_repeat1] = STATE(123),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(253),
    [anon_sym_are] = ACTIONS(182),
    [anon_sym_aren_SQUOTEt] = ACTIONS(180),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_tag] = ACTIONS(255),
    [anon_sym_Scenario_COLON] = ACTIONS(255),
    [anon_sym_that] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_nor] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_who] = ACTIONS(255),
    [anon_sym_which] = ACTIONS(255),
    [sym_And] = ACTIONS(255),
    [sym_given] = ACTIONS(255),
    [sym_then] = ACTIONS(255),
    [sym_is_defined_as] = ACTIONS(255),
  },
  [85] = {
    [aux_sym_narrative_repeat1] = STATE(124),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(257),
    [sym_is_defined_as] = ACTIONS(180),
  },
  [86] = {
    [sym_source_body] = STATE(125),
    [aux_sym_source_body_repeat1] = STATE(126),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(261),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(261),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_tag] = ACTIONS(235),
    [anon_sym_Scenario_COLON] = ACTIONS(235),
    [sym_And] = ACTIONS(235),
    [sym_given] = ACTIONS(235),
    [sym_then] = ACTIONS(235),
  },
  [88] = {
    [sym_class_expression] = STATE(130),
    [sym_pos_class] = STATE(131),
    [sym_class_atom] = STATE(132),
    [sym_conjunction] = STATE(133),
    [sym_disjunction] = STATE(133),
    [sym_qualified_class] = STATE(133),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(135),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(263),
    [anon_sym_a] = ACTIONS(265),
    [anon_sym_an] = ACTIONS(265),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_neither] = ACTIONS(269),
  },
  [89] = {
    [sym_indiv_name] = STATE(136),
    [sym_qname] = STATE(137),
    [aux_sym_narrative_repeat1] = STATE(138),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(271),
  },
  [90] = {
    [sym_class_expression] = STATE(139),
    [sym_pos_class] = STATE(131),
    [sym_class_atom] = STATE(132),
    [sym_conjunction] = STATE(133),
    [sym_disjunction] = STATE(133),
    [sym_qualified_class] = STATE(133),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(135),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(263),
    [anon_sym_a] = ACTIONS(265),
    [anon_sym_an] = ACTIONS(265),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_neither] = ACTIONS(269),
  },
  [91] = {
    [sym_class_expression] = STATE(143),
    [sym_pos_class] = STATE(131),
    [sym_class_atom] = STATE(132),
    [sym_conjunction] = STATE(133),
    [sym_disjunction] = STATE(133),
    [sym_qualified_class] = STATE(133),
    [sym_class_name] = STATE(134),
    [sym_predicate_fragement] = STATE(144),
    [sym_qname] = STATE(145),
    [aux_sym_narrative_repeat1] = STATE(146),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(273),
    [anon_sym_thesameas] = ACTIONS(275),
    [anon_sym_a] = ACTIONS(277),
    [anon_sym_an] = ACTIONS(277),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_neither] = ACTIONS(269),
    [anon_sym_the] = ACTIONS(279),
  },
  [92] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(281),
  },
  [93] = {
    [anon_sym_as] = ACTIONS(283),
  },
  [94] = {
    [sym_indiv_name] = STATE(148),
    [sym_qname] = STATE(137),
    [aux_sym_narrative_repeat1] = STATE(149),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(285),
  },
  [95] = {
    [sym_predicate_name] = STATE(150),
    [sym_qname] = STATE(151),
    [aux_sym_narrative_repeat1] = STATE(152),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(287),
  },
  [96] = {
    [sym_qname] = STATE(153),
    [aux_sym_narrative_repeat1] = STATE(154),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(289),
  },
  [97] = {
    [aux_sym_universal_negative_repeat1] = STATE(157),
    [anon_sym_and] = ACTIONS(172),
    [anon_sym_aredisjoint] = ACTIONS(291),
    [sym_are_different] = ACTIONS(293),
  },
  [98] = {
    [aux_sym_narrative_repeat1] = STATE(98),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(295),
    [anon_sym_isenumeratedas] = ACTIONS(214),
    [anon_sym_and] = ACTIONS(214),
    [anon_sym_is] = ACTIONS(298),
    [anon_sym_isasubclassof] = ACTIONS(214),
    [anon_sym_isn_SQUOTEt] = ACTIONS(214),
    [anon_sym_does] = ACTIONS(298),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(214),
    [anon_sym_has] = ACTIONS(298),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(214),
    [sym_is_defined_as] = ACTIONS(214),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym_tag] = ACTIONS(300),
    [anon_sym_Scenario_COLON] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(300),
    [sym_And] = ACTIONS(300),
    [sym_given] = ACTIONS(300),
    [sym_then] = ACTIONS(300),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_tag] = ACTIONS(302),
    [anon_sym_Scenario_COLON] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(302),
    [sym_And] = ACTIONS(302),
    [sym_given] = ACTIONS(302),
    [sym_then] = ACTIONS(302),
  },
  [101] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(304),
    [anon_sym_PERCENTOWL] = ACTIONS(306),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(306),
    [anon_sym_that] = ACTIONS(308),
    [anon_sym_every] = ACTIONS(306),
    [anon_sym_no] = ACTIONS(306),
    [anon_sym_a] = ACTIONS(306),
    [anon_sym_an] = ACTIONS(306),
  },
  [102] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(304),
    [anon_sym_PERCENTOWL] = ACTIONS(306),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(306),
    [anon_sym_every] = ACTIONS(306),
    [anon_sym_no] = ACTIONS(306),
    [anon_sym_a] = ACTIONS(306),
    [anon_sym_an] = ACTIONS(306),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_tag] = ACTIONS(310),
    [anon_sym_Scenario_COLON] = ACTIONS(310),
    [sym_And] = ACTIONS(310),
    [sym_given] = ACTIONS(310),
    [sym_then] = ACTIONS(310),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [sym_tag] = ACTIONS(312),
    [anon_sym_Scenario_COLON] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [sym_And] = ACTIONS(312),
    [sym_given] = ACTIONS(312),
    [sym_then] = ACTIONS(312),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym_tag] = ACTIONS(314),
    [anon_sym_Scenario_COLON] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [sym_And] = ACTIONS(314),
    [sym_given] = ACTIONS(314),
    [sym_then] = ACTIONS(314),
  },
  [106] = {
    [sym_language_ID] = STATE(45),
    [sym_sentence] = STATE(159),
    [sym_definition] = STATE(47),
    [sym_proposition] = STATE(47),
    [sym_universal] = STATE(48),
    [sym_universal_positve] = STATE(49),
    [sym_universal_negative] = STATE(49),
    [sym_particular] = STATE(48),
    [sym_fact] = STATE(47),
    [sym_instance] = STATE(50),
    [sym_relation] = STATE(50),
    [sym_equation] = STATE(50),
    [sym_different] = STATE(50),
    [sym_source] = STATE(47),
    [sym_pos_class] = STATE(51),
    [sym_class_name] = STATE(52),
    [sym_indiv_name] = STATE(53),
    [sym_qname] = STATE(54),
    [aux_sym_narrative_repeat1] = STATE(55),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(62),
    [anon_sym_PERCENTOWL] = ACTIONS(64),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(64),
    [anon_sym_every] = ACTIONS(68),
    [anon_sym_no] = ACTIONS(70),
    [anon_sym_some] = ACTIONS(72),
    [anon_sym_a] = ACTIONS(74),
    [anon_sym_an] = ACTIONS(74),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [sym_tag] = ACTIONS(316),
    [anon_sym_Scenario_COLON] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(318),
    [sym_And] = ACTIONS(316),
    [sym_given] = ACTIONS(316),
    [sym_then] = ACTIONS(316),
  },
  [108] = {
    [sym_further_assumption] = STATE(108),
    [aux_sym_assumption_block_repeat1] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(320),
    [sym_tag] = ACTIONS(320),
    [anon_sym_Scenario_COLON] = ACTIONS(320),
    [sym_And] = ACTIONS(322),
    [sym_given] = ACTIONS(320),
    [sym_then] = ACTIONS(320),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [sym_tag] = ACTIONS(325),
    [anon_sym_Scenario_COLON] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(327),
    [sym_And] = ACTIONS(325),
    [sym_given] = ACTIONS(325),
    [sym_then] = ACTIONS(325),
  },
  [110] = {
    [sym_further_test] = STATE(110),
    [aux_sym_test_block_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(329),
    [sym_tag] = ACTIONS(329),
    [anon_sym_Scenario_COLON] = ACTIONS(329),
    [sym_And] = ACTIONS(331),
    [sym_given] = ACTIONS(329),
    [sym_then] = ACTIONS(329),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_Background_COLON] = ACTIONS(334),
    [sym_tag] = ACTIONS(334),
    [anon_sym_Scenario_COLON] = ACTIONS(334),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym_tag] = ACTIONS(336),
    [anon_sym_Scenario_COLON] = ACTIONS(336),
    [sym_star] = ACTIONS(336),
  },
  [113] = {
    [aux_sym_narrative_repeat1] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(338),
    [sym_tag] = ACTIONS(214),
    [anon_sym_Scenario_COLON] = ACTIONS(214),
    [sym_star] = ACTIONS(214),
  },
  [114] = {
    [anon_sym_Language] = ACTIONS(50),
  },
  [115] = {
    [sym_given] = ACTIONS(341),
    [sym_then] = ACTIONS(341),
  },
  [116] = {
    [aux_sym_narrative_repeat1] = STATE(116),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(343),
    [sym_given] = ACTIONS(214),
    [sym_then] = ACTIONS(214),
    [sym_star] = ACTIONS(214),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym_tag] = ACTIONS(346),
    [anon_sym_Scenario_COLON] = ACTIONS(346),
    [sym_And] = ACTIONS(346),
    [sym_given] = ACTIONS(346),
    [sym_then] = ACTIONS(346),
  },
  [118] = {
    [sym_class_expression] = STATE(162),
    [sym_pos_class] = STATE(131),
    [sym_class_atom] = STATE(132),
    [sym_conjunction] = STATE(133),
    [sym_disjunction] = STATE(133),
    [sym_qualified_class] = STATE(133),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(135),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(263),
    [anon_sym_a] = ACTIONS(265),
    [anon_sym_an] = ACTIONS(265),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_neither] = ACTIONS(269),
  },
  [119] = {
    [aux_sym_narrative_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(348),
    [anon_sym_is] = ACTIONS(214),
  },
  [120] = {
    [sym_class_expression] = STATE(163),
    [sym_pos_class] = STATE(131),
    [sym_class_atom] = STATE(132),
    [sym_conjunction] = STATE(133),
    [sym_disjunction] = STATE(133),
    [sym_qualified_class] = STATE(133),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(135),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(263),
    [anon_sym_a] = ACTIONS(265),
    [anon_sym_an] = ACTIONS(265),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_neither] = ACTIONS(269),
  },
  [121] = {
    [aux_sym_narrative_repeat1] = STATE(121),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(351),
    [anon_sym_isa] = ACTIONS(214),
  },
  [122] = {
    [sym_class_expression] = STATE(164),
    [sym_pos_class] = STATE(131),
    [sym_class_atom] = STATE(132),
    [sym_conjunction] = STATE(133),
    [sym_disjunction] = STATE(133),
    [sym_qualified_class] = STATE(133),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(135),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(263),
    [anon_sym_a] = ACTIONS(265),
    [anon_sym_an] = ACTIONS(265),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_neither] = ACTIONS(269),
  },
  [123] = {
    [aux_sym_narrative_repeat1] = STATE(123),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(354),
    [anon_sym_are] = ACTIONS(298),
    [anon_sym_aren_SQUOTEt] = ACTIONS(214),
  },
  [124] = {
    [aux_sym_narrative_repeat1] = STATE(124),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(357),
    [sym_is_defined_as] = ACTIONS(214),
  },
  [125] = {
    [sym_delimiter] = ACTIONS(360),
  },
  [126] = {
    [aux_sym_source_body_repeat1] = STATE(166),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(364),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(364),
    [sym_delimiter] = ACTIONS(366),
  },
  [127] = {
    [sym_class_name] = STATE(84),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(135),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(368),
  },
  [128] = {
    [sym_pos_class] = STATE(168),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(169),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(370),
    [anon_sym_a] = ACTIONS(372),
    [anon_sym_an] = ACTIONS(372),
  },
  [129] = {
    [sym_pos_class] = STATE(171),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(172),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(374),
    [anon_sym_a] = ACTIONS(376),
    [anon_sym_an] = ACTIONS(376),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [sym_tag] = ACTIONS(378),
    [anon_sym_Scenario_COLON] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(378),
    [sym_And] = ACTIONS(378),
    [sym_given] = ACTIONS(378),
    [sym_then] = ACTIONS(378),
  },
  [131] = {
    [aux_sym_conjunction_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(380),
    [sym_tag] = ACTIONS(380),
    [anon_sym_Scenario_COLON] = ACTIONS(380),
    [anon_sym_that] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(380),
    [anon_sym_and] = ACTIONS(384),
    [anon_sym_or] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_who] = ACTIONS(382),
    [anon_sym_which] = ACTIONS(382),
    [sym_And] = ACTIONS(380),
    [sym_given] = ACTIONS(380),
    [sym_then] = ACTIONS(380),
  },
  [132] = {
    [aux_sym_disjunction_repeat1] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(388),
    [sym_tag] = ACTIONS(388),
    [anon_sym_Scenario_COLON] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_or] = ACTIONS(390),
    [sym_And] = ACTIONS(388),
    [sym_given] = ACTIONS(388),
    [sym_then] = ACTIONS(388),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [sym_tag] = ACTIONS(388),
    [anon_sym_Scenario_COLON] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [sym_And] = ACTIONS(388),
    [sym_given] = ACTIONS(388),
    [sym_then] = ACTIONS(388),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_tag] = ACTIONS(156),
    [anon_sym_Scenario_COLON] = ACTIONS(156),
    [anon_sym_that] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_and] = ACTIONS(156),
    [anon_sym_nor] = ACTIONS(156),
    [anon_sym_or] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_who] = ACTIONS(156),
    [anon_sym_which] = ACTIONS(156),
    [sym_And] = ACTIONS(156),
    [sym_given] = ACTIONS(156),
    [sym_then] = ACTIONS(156),
  },
  [135] = {
    [aux_sym_narrative_repeat1] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(392),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_that] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(180),
    [anon_sym_or] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_who] = ACTIONS(180),
    [anon_sym_which] = ACTIONS(180),
    [sym_And] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [136] = {
    [aux_sym_definition_repeat1] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(378),
    [sym_tag] = ACTIONS(378),
    [anon_sym_Scenario_COLON] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(378),
    [anon_sym_and] = ACTIONS(394),
    [sym_And] = ACTIONS(378),
    [sym_given] = ACTIONS(378),
    [sym_then] = ACTIONS(378),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_tag] = ACTIONS(176),
    [anon_sym_Scenario_COLON] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(176),
    [anon_sym_and] = ACTIONS(176),
    [sym_And] = ACTIONS(176),
    [sym_given] = ACTIONS(176),
    [sym_then] = ACTIONS(176),
  },
  [138] = {
    [aux_sym_narrative_repeat1] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(396),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(180),
    [sym_And] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [sym_tag] = ACTIONS(398),
    [anon_sym_Scenario_COLON] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [sym_And] = ACTIONS(398),
    [sym_given] = ACTIONS(398),
    [sym_then] = ACTIONS(398),
  },
  [140] = {
    [sym_indiv_name] = STATE(183),
    [sym_qname] = STATE(137),
    [aux_sym_narrative_repeat1] = STATE(149),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(285),
  },
  [141] = {
    [sym_class_name] = STATE(84),
    [sym_predicate_fragement] = STATE(184),
    [sym_qname] = STATE(145),
    [aux_sym_narrative_repeat1] = STATE(146),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(400),
  },
  [142] = {
    [sym_predicate_fragement] = STATE(184),
    [sym_qname] = STATE(185),
    [aux_sym_narrative_repeat1] = STATE(186),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(402),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [sym_tag] = ACTIONS(404),
    [anon_sym_Scenario_COLON] = ACTIONS(404),
    [anon_sym_DOT] = ACTIONS(404),
    [sym_And] = ACTIONS(404),
    [sym_given] = ACTIONS(404),
    [sym_then] = ACTIONS(404),
  },
  [144] = {
    [sym_predicate_end] = STATE(188),
    [anon_sym_of] = ACTIONS(406),
    [anon_sym_than] = ACTIONS(406),
    [anon_sym_to] = ACTIONS(406),
    [anon_sym_on] = ACTIONS(406),
    [anon_sym_in] = ACTIONS(406),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_tag] = ACTIONS(170),
    [anon_sym_Scenario_COLON] = ACTIONS(170),
    [anon_sym_that] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_and] = ACTIONS(170),
    [anon_sym_or] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_who] = ACTIONS(170),
    [anon_sym_which] = ACTIONS(170),
    [anon_sym_of] = ACTIONS(408),
    [anon_sym_than] = ACTIONS(408),
    [anon_sym_to] = ACTIONS(408),
    [anon_sym_on] = ACTIONS(408),
    [anon_sym_in] = ACTIONS(408),
    [sym_And] = ACTIONS(170),
    [sym_given] = ACTIONS(170),
    [sym_then] = ACTIONS(170),
  },
  [146] = {
    [aux_sym_narrative_repeat1] = STATE(189),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(410),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_that] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(180),
    [anon_sym_or] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_who] = ACTIONS(180),
    [anon_sym_which] = ACTIONS(180),
    [anon_sym_of] = ACTIONS(180),
    [anon_sym_than] = ACTIONS(180),
    [anon_sym_to] = ACTIONS(180),
    [anon_sym_on] = ACTIONS(180),
    [anon_sym_in] = ACTIONS(180),
    [sym_And] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [147] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(412),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [sym_tag] = ACTIONS(414),
    [anon_sym_Scenario_COLON] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(414),
    [sym_And] = ACTIONS(414),
    [sym_given] = ACTIONS(414),
    [sym_then] = ACTIONS(414),
  },
  [149] = {
    [aux_sym_narrative_repeat1] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(416),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [sym_And] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [150] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(418),
  },
  [151] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(420),
  },
  [152] = {
    [aux_sym_narrative_repeat1] = STATE(191),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(180),
  },
  [153] = {
    [anon_sym_and] = ACTIONS(422),
    [anon_sym_aredisjoint] = ACTIONS(422),
    [sym_are_different] = ACTIONS(422),
  },
  [154] = {
    [aux_sym_narrative_repeat1] = STATE(192),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(424),
    [anon_sym_and] = ACTIONS(180),
    [anon_sym_aredisjoint] = ACTIONS(180),
    [sym_are_different] = ACTIONS(180),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [sym_tag] = ACTIONS(426),
    [anon_sym_Scenario_COLON] = ACTIONS(426),
    [anon_sym_DOT] = ACTIONS(426),
    [sym_And] = ACTIONS(426),
    [sym_given] = ACTIONS(426),
    [sym_then] = ACTIONS(426),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym_tag] = ACTIONS(428),
    [anon_sym_Scenario_COLON] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(428),
    [sym_And] = ACTIONS(428),
    [sym_given] = ACTIONS(428),
    [sym_then] = ACTIONS(428),
  },
  [157] = {
    [aux_sym_universal_negative_repeat1] = STATE(157),
    [anon_sym_and] = ACTIONS(430),
    [anon_sym_aredisjoint] = ACTIONS(422),
    [sym_are_different] = ACTIONS(422),
  },
  [158] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(433),
    [anon_sym_PERCENTOWL] = ACTIONS(435),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(435),
    [anon_sym_every] = ACTIONS(435),
    [anon_sym_no] = ACTIONS(435),
    [anon_sym_a] = ACTIONS(435),
    [anon_sym_an] = ACTIONS(435),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [sym_tag] = ACTIONS(437),
    [anon_sym_Scenario_COLON] = ACTIONS(437),
    [anon_sym_DOT] = ACTIONS(439),
    [sym_And] = ACTIONS(437),
    [sym_given] = ACTIONS(437),
    [sym_then] = ACTIONS(437),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [sym_tag] = ACTIONS(437),
    [anon_sym_Scenario_COLON] = ACTIONS(437),
    [sym_And] = ACTIONS(437),
    [sym_given] = ACTIONS(437),
    [sym_then] = ACTIONS(437),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_tag] = ACTIONS(441),
    [anon_sym_Scenario_COLON] = ACTIONS(441),
    [sym_And] = ACTIONS(441),
    [sym_given] = ACTIONS(441),
    [sym_then] = ACTIONS(441),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_tag] = ACTIONS(443),
    [anon_sym_Scenario_COLON] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym_And] = ACTIONS(443),
    [sym_given] = ACTIONS(443),
    [sym_then] = ACTIONS(443),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_tag] = ACTIONS(445),
    [anon_sym_Scenario_COLON] = ACTIONS(445),
    [anon_sym_DOT] = ACTIONS(445),
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
    [aux_sym_source_body_repeat1] = STATE(166),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(454),
    [sym_delimiter] = ACTIONS(457),
  },
  [167] = {
    [sym_class_name] = STATE(84),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(169),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(459),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [sym_tag] = ACTIONS(461),
    [anon_sym_Scenario_COLON] = ACTIONS(461),
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_and] = ACTIONS(461),
    [anon_sym_or] = ACTIONS(461),
    [sym_And] = ACTIONS(461),
    [sym_given] = ACTIONS(461),
    [sym_then] = ACTIONS(461),
  },
  [169] = {
    [aux_sym_narrative_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(463),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_or] = ACTIONS(180),
    [sym_And] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [170] = {
    [sym_class_name] = STATE(84),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(172),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(465),
  },
  [171] = {
    [aux_sym_conjunction_repeat2] = STATE(196),
    [anon_sym_nor] = ACTIONS(467),
  },
  [172] = {
    [aux_sym_narrative_repeat1] = STATE(197),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(469),
    [anon_sym_nor] = ACTIONS(180),
  },
  [173] = {
    [sym_qualifier] = STATE(200),
    [sym_predicate_phrase] = STATE(201),
    [sym_predicate_open] = STATE(202),
    [anon_sym_is] = ACTIONS(471),
    [anon_sym_isn_SQUOTEt] = ACTIONS(473),
    [anon_sym_does] = ACTIONS(162),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(164),
    [anon_sym_has] = ACTIONS(166),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(168),
  },
  [174] = {
    [sym_pos_class] = STATE(205),
    [sym_class_atom] = STATE(206),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(138),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(475),
    [anon_sym_a] = ACTIONS(477),
    [anon_sym_an] = ACTIONS(477),
    [anon_sym_not] = ACTIONS(479),
  },
  [175] = {
    [anon_sym_that] = ACTIONS(481),
    [anon_sym_who] = ACTIONS(481),
    [anon_sym_which] = ACTIONS(481),
  },
  [176] = {
    [aux_sym_conjunction_repeat1] = STATE(208),
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_tag] = ACTIONS(483),
    [anon_sym_Scenario_COLON] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(483),
    [anon_sym_and] = ACTIONS(384),
    [sym_And] = ACTIONS(483),
    [sym_given] = ACTIONS(483),
    [sym_then] = ACTIONS(483),
  },
  [177] = {
    [sym_pos_class] = STATE(205),
    [sym_class_atom] = STATE(209),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(169),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(370),
    [anon_sym_a] = ACTIONS(372),
    [anon_sym_an] = ACTIONS(372),
    [anon_sym_not] = ACTIONS(267),
  },
  [178] = {
    [aux_sym_disjunction_repeat1] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(485),
    [sym_tag] = ACTIONS(485),
    [anon_sym_Scenario_COLON] = ACTIONS(485),
    [anon_sym_DOT] = ACTIONS(485),
    [anon_sym_or] = ACTIONS(390),
    [sym_And] = ACTIONS(485),
    [sym_given] = ACTIONS(485),
    [sym_then] = ACTIONS(485),
  },
  [179] = {
    [aux_sym_narrative_repeat1] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(487),
    [sym_tag] = ACTIONS(214),
    [anon_sym_Scenario_COLON] = ACTIONS(214),
    [anon_sym_that] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_and] = ACTIONS(214),
    [anon_sym_or] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_who] = ACTIONS(214),
    [anon_sym_which] = ACTIONS(214),
    [sym_And] = ACTIONS(214),
    [sym_given] = ACTIONS(214),
    [sym_then] = ACTIONS(214),
  },
  [180] = {
    [sym_indiv_name] = STATE(211),
    [sym_qname] = STATE(137),
    [aux_sym_narrative_repeat1] = STATE(138),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(271),
  },
  [181] = {
    [aux_sym_definition_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(490),
    [sym_tag] = ACTIONS(490),
    [anon_sym_Scenario_COLON] = ACTIONS(490),
    [anon_sym_DOT] = ACTIONS(490),
    [anon_sym_and] = ACTIONS(394),
    [sym_And] = ACTIONS(490),
    [sym_given] = ACTIONS(490),
    [sym_then] = ACTIONS(490),
  },
  [182] = {
    [aux_sym_narrative_repeat1] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(492),
    [sym_tag] = ACTIONS(214),
    [anon_sym_Scenario_COLON] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_and] = ACTIONS(214),
    [sym_And] = ACTIONS(214),
    [sym_given] = ACTIONS(214),
    [sym_then] = ACTIONS(214),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [sym_tag] = ACTIONS(495),
    [anon_sym_Scenario_COLON] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [sym_And] = ACTIONS(495),
    [sym_given] = ACTIONS(495),
    [sym_then] = ACTIONS(495),
  },
  [184] = {
    [sym_predicate_end] = STATE(213),
    [anon_sym_of] = ACTIONS(406),
    [anon_sym_than] = ACTIONS(406),
    [anon_sym_to] = ACTIONS(406),
    [anon_sym_on] = ACTIONS(406),
    [anon_sym_in] = ACTIONS(406),
  },
  [185] = {
    [anon_sym_of] = ACTIONS(408),
    [anon_sym_than] = ACTIONS(408),
    [anon_sym_to] = ACTIONS(408),
    [anon_sym_on] = ACTIONS(408),
    [anon_sym_in] = ACTIONS(408),
  },
  [186] = {
    [aux_sym_narrative_repeat1] = STATE(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(497),
    [anon_sym_of] = ACTIONS(180),
    [anon_sym_than] = ACTIONS(180),
    [anon_sym_to] = ACTIONS(180),
    [anon_sym_on] = ACTIONS(180),
    [anon_sym_in] = ACTIONS(180),
  },
  [187] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(499),
  },
  [188] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(501),
  },
  [189] = {
    [aux_sym_narrative_repeat1] = STATE(189),
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(503),
    [sym_tag] = ACTIONS(214),
    [anon_sym_Scenario_COLON] = ACTIONS(214),
    [anon_sym_that] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_and] = ACTIONS(214),
    [anon_sym_or] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_who] = ACTIONS(214),
    [anon_sym_which] = ACTIONS(214),
    [anon_sym_of] = ACTIONS(214),
    [anon_sym_than] = ACTIONS(214),
    [anon_sym_to] = ACTIONS(214),
    [anon_sym_on] = ACTIONS(214),
    [anon_sym_in] = ACTIONS(214),
    [sym_And] = ACTIONS(214),
    [sym_given] = ACTIONS(214),
    [sym_then] = ACTIONS(214),
  },
  [190] = {
    [aux_sym_narrative_repeat1] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(506),
    [sym_tag] = ACTIONS(214),
    [anon_sym_Scenario_COLON] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [sym_And] = ACTIONS(214),
    [sym_given] = ACTIONS(214),
    [sym_then] = ACTIONS(214),
  },
  [191] = {
    [aux_sym_narrative_repeat1] = STATE(191),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(509),
  },
  [192] = {
    [aux_sym_narrative_repeat1] = STATE(192),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(512),
    [anon_sym_and] = ACTIONS(214),
    [anon_sym_aredisjoint] = ACTIONS(214),
    [sym_are_different] = ACTIONS(214),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [sym_tag] = ACTIONS(515),
    [anon_sym_Scenario_COLON] = ACTIONS(515),
    [sym_And] = ACTIONS(515),
    [sym_given] = ACTIONS(515),
    [sym_then] = ACTIONS(515),
  },
  [194] = {
    [aux_sym_narrative_repeat1] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(517),
    [sym_tag] = ACTIONS(214),
    [anon_sym_Scenario_COLON] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_or] = ACTIONS(214),
    [sym_And] = ACTIONS(214),
    [sym_given] = ACTIONS(214),
    [sym_then] = ACTIONS(214),
  },
  [195] = {
    [sym_pos_class] = STATE(216),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(217),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(520),
    [anon_sym_a] = ACTIONS(522),
    [anon_sym_an] = ACTIONS(522),
  },
  [196] = {
    [aux_sym_conjunction_repeat2] = STATE(218),
    [ts_builtin_sym_end] = ACTIONS(524),
    [sym_tag] = ACTIONS(524),
    [anon_sym_Scenario_COLON] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [anon_sym_nor] = ACTIONS(467),
    [sym_And] = ACTIONS(524),
    [sym_given] = ACTIONS(524),
    [sym_then] = ACTIONS(524),
  },
  [197] = {
    [aux_sym_narrative_repeat1] = STATE(197),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(526),
    [anon_sym_nor] = ACTIONS(214),
  },
  [198] = {
    [sym_class_expression] = STATE(221),
    [sym_pos_class] = STATE(131),
    [sym_class_atom] = STATE(132),
    [sym_conjunction] = STATE(133),
    [sym_disjunction] = STATE(133),
    [sym_qualified_class] = STATE(133),
    [sym_class_name] = STATE(134),
    [sym_predicate_fragement] = STATE(222),
    [sym_qname] = STATE(145),
    [aux_sym_narrative_repeat1] = STATE(146),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(273),
    [anon_sym_a] = ACTIONS(529),
    [anon_sym_an] = ACTIONS(529),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_neither] = ACTIONS(269),
    [anon_sym_the] = ACTIONS(531),
  },
  [199] = {
    [sym_predicate_fragement] = STATE(222),
    [sym_qname] = STATE(185),
    [aux_sym_narrative_repeat1] = STATE(186),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(533),
    [anon_sym_a] = ACTIONS(531),
    [anon_sym_an] = ACTIONS(531),
    [anon_sym_the] = ACTIONS(531),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [sym_tag] = ACTIONS(535),
    [anon_sym_Scenario_COLON] = ACTIONS(535),
    [anon_sym_DOT] = ACTIONS(535),
    [sym_And] = ACTIONS(535),
    [sym_given] = ACTIONS(535),
    [sym_then] = ACTIONS(535),
  },
  [201] = {
    [sym_quantifier] = STATE(224),
    [anon_sym_some] = ACTIONS(537),
    [anon_sym_only] = ACTIONS(537),
  },
  [202] = {
    [sym_predicate_name] = STATE(225),
    [sym_qname] = STATE(226),
    [aux_sym_narrative_repeat1] = STATE(227),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(539),
  },
  [203] = {
    [sym_class_name] = STATE(84),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(138),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(271),
  },
  [204] = {
    [sym_pos_class] = STATE(168),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(138),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(475),
    [anon_sym_a] = ACTIONS(477),
    [anon_sym_an] = ACTIONS(477),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [sym_tag] = ACTIONS(380),
    [anon_sym_Scenario_COLON] = ACTIONS(380),
    [anon_sym_DOT] = ACTIONS(380),
    [anon_sym_and] = ACTIONS(380),
    [anon_sym_or] = ACTIONS(380),
    [sym_And] = ACTIONS(380),
    [sym_given] = ACTIONS(380),
    [sym_then] = ACTIONS(380),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [sym_tag] = ACTIONS(541),
    [anon_sym_Scenario_COLON] = ACTIONS(541),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_and] = ACTIONS(541),
    [sym_And] = ACTIONS(541),
    [sym_given] = ACTIONS(541),
    [sym_then] = ACTIONS(541),
  },
  [207] = {
    [sym_qualifier] = STATE(228),
    [sym_predicate_phrase] = STATE(201),
    [sym_predicate_open] = STATE(202),
    [anon_sym_is] = ACTIONS(471),
    [anon_sym_isn_SQUOTEt] = ACTIONS(473),
    [anon_sym_does] = ACTIONS(162),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(164),
    [anon_sym_has] = ACTIONS(166),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(168),
  },
  [208] = {
    [aux_sym_conjunction_repeat1] = STATE(208),
    [ts_builtin_sym_end] = ACTIONS(541),
    [sym_tag] = ACTIONS(541),
    [anon_sym_Scenario_COLON] = ACTIONS(541),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_and] = ACTIONS(543),
    [sym_And] = ACTIONS(541),
    [sym_given] = ACTIONS(541),
    [sym_then] = ACTIONS(541),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [sym_tag] = ACTIONS(546),
    [anon_sym_Scenario_COLON] = ACTIONS(546),
    [anon_sym_DOT] = ACTIONS(546),
    [anon_sym_or] = ACTIONS(546),
    [sym_And] = ACTIONS(546),
    [sym_given] = ACTIONS(546),
    [sym_then] = ACTIONS(546),
  },
  [210] = {
    [aux_sym_disjunction_repeat1] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(546),
    [sym_tag] = ACTIONS(546),
    [anon_sym_Scenario_COLON] = ACTIONS(546),
    [anon_sym_DOT] = ACTIONS(546),
    [anon_sym_or] = ACTIONS(548),
    [sym_And] = ACTIONS(546),
    [sym_given] = ACTIONS(546),
    [sym_then] = ACTIONS(546),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(551),
    [sym_tag] = ACTIONS(551),
    [anon_sym_Scenario_COLON] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_and] = ACTIONS(551),
    [sym_And] = ACTIONS(551),
    [sym_given] = ACTIONS(551),
    [sym_then] = ACTIONS(551),
  },
  [212] = {
    [aux_sym_definition_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(551),
    [sym_tag] = ACTIONS(551),
    [anon_sym_Scenario_COLON] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_and] = ACTIONS(553),
    [sym_And] = ACTIONS(551),
    [sym_given] = ACTIONS(551),
    [sym_then] = ACTIONS(551),
  },
  [213] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(556),
  },
  [214] = {
    [aux_sym_narrative_repeat1] = STATE(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(558),
    [anon_sym_of] = ACTIONS(214),
    [anon_sym_than] = ACTIONS(214),
    [anon_sym_to] = ACTIONS(214),
    [anon_sym_on] = ACTIONS(214),
    [anon_sym_in] = ACTIONS(214),
  },
  [215] = {
    [sym_class_name] = STATE(84),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(217),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(561),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(563),
    [sym_tag] = ACTIONS(563),
    [anon_sym_Scenario_COLON] = ACTIONS(563),
    [anon_sym_DOT] = ACTIONS(563),
    [anon_sym_nor] = ACTIONS(563),
    [sym_And] = ACTIONS(563),
    [sym_given] = ACTIONS(563),
    [sym_then] = ACTIONS(563),
  },
  [217] = {
    [aux_sym_narrative_repeat1] = STATE(229),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(565),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_nor] = ACTIONS(180),
    [sym_And] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [218] = {
    [aux_sym_conjunction_repeat2] = STATE(218),
    [ts_builtin_sym_end] = ACTIONS(563),
    [sym_tag] = ACTIONS(563),
    [anon_sym_Scenario_COLON] = ACTIONS(563),
    [anon_sym_DOT] = ACTIONS(563),
    [anon_sym_nor] = ACTIONS(567),
    [sym_And] = ACTIONS(563),
    [sym_given] = ACTIONS(563),
    [sym_then] = ACTIONS(563),
  },
  [219] = {
    [sym_class_name] = STATE(84),
    [sym_predicate_fragement] = STATE(230),
    [sym_qname] = STATE(145),
    [aux_sym_narrative_repeat1] = STATE(146),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(400),
  },
  [220] = {
    [sym_predicate_fragement] = STATE(230),
    [sym_qname] = STATE(185),
    [aux_sym_narrative_repeat1] = STATE(186),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(402),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [sym_tag] = ACTIONS(570),
    [anon_sym_Scenario_COLON] = ACTIONS(570),
    [anon_sym_DOT] = ACTIONS(570),
    [sym_And] = ACTIONS(570),
    [sym_given] = ACTIONS(570),
    [sym_then] = ACTIONS(570),
  },
  [222] = {
    [sym_predicate_end] = STATE(232),
    [anon_sym_of] = ACTIONS(572),
    [anon_sym_than] = ACTIONS(572),
    [anon_sym_to] = ACTIONS(572),
    [anon_sym_on] = ACTIONS(572),
    [anon_sym_in] = ACTIONS(572),
  },
  [223] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(574),
    [anon_sym_a] = ACTIONS(576),
    [anon_sym_an] = ACTIONS(576),
    [anon_sym_not] = ACTIONS(576),
    [anon_sym_neither] = ACTIONS(576),
  },
  [224] = {
    [sym_class_expression] = STATE(233),
    [sym_pos_class] = STATE(131),
    [sym_class_atom] = STATE(132),
    [sym_conjunction] = STATE(133),
    [sym_disjunction] = STATE(133),
    [sym_qualified_class] = STATE(133),
    [sym_class_name] = STATE(134),
    [sym_qname] = STATE(77),
    [aux_sym_narrative_repeat1] = STATE(135),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(263),
    [anon_sym_a] = ACTIONS(265),
    [anon_sym_an] = ACTIONS(265),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_neither] = ACTIONS(269),
  },
  [225] = {
    [anon_sym_some] = ACTIONS(418),
    [anon_sym_only] = ACTIONS(418),
  },
  [226] = {
    [anon_sym_some] = ACTIONS(420),
    [anon_sym_only] = ACTIONS(420),
  },
  [227] = {
    [aux_sym_narrative_repeat1] = STATE(234),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(578),
    [anon_sym_some] = ACTIONS(180),
    [anon_sym_only] = ACTIONS(180),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(580),
    [sym_tag] = ACTIONS(580),
    [anon_sym_Scenario_COLON] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(580),
    [sym_And] = ACTIONS(580),
    [sym_given] = ACTIONS(580),
    [sym_then] = ACTIONS(580),
  },
  [229] = {
    [aux_sym_narrative_repeat1] = STATE(229),
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(582),
    [sym_tag] = ACTIONS(214),
    [anon_sym_Scenario_COLON] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_nor] = ACTIONS(214),
    [sym_And] = ACTIONS(214),
    [sym_given] = ACTIONS(214),
    [sym_then] = ACTIONS(214),
  },
  [230] = {
    [sym_predicate_end] = STATE(235),
    [anon_sym_of] = ACTIONS(572),
    [anon_sym_than] = ACTIONS(572),
    [anon_sym_to] = ACTIONS(572),
    [anon_sym_on] = ACTIONS(572),
    [anon_sym_in] = ACTIONS(572),
  },
  [231] = {
    [anon_sym_some] = ACTIONS(499),
    [anon_sym_only] = ACTIONS(499),
  },
  [232] = {
    [anon_sym_some] = ACTIONS(501),
    [anon_sym_only] = ACTIONS(501),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(585),
    [sym_tag] = ACTIONS(585),
    [anon_sym_Scenario_COLON] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [sym_And] = ACTIONS(585),
    [sym_given] = ACTIONS(585),
    [sym_then] = ACTIONS(585),
  },
  [234] = {
    [aux_sym_narrative_repeat1] = STATE(234),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(587),
    [anon_sym_some] = ACTIONS(214),
    [anon_sym_only] = ACTIONS(214),
  },
  [235] = {
    [anon_sym_some] = ACTIONS(556),
    [anon_sym_only] = ACTIONS(556),
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
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_background, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = true}, SHIFT(29),
  [41] = {.count = 1, .reusable = true}, SHIFT(30),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(14),
  [48] = {.count = 1, .reusable = true}, SHIFT(32),
  [50] = {.count = 1, .reusable = true}, SHIFT(33),
  [52] = {.count = 1, .reusable = true}, SHIFT(34),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_background, 2),
  [56] = {.count = 1, .reusable = true}, SHIFT(35),
  [58] = {.count = 1, .reusable = true}, SHIFT(38),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [62] = {.count = 1, .reusable = false}, SHIFT(55),
  [64] = {.count = 1, .reusable = true}, SHIFT(39),
  [66] = {.count = 1, .reusable = true}, SHIFT(40),
  [68] = {.count = 1, .reusable = true}, SHIFT(41),
  [70] = {.count = 1, .reusable = true}, SHIFT(42),
  [72] = {.count = 1, .reusable = true}, SHIFT(43),
  [74] = {.count = 1, .reusable = true}, SHIFT(44),
  [76] = {.count = 1, .reusable = true}, SHIFT(56),
  [78] = {.count = 1, .reusable = true}, SHIFT(57),
  [80] = {.count = 1, .reusable = true}, SHIFT(58),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 2),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_assumption_block, 1),
  [86] = {.count = 1, .reusable = true}, SHIFT(61),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_test_block, 1),
  [90] = {.count = 1, .reusable = true}, SHIFT(63),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_body, 1),
  [94] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(29),
  [105] = {.count = 1, .reusable = true}, SHIFT(67),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 4),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_narrative, 1),
  [111] = {.count = 1, .reusable = false}, SHIFT(68),
  [113] = {.count = 1, .reusable = false}, SHIFT(72),
  [115] = {.count = 1, .reusable = true}, SHIFT(70),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_background, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(35),
  [124] = {.count = 1, .reusable = true}, SHIFT(74),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_language_ID, 1),
  [128] = {.count = 1, .reusable = true}, SHIFT(78),
  [130] = {.count = 1, .reusable = true}, SHIFT(81),
  [132] = {.count = 1, .reusable = true}, SHIFT(83),
  [134] = {.count = 1, .reusable = true}, SHIFT(85),
  [136] = {.count = 1, .reusable = true}, SHIFT(86),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 2),
  [140] = {.count = 1, .reusable = true}, SHIFT(87),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 1),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_proposition, 1),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_universal, 1),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 1),
  [150] = {.count = 1, .reusable = true}, SHIFT(88),
  [152] = {.count = 1, .reusable = true}, SHIFT(89),
  [154] = {.count = 1, .reusable = true}, SHIFT(90),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 1),
  [158] = {.count = 1, .reusable = false}, SHIFT(91),
  [160] = {.count = 1, .reusable = true}, SHIFT(91),
  [162] = {.count = 1, .reusable = false}, SHIFT(92),
  [164] = {.count = 1, .reusable = true}, SHIFT(92),
  [166] = {.count = 1, .reusable = false}, SHIFT(93),
  [168] = {.count = 1, .reusable = true}, SHIFT(93),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_class_name, 1),
  [172] = {.count = 1, .reusable = true}, SHIFT(96),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_indiv_name, 1),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_indiv_name, 1),
  [178] = {.count = 1, .reusable = false}, SHIFT(98),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_qname, 1),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_qname, 1),
  [184] = {.count = 1, .reusable = true}, SHIFT(99),
  [186] = {.count = 1, .reusable = true}, SHIFT(101),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 1),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 1),
  [192] = {.count = 1, .reusable = true}, SHIFT(102),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_test, 2),
  [196] = {.count = 1, .reusable = true}, SHIFT(103),
  [198] = {.count = 1, .reusable = true}, SHIFT(106),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_assumption_block, 2),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_test_block, 2),
  [204] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(21),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(22),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 3),
  [214] = {.count = 1, .reusable = true}, REDUCE(aux_sym_narrative_repeat1, 2),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(68),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_language_setting, 3),
  [221] = {.count = 1, .reusable = true}, SHIFT(72),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_uriref, 1),
  [227] = {.count = 1, .reusable = false}, SHIFT(113),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 4),
  [231] = {.count = 1, .reusable = true}, SHIFT(114),
  [233] = {.count = 1, .reusable = false}, SHIFT(116),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 3),
  [237] = {.count = 1, .reusable = true}, SHIFT(117),
  [239] = {.count = 1, .reusable = true}, SHIFT(118),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_class_name, 1),
  [243] = {.count = 1, .reusable = false}, SHIFT(119),
  [245] = {.count = 1, .reusable = true}, SHIFT(120),
  [247] = {.count = 1, .reusable = false}, SHIFT(121),
  [249] = {.count = 1, .reusable = false}, SHIFT(122),
  [251] = {.count = 1, .reusable = true}, SHIFT(122),
  [253] = {.count = 1, .reusable = false}, SHIFT(123),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 2),
  [257] = {.count = 1, .reusable = false}, SHIFT(124),
  [259] = {.count = 1, .reusable = true}, SHIFT(126),
  [261] = {.count = 1, .reusable = false}, SHIFT(126),
  [263] = {.count = 1, .reusable = false}, SHIFT(135),
  [265] = {.count = 1, .reusable = true}, SHIFT(127),
  [267] = {.count = 1, .reusable = true}, SHIFT(128),
  [269] = {.count = 1, .reusable = true}, SHIFT(129),
  [271] = {.count = 1, .reusable = true}, SHIFT(138),
  [273] = {.count = 1, .reusable = false}, SHIFT(146),
  [275] = {.count = 1, .reusable = true}, SHIFT(140),
  [277] = {.count = 1, .reusable = true}, SHIFT(141),
  [279] = {.count = 1, .reusable = false}, SHIFT(142),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 1),
  [283] = {.count = 1, .reusable = true}, SHIFT(147),
  [285] = {.count = 1, .reusable = true}, SHIFT(149),
  [287] = {.count = 1, .reusable = true}, SHIFT(152),
  [289] = {.count = 1, .reusable = true}, SHIFT(154),
  [291] = {.count = 1, .reusable = true}, SHIFT(155),
  [293] = {.count = 1, .reusable = true}, SHIFT(156),
  [295] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(98),
  [298] = {.count = 1, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_consistency, 1),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_consistency_test, 2),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 2),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 2),
  [308] = {.count = 1, .reusable = true}, SHIFT(158),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_test, 3),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_inference_test, 2),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_infer_sentence, 1),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_further_assumption, 2),
  [318] = {.count = 1, .reusable = true}, SHIFT(160),
  [320] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assumption_block_repeat1, 2),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_assumption_block_repeat1, 2), SHIFT_REPEAT(61),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_further_test, 2),
  [327] = {.count = 1, .reusable = true}, SHIFT(161),
  [329] = {.count = 1, .reusable = true}, REDUCE(aux_sym_test_block_repeat1, 2),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_test_block_repeat1, 2), SHIFT_REPEAT(63),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 5),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [338] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(113),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 5),
  [343] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(116),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 4),
  [348] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(119),
  [351] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(121),
  [354] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(123),
  [357] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(124),
  [360] = {.count = 1, .reusable = true}, SHIFT(165),
  [362] = {.count = 1, .reusable = true}, SHIFT(166),
  [364] = {.count = 1, .reusable = false}, SHIFT(166),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_source_body, 1),
  [368] = {.count = 1, .reusable = true}, SHIFT(135),
  [370] = {.count = 1, .reusable = false}, SHIFT(169),
  [372] = {.count = 1, .reusable = true}, SHIFT(167),
  [374] = {.count = 1, .reusable = false}, SHIFT(172),
  [376] = {.count = 1, .reusable = true}, SHIFT(170),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 3),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1),
  [382] = {.count = 1, .reusable = true}, SHIFT(173),
  [384] = {.count = 1, .reusable = true}, SHIFT(174),
  [386] = {.count = 1, .reusable = true}, SHIFT(175),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_class_expression, 1),
  [390] = {.count = 1, .reusable = true}, SHIFT(177),
  [392] = {.count = 1, .reusable = false}, SHIFT(179),
  [394] = {.count = 1, .reusable = true}, SHIFT(180),
  [396] = {.count = 1, .reusable = false}, SHIFT(182),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positve, 3),
  [400] = {.count = 1, .reusable = true}, SHIFT(146),
  [402] = {.count = 1, .reusable = true}, SHIFT(186),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 3),
  [406] = {.count = 1, .reusable = true}, SHIFT(187),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_fragement, 1),
  [410] = {.count = 1, .reusable = false}, SHIFT(189),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 2),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_relation, 3),
  [416] = {.count = 1, .reusable = false}, SHIFT(190),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 2),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_name, 1),
  [422] = {.count = 1, .reusable = true}, REDUCE(aux_sym_universal_negative_repeat1, 2),
  [424] = {.count = 1, .reusable = false}, SHIFT(192),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_different, 3),
  [430] = {.count = 2, .reusable = true}, REDUCE(aux_sym_universal_negative_repeat1, 2), SHIFT_REPEAT(96),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 3),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_further_assumption, 3),
  [439] = {.count = 1, .reusable = true}, SHIFT(193),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_further_test, 3),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positve, 4),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 4),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_particular, 4),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_source, 4),
  [451] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(166),
  [454] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(166),
  [457] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2),
  [459] = {.count = 1, .reusable = true}, SHIFT(169),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 2),
  [463] = {.count = 1, .reusable = false}, SHIFT(194),
  [465] = {.count = 1, .reusable = true}, SHIFT(172),
  [467] = {.count = 1, .reusable = true}, SHIFT(195),
  [469] = {.count = 1, .reusable = false}, SHIFT(197),
  [471] = {.count = 1, .reusable = false}, SHIFT(198),
  [473] = {.count = 1, .reusable = true}, SHIFT(199),
  [475] = {.count = 1, .reusable = false}, SHIFT(138),
  [477] = {.count = 1, .reusable = true}, SHIFT(203),
  [479] = {.count = 1, .reusable = true}, SHIFT(204),
  [481] = {.count = 1, .reusable = true}, SHIFT(207),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 2),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [487] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(179),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 4),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(182),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_equation, 4),
  [497] = {.count = 1, .reusable = false}, SHIFT(214),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_end, 1),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 3),
  [503] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(189),
  [506] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(190),
  [509] = {.count = 2, .reusable = true}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(191),
  [512] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(192),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_further_assumption, 4),
  [517] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(194),
  [520] = {.count = 1, .reusable = false}, SHIFT(217),
  [522] = {.count = 1, .reusable = true}, SHIFT(215),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [526] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(197),
  [529] = {.count = 1, .reusable = true}, SHIFT(219),
  [531] = {.count = 1, .reusable = true}, SHIFT(220),
  [533] = {.count = 1, .reusable = false}, SHIFT(186),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 3),
  [537] = {.count = 1, .reusable = true}, SHIFT(223),
  [539] = {.count = 1, .reusable = true}, SHIFT(227),
  [541] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(174),
  [546] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(177),
  [551] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(180),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 4),
  [558] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(214),
  [561] = {.count = 1, .reusable = true}, SHIFT(217),
  [563] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [565] = {.count = 1, .reusable = false}, SHIFT(229),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(195),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 2),
  [572] = {.count = 1, .reusable = true}, SHIFT(231),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [578] = {.count = 1, .reusable = false}, SHIFT(234),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 4),
  [582] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(229),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 3),
  [587] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(234),
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
