#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 217
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_Feature_COLON = 1,
  anon_sym_LF = 2,
  sym_title = 3,
  aux_sym_SLASH_BSLASHS_SLASH = 4,
  anon_sym_Background_COLON = 5,
  sym_tag = 6,
  anon_sym_STARLanguage = 7,
  anon_sym_PERCENTOWL = 8,
  anon_sym_PERCENTCommonLogic = 9,
  anon_sym_STARTest = 10,
  anon_sym_theontology = 11,
  anon_sym_Scenario_COLON = 12,
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
  anon_sym_that = 42,
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
  sym_given = 55,
  sym_then = 56,
  anon_sym_consistent = 57,
  anon_sym_inconsistent = 58,
  sym_is_defined_as = 59,
  anon_sym_don_SQUOTEt = 60,
  anon_sym_infer = 61,
  sym_source_file = 62,
  sym_feature = 63,
  sym_narrative = 64,
  sym_background = 65,
  sym_language_setting = 66,
  sym_language_ID = 67,
  sym_import = 68,
  sym_scenario = 69,
  sym_scenario_head = 70,
  sym_scenario_body = 71,
  sym_assumption = 72,
  sym_test = 73,
  sym_inference_test = 74,
  sym_consistency_test = 75,
  sym_sentence = 76,
  sym_infer_sentence = 77,
  sym_definition = 78,
  sym_proposition = 79,
  sym_universal = 80,
  sym_universal_positve = 81,
  sym_universal_negative = 82,
  sym_particular = 83,
  sym_fact = 84,
  sym_instance = 85,
  sym_relation = 86,
  sym_equation = 87,
  sym_different = 88,
  sym_source = 89,
  sym_source_body = 90,
  sym_class_expression = 91,
  sym_pos_class = 92,
  sym_class_atom = 93,
  sym_conjunction = 94,
  sym_disjunction = 95,
  sym_qualified_class = 96,
  sym_qualifier = 97,
  sym_quantifier = 98,
  sym_predicate_phrase = 99,
  sym_predicate_open = 100,
  sym_predicate_end = 101,
  sym_class_name = 102,
  sym_predicate_name = 103,
  sym_predicate_fragement = 104,
  sym_indiv_name = 105,
  sym_qname = 106,
  sym_uriref = 107,
  sym_consistency = 108,
  sym_infer_start = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_feature_repeat1 = 111,
  aux_sym_narrative_repeat1 = 112,
  aux_sym_background_repeat1 = 113,
  aux_sym_scenario_body_repeat1 = 114,
  aux_sym_definition_repeat1 = 115,
  aux_sym_universal_negative_repeat1 = 116,
  aux_sym_source_body_repeat1 = 117,
  aux_sym_conjunction_repeat1 = 118,
  aux_sym_conjunction_repeat2 = 119,
  aux_sym_disjunction_repeat1 = 120,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_Feature_COLON] = "Feature:",
  [anon_sym_LF] = "\n",
  [sym_title] = "title",
  [aux_sym_SLASH_BSLASHS_SLASH] = "/\\S/",
  [anon_sym_Background_COLON] = "Background:",
  [sym_tag] = "tag",
  [anon_sym_STARLanguage] = "* Language",
  [anon_sym_PERCENTOWL] = "%OWL",
  [anon_sym_PERCENTCommonLogic] = "%CommonLogic",
  [anon_sym_STARTest] = "* Test",
  [anon_sym_theontology] = "the ontology",
  [anon_sym_Scenario_COLON] = "Scenario:",
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
  [anon_sym_a] = "a",
  [anon_sym_an] = "an",
  [anon_sym_not] = "not",
  [anon_sym_neither] = "neither",
  [anon_sym_nor] = "nor",
  [anon_sym_or] = "or",
  [anon_sym_COMMA] = ",",
  [anon_sym_who] = "who",
  [anon_sym_which] = "which",
  [anon_sym_that] = "that",
  [anon_sym_only] = "only",
  [anon_sym_the] = "the",
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
  [sym_given] = "given",
  [sym_then] = "then",
  [anon_sym_consistent] = "consistent",
  [anon_sym_inconsistent] = "inconsistent",
  [sym_is_defined_as] = "is_defined_as",
  [anon_sym_don_SQUOTEt] = "don't",
  [anon_sym_infer] = "infer",
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
  [sym_assumption] = "assumption",
  [sym_test] = "test",
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
  [anon_sym_STARLanguage] = {
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
  [anon_sym_STARTest] = {
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
  [anon_sym_that] = {
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
  [sym_assumption] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
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
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
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
        ADVANCE(56);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == 'h')
        ADVANCE(68);
      if (lookahead == 'i')
        ADVANCE(74);
      if (lookahead == 'n')
        ADVANCE(117);
      if (lookahead == 'o')
        ADVANCE(127);
      if (lookahead == 's')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(137);
      if (lookahead == 'w')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      ADVANCE(166);
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
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == ' ')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'T')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'e')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 's')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 't')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STARTest);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
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
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'n')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_an);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 's')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_does);
      if (lookahead == 'n')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '\'')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 't')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_doesn_SQUOTEt);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'v')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'e')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'r')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'y')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_every);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'a')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 's')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == 'n')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '\'')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 't')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_hasn_SQUOTEt);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 's')
        ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ')
        ADVANCE(77);
      if (lookahead == 'n')
        ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'd')
        ADVANCE(91);
      if (lookahead == 'e')
        ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_isa);
      if (lookahead == ' ')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 's')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'u')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'b')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'c')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'l')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'a')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 's')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == ' ')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'o')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'f')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_isasubclassof);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'f')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'i')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'n')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'e')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'd')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == ' ')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'a')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 's')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_is_defined_as);
      END_STATE();
    case 101:
      if (lookahead == 'n')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'u')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'm')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'r')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'a')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 't')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'd')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == ' ')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'a')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 's')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_isenumeratedas);
      END_STATE();
    case 114:
      if (lookahead == '\'')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 't')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_isn_SQUOTEt);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'e')
        ADVANCE(118);
      if (lookahead == 'o')
        ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'i')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 't')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'h')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'e')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'r')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_neither);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'r')
        ADVANCE(125);
      if (lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'f')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(129);
      if (lookahead == 'r')
        ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == 'l')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'y')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'm')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'e')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(138);
      if (lookahead == 'o')
        ADVANCE(159);
      END_STATE();
    case 138:
      if (lookahead == 'a')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_than);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_the);
      if (lookahead == ' ')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'o')
        ADVANCE(144);
      if (lookahead == 's')
        ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 'n')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 't')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'o')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'l')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'o')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'g')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'y')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_theontology);
      END_STATE();
    case 152:
      if (lookahead == 'a')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'm')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'e')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == ' ')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'a')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 's')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_thesameas);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'i')
        ADVANCE(162);
      if (lookahead == 'o')
        ADVANCE(165);
      END_STATE();
    case 162:
      if (lookahead == 'c')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'h')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_which);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_who);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      END_STATE();
    case 167:
      if (lookahead == 'F')
        ADVANCE(168);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(167);
      END_STATE();
    case 168:
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'a')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'u')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'r')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == ':')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_Feature_COLON);
      END_STATE();
    case 176:
      if (lookahead == ' ')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 's')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'p')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'a')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'c')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'e')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == ' ')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'd')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'e')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'l')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'i')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'n')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'i')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 't')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'e')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'd')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == ' ')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 's')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 't')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'r')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'i')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'n')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'g')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == ' ')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 's')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 't')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'a')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'r')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 't')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'n')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'g')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == ' ')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'w')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'i')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 't')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'h')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == ' ')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == '@')
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 215:
      if (lookahead == '\n')
        SKIP(215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(216);
      if (lookahead != 0)
        ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_title);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(217);
      END_STATE();
    case 218:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      END_STATE();
    case 219:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'B')
        ADVANCE(220);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      END_STATE();
    case 220:
      if (lookahead == 'a')
        ADVANCE(26);
      END_STATE();
    case 221:
      if (lookahead == 'c')
        ADVANCE(42);
      END_STATE();
    case 222:
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 224:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(225);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      END_STATE();
    case 225:
      if (lookahead == ' ')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'L')
        ADVANCE(227);
      if (lookahead == 'T')
        ADVANCE(19);
      END_STATE();
    case 227:
      if (lookahead == 'a')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'n')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'g')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'u')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'a')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'g')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'e')
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_STARLanguage);
      END_STATE();
    case 235:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      END_STATE();
    case 236:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(236);
      END_STATE();
    case 237:
      if (lookahead == 'i')
        ADVANCE(37);
      END_STATE();
    case 238:
      if (lookahead == 'h')
        ADVANCE(51);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(239);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 240:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 's')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(240);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 243:
      if (lookahead == 't')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'e')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == ' ')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'o')
        ADVANCE(144);
      END_STATE();
    case 248:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(249);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(248);
      END_STATE();
    case 249:
      if (lookahead == ' ')
        ADVANCE(18);
      END_STATE();
    case 250:
      if (lookahead == 'd')
        ADVANCE(251);
      if (lookahead == 'i')
        ADVANCE(256);
      if (lookahead == 't')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(250);
      END_STATE();
    case 251:
      if (lookahead == 'o')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'n')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == '\'')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 't')
        ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_don_SQUOTEt);
      END_STATE();
    case 256:
      if (lookahead == 'n')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'f')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'r')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_infer);
      END_STATE();
    case 261:
      if (lookahead == 'h')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'e')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == ' ')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 's')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'c')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'e')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'n')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'a')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'r')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'i')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'o')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == ' ')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'i')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 's')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_thescenariois);
      END_STATE();
    case 276:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'B')
        ADVANCE(25);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'a')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(276);
      ADVANCE(166);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == ' ')
        ADVANCE(177);
      END_STATE();
    case 278:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(279);
      if (lookahead == '*')
        ADVANCE(249);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(278);
      END_STATE();
    case 279:
      if (lookahead == '\"')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == '\"')
        ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 282:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(249);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(282);
      END_STATE();
    case 283:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'a')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      ADVANCE(166);
      END_STATE();
    case 284:
      if (lookahead == '\"')
        ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(284);
      END_STATE();
    case 285:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      END_STATE();
    case 286:
      if (lookahead == 'a')
        ADVANCE(287);
      if (lookahead == 'd')
        ADVANCE(56);
      if (lookahead == 'h')
        ADVANCE(68);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'd')
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 's')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ')
        ADVANCE(292);
      if (lookahead == 'n')
        ADVANCE(114);
      END_STATE();
    case 292:
      if (lookahead == 'a')
        ADVANCE(293);
      if (lookahead == 'd')
        ADVANCE(91);
      if (lookahead == 'e')
        ADVANCE(101);
      END_STATE();
    case 293:
      if (lookahead == ' ')
        ADVANCE(79);
      END_STATE();
    case 294:
      if (lookahead == 'a')
        ADVANCE(295);
      if (lookahead == 'd')
        ADVANCE(296);
      if (lookahead == 'h')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(294);
      END_STATE();
    case 295:
      if (lookahead == 'n')
        ADVANCE(288);
      END_STATE();
    case 296:
      if (lookahead == 'o')
        ADVANCE(57);
      END_STATE();
    case 297:
      if (lookahead == 'a')
        ADVANCE(69);
      END_STATE();
    case 298:
      if (lookahead == 's')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'n')
        ADVANCE(114);
      END_STATE();
    case 300:
      if (lookahead == 'c')
        ADVANCE(301);
      if (lookahead == 'i')
        ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(300);
      END_STATE();
    case 301:
      if (lookahead == 'o')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'n')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 's')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'i')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 's')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 't')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'e')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'n')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 't')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_consistent);
      END_STATE();
    case 311:
      if (lookahead == 'n')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'c')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'o')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'n')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 's')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'i')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 's')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 't')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'e')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'n')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 't')
        ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_inconsistent);
      END_STATE();
    case 323:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(323);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'a')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 327:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 328:
      if (lookahead == 'i')
        ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 's')
        ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 331:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(332);
      if (lookahead == 'i')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(339);
      if (lookahead == 'o')
        ADVANCE(341);
      if (lookahead == 't')
        ADVANCE(342);
      if (lookahead == 'w')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      END_STATE();
    case 332:
      if (lookahead == ' ')
        ADVANCE(177);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 'r')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'e')
        ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_are);
      if (lookahead == 'n')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == '\'')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 't')
        ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_aren_SQUOTEt);
      END_STATE();
    case 338:
      if (lookahead == 's')
        ADVANCE(330);
      END_STATE();
    case 339:
      if (lookahead == 'o')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'r')
        ADVANCE(125);
      END_STATE();
    case 341:
      if (lookahead == 'r')
        ADVANCE(132);
      END_STATE();
    case 342:
      if (lookahead == 'h')
        ADVANCE(325);
      END_STATE();
    case 343:
      if (lookahead == 'h')
        ADVANCE(161);
      END_STATE();
    case 344:
      if (lookahead == 'i')
        ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(344);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 's')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == ' ')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'a')
        ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_isa);
      END_STATE();
    case 349:
      if (lookahead == 'i')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(349);
      END_STATE();
    case 350:
      if (lookahead == 's')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == ' ')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 'a')
        ADVANCE(348);
      if (lookahead == 'd')
        ADVANCE(91);
      END_STATE();
    case 353:
      if (lookahead == 'a')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(353);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'r')
        ADVANCE(333);
      END_STATE();
    case 355:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(356);
      if (lookahead == 'i')
        ADVANCE(357);
      if (lookahead == 'n')
        ADVANCE(339);
      if (lookahead == 'o')
        ADVANCE(341);
      if (lookahead == 't')
        ADVANCE(342);
      if (lookahead == 'w')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(355);
      END_STATE();
    case 356:
      if (lookahead == ' ')
        ADVANCE(177);
      if (lookahead == 'n')
        ADVANCE(288);
      END_STATE();
    case 357:
      if (lookahead == 's')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == ' ')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'd')
        ADVANCE(91);
      END_STATE();
    case 360:
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(360);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 's')
        ADVANCE(358);
      END_STATE();
    case 362:
      if (lookahead == '\"')
        ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(367);
      END_STATE();
    case 363:
      if (lookahead == '\"')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(366);
      END_STATE();
    case 364:
      if (lookahead == '\"')
        ADVANCE(281);
      if (lookahead != 0)
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 368:
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'n')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(368);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'e')
        ADVANCE(118);
      if (lookahead == 'o')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 371:
      if (lookahead == 'a')
        ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(371);
      END_STATE();
    case 372:
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 'r')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'e')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == ' ')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'd')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'i')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 's')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'j')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'o')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'i')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'n')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 't')
        ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_aredisjoint);
      END_STATE();
    case 384:
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'n')
        ADVANCE(369);
      if (lookahead == 't')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(384);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'e')
        ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_the);
      if (lookahead == ' ')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 's')
        ADVANCE(152);
      END_STATE();
    case 389:
      if (lookahead == 'a')
        ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(389);
      END_STATE();
    case 390:
      if (lookahead == 's')
        ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 392:
      if (lookahead == 'a')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(392);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 'r')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'e')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == ' ')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 'd')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'i')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'f')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'f')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'e')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'r')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'e')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 'n')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 't')
        ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_are_different);
      END_STATE();
    case 406:
      if (lookahead == '*')
        ADVANCE(407);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(406);
      END_STATE();
    case 407:
      if (lookahead == ' ')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'L')
        ADVANCE(227);
      END_STATE();
    case 409:
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(409);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 410:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(356);
      if (lookahead == 'o')
        ADVANCE(341);
      if (lookahead == 't')
        ADVANCE(342);
      if (lookahead == 'w')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(410);
      END_STATE();
    case 411:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == 'o')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(411);
      END_STATE();
    case 412:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(356);
      if (lookahead == 'n')
        ADVANCE(339);
      if (lookahead == 'o')
        ADVANCE(341);
      if (lookahead == 't')
        ADVANCE(342);
      if (lookahead == 'w')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(412);
      END_STATE();
    case 413:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(414);
      if (lookahead == 'o')
        ADVANCE(415);
      if (lookahead == 't')
        ADVANCE(324);
      if (lookahead == 'w')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(413);
      ADVANCE(166);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == ' ')
        ADVANCE(177);
      if (lookahead == 'n')
        ADVANCE(288);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'r')
        ADVANCE(132);
      END_STATE();
    case 416:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(416);
      END_STATE();
    case 417:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(417);
      END_STATE();
    case 418:
      if (lookahead == ' ')
        ADVANCE(177);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 'r')
        ADVANCE(394);
      END_STATE();
    case 419:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(419);
      ADVANCE(166);
      END_STATE();
    case 420:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(356);
      if (lookahead == 'i')
        ADVANCE(421);
      if (lookahead == 'o')
        ADVANCE(422);
      if (lookahead == 't')
        ADVANCE(424);
      if (lookahead == 'w')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(420);
      END_STATE();
    case 421:
      if (lookahead == 'n')
        ADVANCE(75);
      END_STATE();
    case 422:
      if (lookahead == 'f')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(423);
      if (lookahead == 'r')
        ADVANCE(132);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 424:
      if (lookahead == 'h')
        ADVANCE(425);
      if (lookahead == 'o')
        ADVANCE(159);
      END_STATE();
    case 425:
      if (lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 426:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(414);
      if (lookahead == 'i')
        ADVANCE(427);
      if (lookahead == 'o')
        ADVANCE(428);
      if (lookahead == 't')
        ADVANCE(429);
      if (lookahead == 'w')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(426);
      ADVANCE(166);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(75);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'f')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(423);
      if (lookahead == 'r')
        ADVANCE(132);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(425);
      if (lookahead == 'o')
        ADVANCE(159);
      END_STATE();
    case 430:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(430);
      ADVANCE(166);
      END_STATE();
    case 431:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(356);
      if (lookahead == 'o')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(431);
      END_STATE();
    case 432:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(277);
      if (lookahead == 'o')
        ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(432);
      ADVANCE(166);
      END_STATE();
    case 433:
      if (lookahead == 'n')
        ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(433);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(340);
      END_STATE();
    case 435:
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'n')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(435);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'o')
        ADVANCE(370);
      END_STATE();
    case 437:
      if (lookahead == 'i')
        ADVANCE(427);
      if (lookahead == 'o')
        ADVANCE(438);
      if (lookahead == 't')
        ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'f')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(423);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(440);
      if (lookahead == 'o')
        ADVANCE(159);
      END_STATE();
    case 440:
      if (lookahead == 'a')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'n')
        ADVANCE(140);
      END_STATE();
    case 442:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(237);
      if (lookahead == 'S')
        ADVANCE(221);
      if (lookahead == 'T')
        ADVANCE(238);
      if (lookahead == 'a')
        ADVANCE(176);
      if (lookahead == 'n')
        ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(442);
      END_STATE();
    case 443:
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'n')
        ADVANCE(369);
      if (lookahead == 't')
        ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(443);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'h')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'e')
        ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_the);
      END_STATE();
    case 447:
      if (lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 't')
        ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(447);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 448:
      if (lookahead == 'o')
        ADVANCE(449);
      if (lookahead == 's')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(448);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHS_SLASH);
      if (lookahead == 'n')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'l')
        ADVANCE(130);
      END_STATE();
    case 451:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(24);
      if (lookahead == 'G')
        ADVANCE(36);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(451);
      ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 167},
  [2] = {.lex_state = 215},
  [3] = {.lex_state = 218},
  [4] = {.lex_state = 219},
  [5] = {.lex_state = 167},
  [6] = {.lex_state = 222},
  [7] = {.lex_state = 224},
  [8] = {.lex_state = 215},
  [9] = {.lex_state = 235},
  [10] = {.lex_state = 236},
  [11] = {.lex_state = 235},
  [12] = {.lex_state = 219},
  [13] = {.lex_state = 215},
  [14] = {.lex_state = 167},
  [15] = {.lex_state = 239},
  [16] = {.lex_state = 240},
  [17] = {.lex_state = 243},
  [18] = {.lex_state = 248},
  [19] = {.lex_state = 248},
  [20] = {.lex_state = 222},
  [21] = {.lex_state = 235},
  [22] = {.lex_state = 240},
  [23] = {.lex_state = 250},
  [24] = {.lex_state = 235},
  [25] = {.lex_state = 236},
  [26] = {.lex_state = 235},
  [27] = {.lex_state = 236},
  [28] = {.lex_state = 219},
  [29] = {.lex_state = 222},
  [30] = {.lex_state = 219},
  [31] = {.lex_state = 276},
  [32] = {.lex_state = 278},
  [33] = {.lex_state = 282},
  [34] = {.lex_state = 239},
  [35] = {.lex_state = 248},
  [36] = {.lex_state = 283},
  [37] = {.lex_state = 248},
  [38] = {.lex_state = 248},
  [39] = {.lex_state = 239},
  [40] = {.lex_state = 239},
  [41] = {.lex_state = 239},
  [42] = {.lex_state = 239},
  [43] = {.lex_state = 239},
  [44] = {.lex_state = 284},
  [45] = {.lex_state = 285},
  [46] = {.lex_state = 285},
  [47] = {.lex_state = 285},
  [48] = {.lex_state = 285},
  [49] = {.lex_state = 285},
  [50] = {.lex_state = 286},
  [51] = {.lex_state = 286},
  [52] = {.lex_state = 294},
  [53] = {.lex_state = 286},
  [54] = {.lex_state = 286},
  [55] = {.lex_state = 300},
  [56] = {.lex_state = 250},
  [57] = {.lex_state = 323},
  [58] = {.lex_state = 285},
  [59] = {.lex_state = 327},
  [60] = {.lex_state = 236},
  [61] = {.lex_state = 235},
  [62] = {.lex_state = 239},
  [63] = {.lex_state = 276},
  [64] = {.lex_state = 248},
  [65] = {.lex_state = 283},
  [66] = {.lex_state = 222},
  [67] = {.lex_state = 222},
  [68] = {.lex_state = 328},
  [69] = {.lex_state = 331},
  [70] = {.lex_state = 328},
  [71] = {.lex_state = 344},
  [72] = {.lex_state = 349},
  [73] = {.lex_state = 344},
  [74] = {.lex_state = 353},
  [75] = {.lex_state = 353},
  [76] = {.lex_state = 355},
  [77] = {.lex_state = 360},
  [78] = {.lex_state = 362},
  [79] = {.lex_state = 236},
  [80] = {.lex_state = 368},
  [81] = {.lex_state = 239},
  [82] = {.lex_state = 368},
  [83] = {.lex_state = 371},
  [84] = {.lex_state = 239},
  [85] = {.lex_state = 384},
  [86] = {.lex_state = 239},
  [87] = {.lex_state = 389},
  [88] = {.lex_state = 239},
  [89] = {.lex_state = 239},
  [90] = {.lex_state = 392},
  [91] = {.lex_state = 286},
  [92] = {.lex_state = 285},
  [93] = {.lex_state = 285},
  [94] = {.lex_state = 323},
  [95] = {.lex_state = 327},
  [96] = {.lex_state = 236},
  [97] = {.lex_state = 285},
  [98] = {.lex_state = 285},
  [99] = {.lex_state = 219},
  [100] = {.lex_state = 406},
  [101] = {.lex_state = 222},
  [102] = {.lex_state = 368},
  [103] = {.lex_state = 328},
  [104] = {.lex_state = 368},
  [105] = {.lex_state = 344},
  [106] = {.lex_state = 368},
  [107] = {.lex_state = 353},
  [108] = {.lex_state = 360},
  [109] = {.lex_state = 284},
  [110] = {.lex_state = 362},
  [111] = {.lex_state = 239},
  [112] = {.lex_state = 409},
  [113] = {.lex_state = 409},
  [114] = {.lex_state = 285},
  [115] = {.lex_state = 410},
  [116] = {.lex_state = 411},
  [117] = {.lex_state = 285},
  [118] = {.lex_state = 412},
  [119] = {.lex_state = 413},
  [120] = {.lex_state = 416},
  [121] = {.lex_state = 417},
  [122] = {.lex_state = 419},
  [123] = {.lex_state = 285},
  [124] = {.lex_state = 285},
  [125] = {.lex_state = 371},
  [126] = {.lex_state = 417},
  [127] = {.lex_state = 392},
  [128] = {.lex_state = 239},
  [129] = {.lex_state = 239},
  [130] = {.lex_state = 239},
  [131] = {.lex_state = 285},
  [132] = {.lex_state = 420},
  [133] = {.lex_state = 420},
  [134] = {.lex_state = 426},
  [135] = {.lex_state = 239},
  [136] = {.lex_state = 285},
  [137] = {.lex_state = 430},
  [138] = {.lex_state = 239},
  [139] = {.lex_state = 239},
  [140] = {.lex_state = 239},
  [141] = {.lex_state = 285},
  [142] = {.lex_state = 392},
  [143] = {.lex_state = 327},
  [144] = {.lex_state = 236},
  [145] = {.lex_state = 285},
  [146] = {.lex_state = 285},
  [147] = {.lex_state = 285},
  [148] = {.lex_state = 285},
  [149] = {.lex_state = 362},
  [150] = {.lex_state = 239},
  [151] = {.lex_state = 431},
  [152] = {.lex_state = 432},
  [153] = {.lex_state = 239},
  [154] = {.lex_state = 433},
  [155] = {.lex_state = 433},
  [156] = {.lex_state = 435},
  [157] = {.lex_state = 410},
  [158] = {.lex_state = 294},
  [159] = {.lex_state = 416},
  [160] = {.lex_state = 435},
  [161] = {.lex_state = 411},
  [162] = {.lex_state = 413},
  [163] = {.lex_state = 239},
  [164] = {.lex_state = 416},
  [165] = {.lex_state = 419},
  [166] = {.lex_state = 392},
  [167] = {.lex_state = 285},
  [168] = {.lex_state = 420},
  [169] = {.lex_state = 420},
  [170] = {.lex_state = 437},
  [171] = {.lex_state = 239},
  [172] = {.lex_state = 239},
  [173] = {.lex_state = 426},
  [174] = {.lex_state = 430},
  [175] = {.lex_state = 239},
  [176] = {.lex_state = 432},
  [177] = {.lex_state = 409},
  [178] = {.lex_state = 442},
  [179] = {.lex_state = 433},
  [180] = {.lex_state = 239},
  [181] = {.lex_state = 409},
  [182] = {.lex_state = 431},
  [183] = {.lex_state = 416},
  [184] = {.lex_state = 294},
  [185] = {.lex_state = 443},
  [186] = {.lex_state = 447},
  [187] = {.lex_state = 285},
  [188] = {.lex_state = 448},
  [189] = {.lex_state = 239},
  [190] = {.lex_state = 416},
  [191] = {.lex_state = 411},
  [192] = {.lex_state = 411},
  [193] = {.lex_state = 416},
  [194] = {.lex_state = 239},
  [195] = {.lex_state = 437},
  [196] = {.lex_state = 239},
  [197] = {.lex_state = 442},
  [198] = {.lex_state = 451},
  [199] = {.lex_state = 442},
  [200] = {.lex_state = 285},
  [201] = {.lex_state = 239},
  [202] = {.lex_state = 239},
  [203] = {.lex_state = 285},
  [204] = {.lex_state = 420},
  [205] = {.lex_state = 368},
  [206] = {.lex_state = 368},
  [207] = {.lex_state = 448},
  [208] = {.lex_state = 448},
  [209] = {.lex_state = 448},
  [210] = {.lex_state = 451},
  [211] = {.lex_state = 420},
  [212] = {.lex_state = 448},
  [213] = {.lex_state = 448},
  [214] = {.lex_state = 285},
  [215] = {.lex_state = 448},
  [216] = {.lex_state = 448},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(3),
    [anon_sym_Background_COLON] = ACTIONS(1),
    [anon_sym_PERCENTOWL] = ACTIONS(1),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(1),
    [anon_sym_STARTest] = ACTIONS(1),
    [anon_sym_theontology] = ACTIONS(1),
    [anon_sym_Scenario_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_isenumeratedas] = ACTIONS(1),
    [anon_sym_every] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(3),
    [anon_sym_isasubclassof] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(3),
    [anon_sym_isa] = ACTIONS(3),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_isn_SQUOTEt] = ACTIONS(1),
    [anon_sym_thesameas] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(3),
    [anon_sym_an] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_neither] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_who] = ACTIONS(1),
    [anon_sym_which] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
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
    [sym_given] = ACTIONS(1),
    [sym_then] = ACTIONS(1),
    [sym_is_defined_as] = ACTIONS(1),
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
    [sym_language_setting] = STATE(18),
    [sym_import] = STATE(19),
    [aux_sym_background_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_tag] = ACTIONS(27),
    [anon_sym_STARLanguage] = ACTIONS(29),
    [anon_sym_STARTest] = ACTIONS(31),
    [anon_sym_Scenario_COLON] = ACTIONS(27),
  },
  [8] = {
    [sym_title] = ACTIONS(33),
  },
  [9] = {
    [sym_scenario] = STATE(21),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [10] = {
    [sym_scenario_body] = STATE(24),
    [sym_assumption] = STATE(25),
    [sym_test] = STATE(25),
    [aux_sym_scenario_body_repeat1] = STATE(25),
    [sym_given] = ACTIONS(37),
    [sym_then] = ACTIONS(39),
  },
  [11] = {
    [sym_scenario] = STATE(26),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [12] = {
    [sym_scenario_head] = STATE(27),
    [aux_sym_feature_repeat1] = STATE(28),
    [sym_tag] = ACTIONS(41),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [13] = {
    [sym_title] = ACTIONS(43),
  },
  [14] = {
    [aux_sym_feature_repeat1] = STATE(14),
    [anon_sym_Feature_COLON] = ACTIONS(45),
    [sym_tag] = ACTIONS(47),
  },
  [15] = {
    [sym_narrative] = STATE(30),
    [aux_sym_narrative_repeat1] = STATE(31),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(50),
  },
  [16] = {
    [sym_language_ID] = STATE(33),
    [anon_sym_PERCENTOWL] = ACTIONS(52),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(52),
  },
  [17] = {
    [sym_uriref] = STATE(35),
    [aux_sym_narrative_repeat1] = STATE(36),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(54),
    [anon_sym_theontology] = ACTIONS(56),
  },
  [18] = {
    [sym_import] = STATE(37),
    [aux_sym_background_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_tag] = ACTIONS(58),
    [anon_sym_STARTest] = ACTIONS(31),
    [anon_sym_Scenario_COLON] = ACTIONS(58),
  },
  [19] = {
    [sym_import] = STATE(38),
    [aux_sym_background_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_tag] = ACTIONS(58),
    [anon_sym_STARTest] = ACTIONS(31),
    [anon_sym_Scenario_COLON] = ACTIONS(58),
  },
  [20] = {
    [anon_sym_LF] = ACTIONS(60),
  },
  [21] = {
    [sym_scenario] = STATE(26),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [22] = {
    [sym_language_ID] = STATE(44),
    [sym_sentence] = STATE(45),
    [sym_definition] = STATE(46),
    [sym_proposition] = STATE(46),
    [sym_universal] = STATE(47),
    [sym_universal_positve] = STATE(48),
    [sym_universal_negative] = STATE(48),
    [sym_particular] = STATE(47),
    [sym_fact] = STATE(46),
    [sym_instance] = STATE(49),
    [sym_relation] = STATE(49),
    [sym_equation] = STATE(49),
    [sym_different] = STATE(49),
    [sym_source] = STATE(46),
    [sym_pos_class] = STATE(50),
    [sym_class_name] = STATE(51),
    [sym_indiv_name] = STATE(52),
    [sym_qname] = STATE(53),
    [aux_sym_narrative_repeat1] = STATE(54),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(64),
    [anon_sym_PERCENTOWL] = ACTIONS(52),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(52),
    [anon_sym_every] = ACTIONS(66),
    [anon_sym_no] = ACTIONS(68),
    [anon_sym_some] = ACTIONS(70),
    [anon_sym_a] = ACTIONS(72),
    [anon_sym_an] = ACTIONS(74),
  },
  [23] = {
    [sym_inference_test] = STATE(58),
    [sym_consistency_test] = STATE(58),
    [sym_infer_start] = STATE(59),
    [anon_sym_thescenariois] = ACTIONS(76),
    [anon_sym_don_SQUOTEt] = ACTIONS(78),
    [anon_sym_infer] = ACTIONS(80),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_tag] = ACTIONS(82),
    [anon_sym_Scenario_COLON] = ACTIONS(82),
  },
  [25] = {
    [sym_assumption] = STATE(60),
    [sym_test] = STATE(60),
    [aux_sym_scenario_body_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_tag] = ACTIONS(84),
    [anon_sym_Scenario_COLON] = ACTIONS(84),
    [sym_given] = ACTIONS(37),
    [sym_then] = ACTIONS(39),
  },
  [26] = {
    [sym_scenario] = STATE(26),
    [sym_scenario_head] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_feature_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_tag] = ACTIONS(88),
    [anon_sym_Scenario_COLON] = ACTIONS(91),
  },
  [27] = {
    [sym_scenario_body] = STATE(61),
    [sym_assumption] = STATE(25),
    [sym_test] = STATE(25),
    [aux_sym_scenario_body_repeat1] = STATE(25),
    [sym_given] = ACTIONS(37),
    [sym_then] = ACTIONS(39),
  },
  [28] = {
    [aux_sym_feature_repeat1] = STATE(28),
    [sym_tag] = ACTIONS(94),
    [anon_sym_Scenario_COLON] = ACTIONS(45),
  },
  [29] = {
    [anon_sym_LF] = ACTIONS(97),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_Background_COLON] = ACTIONS(99),
    [sym_tag] = ACTIONS(99),
    [anon_sym_Scenario_COLON] = ACTIONS(99),
  },
  [31] = {
    [aux_sym_narrative_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(103),
    [anon_sym_Background_COLON] = ACTIONS(101),
    [sym_tag] = ACTIONS(101),
    [anon_sym_Scenario_COLON] = ACTIONS(101),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_tag] = ACTIONS(105),
    [anon_sym_STARTest] = ACTIONS(105),
    [anon_sym_Scenario_COLON] = ACTIONS(105),
    [sym_delimiter] = ACTIONS(105),
    [sym_given] = ACTIONS(105),
    [sym_then] = ACTIONS(105),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_tag] = ACTIONS(107),
    [anon_sym_STARTest] = ACTIONS(107),
    [anon_sym_Scenario_COLON] = ACTIONS(107),
    [sym_given] = ACTIONS(107),
    [sym_then] = ACTIONS(107),
  },
  [34] = {
    [sym_uriref] = STATE(64),
    [aux_sym_narrative_repeat1] = STATE(36),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(109),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_tag] = ACTIONS(111),
    [anon_sym_STARTest] = ACTIONS(111),
    [anon_sym_Scenario_COLON] = ACTIONS(111),
  },
  [36] = {
    [aux_sym_narrative_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(115),
    [sym_tag] = ACTIONS(113),
    [anon_sym_STARTest] = ACTIONS(113),
    [anon_sym_Scenario_COLON] = ACTIONS(113),
  },
  [37] = {
    [sym_import] = STATE(38),
    [aux_sym_background_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_tag] = ACTIONS(117),
    [anon_sym_STARTest] = ACTIONS(31),
    [anon_sym_Scenario_COLON] = ACTIONS(117),
  },
  [38] = {
    [sym_import] = STATE(38),
    [aux_sym_background_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_tag] = ACTIONS(119),
    [anon_sym_STARTest] = ACTIONS(121),
    [anon_sym_Scenario_COLON] = ACTIONS(119),
  },
  [39] = {
    [sym_narrative] = STATE(66),
    [aux_sym_narrative_repeat1] = STATE(67),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(124),
  },
  [40] = {
    [sym_class_name] = STATE(68),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(70),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(126),
  },
  [41] = {
    [sym_class_name] = STATE(71),
    [sym_qname] = STATE(72),
    [aux_sym_narrative_repeat1] = STATE(73),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(128),
  },
  [42] = {
    [sym_class_name] = STATE(74),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(75),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(130),
  },
  [43] = {
    [sym_class_name] = STATE(76),
    [sym_qname] = STATE(72),
    [aux_sym_narrative_repeat1] = STATE(77),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(132),
  },
  [44] = {
    [sym_delimiter] = ACTIONS(134),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_tag] = ACTIONS(136),
    [anon_sym_Scenario_COLON] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(138),
    [sym_given] = ACTIONS(136),
    [sym_then] = ACTIONS(136),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_tag] = ACTIONS(140),
    [anon_sym_Scenario_COLON] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(140),
    [sym_given] = ACTIONS(140),
    [sym_then] = ACTIONS(140),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_tag] = ACTIONS(142),
    [anon_sym_Scenario_COLON] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
    [sym_given] = ACTIONS(142),
    [sym_then] = ACTIONS(142),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_tag] = ACTIONS(144),
    [anon_sym_Scenario_COLON] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(144),
    [sym_given] = ACTIONS(144),
    [sym_then] = ACTIONS(144),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_tag] = ACTIONS(146),
    [anon_sym_Scenario_COLON] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(146),
    [sym_given] = ACTIONS(146),
    [sym_then] = ACTIONS(146),
  },
  [50] = {
    [sym_is_defined_as] = ACTIONS(148),
  },
  [51] = {
    [aux_sym_universal_negative_repeat1] = STATE(83),
    [anon_sym_isenumeratedas] = ACTIONS(150),
    [anon_sym_and] = ACTIONS(152),
    [anon_sym_isasubclassof] = ACTIONS(154),
    [sym_is_defined_as] = ACTIONS(156),
  },
  [52] = {
    [sym_predicate_phrase] = STATE(88),
    [sym_predicate_open] = STATE(89),
    [aux_sym_definition_repeat1] = STATE(90),
    [anon_sym_and] = ACTIONS(158),
    [anon_sym_is] = ACTIONS(160),
    [anon_sym_isn_SQUOTEt] = ACTIONS(162),
    [anon_sym_does] = ACTIONS(164),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(166),
    [anon_sym_has] = ACTIONS(168),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(170),
  },
  [53] = {
    [anon_sym_isenumeratedas] = ACTIONS(172),
    [anon_sym_and] = ACTIONS(174),
    [anon_sym_is] = ACTIONS(176),
    [anon_sym_isasubclassof] = ACTIONS(172),
    [anon_sym_isn_SQUOTEt] = ACTIONS(174),
    [anon_sym_does] = ACTIONS(176),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(174),
    [anon_sym_has] = ACTIONS(176),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(174),
    [sym_is_defined_as] = ACTIONS(172),
  },
  [54] = {
    [aux_sym_narrative_repeat1] = STATE(91),
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
  [55] = {
    [sym_consistency] = STATE(93),
    [anon_sym_consistent] = ACTIONS(184),
    [anon_sym_inconsistent] = ACTIONS(184),
  },
  [56] = {
    [anon_sym_infer] = ACTIONS(186),
  },
  [57] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(188),
    [anon_sym_PERCENTOWL] = ACTIONS(190),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(190),
    [anon_sym_every] = ACTIONS(190),
    [anon_sym_no] = ACTIONS(190),
    [anon_sym_a] = ACTIONS(188),
    [anon_sym_an] = ACTIONS(190),
    [anon_sym_that] = ACTIONS(192),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_tag] = ACTIONS(194),
    [anon_sym_Scenario_COLON] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(196),
    [sym_given] = ACTIONS(194),
    [sym_then] = ACTIONS(194),
  },
  [59] = {
    [sym_language_ID] = STATE(44),
    [sym_infer_sentence] = STATE(97),
    [sym_definition] = STATE(98),
    [sym_universal] = STATE(98),
    [sym_universal_positve] = STATE(48),
    [sym_universal_negative] = STATE(48),
    [sym_fact] = STATE(98),
    [sym_instance] = STATE(49),
    [sym_relation] = STATE(49),
    [sym_equation] = STATE(49),
    [sym_different] = STATE(49),
    [sym_source] = STATE(98),
    [sym_pos_class] = STATE(50),
    [sym_class_name] = STATE(51),
    [sym_indiv_name] = STATE(52),
    [sym_qname] = STATE(53),
    [aux_sym_narrative_repeat1] = STATE(54),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(64),
    [anon_sym_PERCENTOWL] = ACTIONS(52),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(52),
    [anon_sym_every] = ACTIONS(66),
    [anon_sym_no] = ACTIONS(68),
    [anon_sym_a] = ACTIONS(72),
    [anon_sym_an] = ACTIONS(74),
  },
  [60] = {
    [sym_assumption] = STATE(60),
    [sym_test] = STATE(60),
    [aux_sym_scenario_body_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_tag] = ACTIONS(198),
    [anon_sym_Scenario_COLON] = ACTIONS(198),
    [sym_given] = ACTIONS(200),
    [sym_then] = ACTIONS(203),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_tag] = ACTIONS(206),
    [anon_sym_Scenario_COLON] = ACTIONS(206),
  },
  [62] = {
    [sym_narrative] = STATE(99),
    [aux_sym_narrative_repeat1] = STATE(31),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(50),
  },
  [63] = {
    [aux_sym_narrative_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(210),
    [anon_sym_Background_COLON] = ACTIONS(208),
    [sym_tag] = ACTIONS(208),
    [anon_sym_Scenario_COLON] = ACTIONS(208),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_tag] = ACTIONS(213),
    [anon_sym_STARTest] = ACTIONS(213),
    [anon_sym_Scenario_COLON] = ACTIONS(213),
  },
  [65] = {
    [aux_sym_narrative_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(215),
    [sym_tag] = ACTIONS(208),
    [anon_sym_STARTest] = ACTIONS(208),
    [anon_sym_Scenario_COLON] = ACTIONS(208),
  },
  [66] = {
    [anon_sym_LF] = ACTIONS(218),
  },
  [67] = {
    [aux_sym_narrative_repeat1] = STATE(101),
    [anon_sym_LF] = ACTIONS(101),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(220),
  },
  [68] = {
    [anon_sym_is] = ACTIONS(222),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_tag] = ACTIONS(172),
    [anon_sym_Scenario_COLON] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_and] = ACTIONS(172),
    [anon_sym_is] = ACTIONS(172),
    [anon_sym_are] = ACTIONS(224),
    [anon_sym_aren_SQUOTEt] = ACTIONS(172),
    [anon_sym_nor] = ACTIONS(172),
    [anon_sym_or] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_who] = ACTIONS(172),
    [anon_sym_which] = ACTIONS(172),
    [anon_sym_that] = ACTIONS(172),
    [sym_given] = ACTIONS(172),
    [sym_then] = ACTIONS(172),
  },
  [70] = {
    [aux_sym_narrative_repeat1] = STATE(103),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(226),
    [anon_sym_is] = ACTIONS(180),
  },
  [71] = {
    [anon_sym_isa] = ACTIONS(228),
  },
  [72] = {
    [anon_sym_isa] = ACTIONS(172),
    [sym_is_defined_as] = ACTIONS(172),
  },
  [73] = {
    [aux_sym_narrative_repeat1] = STATE(105),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(230),
    [anon_sym_isa] = ACTIONS(180),
  },
  [74] = {
    [anon_sym_are] = ACTIONS(232),
    [anon_sym_aren_SQUOTEt] = ACTIONS(234),
  },
  [75] = {
    [aux_sym_narrative_repeat1] = STATE(107),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(236),
    [anon_sym_are] = ACTIONS(182),
    [anon_sym_aren_SQUOTEt] = ACTIONS(180),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym_tag] = ACTIONS(238),
    [anon_sym_Scenario_COLON] = ACTIONS(238),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_and] = ACTIONS(238),
    [anon_sym_nor] = ACTIONS(238),
    [anon_sym_or] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_who] = ACTIONS(238),
    [anon_sym_which] = ACTIONS(238),
    [anon_sym_that] = ACTIONS(238),
    [sym_given] = ACTIONS(238),
    [sym_then] = ACTIONS(238),
    [sym_is_defined_as] = ACTIONS(238),
  },
  [77] = {
    [aux_sym_narrative_repeat1] = STATE(108),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(240),
    [sym_is_defined_as] = ACTIONS(180),
  },
  [78] = {
    [sym_source_body] = STATE(109),
    [aux_sym_source_body_repeat1] = STATE(110),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(244),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym_tag] = ACTIONS(246),
    [anon_sym_Scenario_COLON] = ACTIONS(246),
    [sym_given] = ACTIONS(246),
    [sym_then] = ACTIONS(246),
  },
  [80] = {
    [sym_class_expression] = STATE(114),
    [sym_pos_class] = STATE(115),
    [sym_class_atom] = STATE(116),
    [sym_conjunction] = STATE(117),
    [sym_disjunction] = STATE(117),
    [sym_qualified_class] = STATE(117),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(248),
    [anon_sym_a] = ACTIONS(250),
    [anon_sym_an] = ACTIONS(252),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_neither] = ACTIONS(256),
  },
  [81] = {
    [sym_indiv_name] = STATE(120),
    [sym_qname] = STATE(121),
    [aux_sym_narrative_repeat1] = STATE(122),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(258),
  },
  [82] = {
    [sym_class_expression] = STATE(123),
    [sym_pos_class] = STATE(115),
    [sym_class_atom] = STATE(116),
    [sym_conjunction] = STATE(117),
    [sym_disjunction] = STATE(117),
    [sym_qualified_class] = STATE(117),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(248),
    [anon_sym_a] = ACTIONS(250),
    [anon_sym_an] = ACTIONS(252),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_neither] = ACTIONS(256),
  },
  [83] = {
    [aux_sym_universal_negative_repeat1] = STATE(125),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_aredisjoint] = ACTIONS(262),
  },
  [84] = {
    [sym_indiv_name] = STATE(126),
    [sym_qname] = STATE(121),
    [aux_sym_narrative_repeat1] = STATE(127),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(264),
  },
  [85] = {
    [sym_class_expression] = STATE(131),
    [sym_pos_class] = STATE(115),
    [sym_class_atom] = STATE(116),
    [sym_conjunction] = STATE(117),
    [sym_disjunction] = STATE(117),
    [sym_qualified_class] = STATE(117),
    [sym_class_name] = STATE(118),
    [sym_predicate_fragement] = STATE(132),
    [sym_qname] = STATE(133),
    [aux_sym_narrative_repeat1] = STATE(134),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(266),
    [anon_sym_thesameas] = ACTIONS(268),
    [anon_sym_a] = ACTIONS(270),
    [anon_sym_an] = ACTIONS(272),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_neither] = ACTIONS(256),
    [anon_sym_the] = ACTIONS(274),
  },
  [86] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(276),
  },
  [87] = {
    [anon_sym_as] = ACTIONS(278),
  },
  [88] = {
    [sym_indiv_name] = STATE(136),
    [sym_qname] = STATE(121),
    [aux_sym_narrative_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(280),
  },
  [89] = {
    [sym_predicate_name] = STATE(138),
    [sym_qname] = STATE(139),
    [aux_sym_narrative_repeat1] = STATE(140),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(282),
  },
  [90] = {
    [aux_sym_definition_repeat1] = STATE(142),
    [anon_sym_and] = ACTIONS(158),
    [sym_are_different] = ACTIONS(284),
  },
  [91] = {
    [aux_sym_narrative_repeat1] = STATE(91),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(286),
    [anon_sym_isenumeratedas] = ACTIONS(208),
    [anon_sym_and] = ACTIONS(208),
    [anon_sym_is] = ACTIONS(289),
    [anon_sym_isasubclassof] = ACTIONS(208),
    [anon_sym_isn_SQUOTEt] = ACTIONS(208),
    [anon_sym_does] = ACTIONS(289),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(208),
    [anon_sym_has] = ACTIONS(289),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(208),
    [sym_is_defined_as] = ACTIONS(208),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym_tag] = ACTIONS(291),
    [anon_sym_Scenario_COLON] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_given] = ACTIONS(291),
    [sym_then] = ACTIONS(291),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_tag] = ACTIONS(293),
    [anon_sym_Scenario_COLON] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(293),
    [sym_given] = ACTIONS(293),
    [sym_then] = ACTIONS(293),
  },
  [94] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(295),
    [anon_sym_PERCENTOWL] = ACTIONS(297),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(297),
    [anon_sym_every] = ACTIONS(297),
    [anon_sym_no] = ACTIONS(297),
    [anon_sym_a] = ACTIONS(295),
    [anon_sym_an] = ACTIONS(297),
    [anon_sym_that] = ACTIONS(299),
  },
  [95] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(295),
    [anon_sym_PERCENTOWL] = ACTIONS(297),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(297),
    [anon_sym_every] = ACTIONS(297),
    [anon_sym_no] = ACTIONS(297),
    [anon_sym_a] = ACTIONS(295),
    [anon_sym_an] = ACTIONS(297),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_tag] = ACTIONS(301),
    [anon_sym_Scenario_COLON] = ACTIONS(301),
    [sym_given] = ACTIONS(301),
    [sym_then] = ACTIONS(301),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym_tag] = ACTIONS(303),
    [anon_sym_Scenario_COLON] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [sym_given] = ACTIONS(303),
    [sym_then] = ACTIONS(303),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_tag] = ACTIONS(305),
    [anon_sym_Scenario_COLON] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(305),
    [sym_given] = ACTIONS(305),
    [sym_then] = ACTIONS(305),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_Background_COLON] = ACTIONS(307),
    [sym_tag] = ACTIONS(307),
    [anon_sym_Scenario_COLON] = ACTIONS(307),
  },
  [100] = {
    [sym_language_setting] = STATE(144),
    [anon_sym_STARLanguage] = ACTIONS(29),
    [sym_given] = ACTIONS(309),
    [sym_then] = ACTIONS(309),
  },
  [101] = {
    [aux_sym_narrative_repeat1] = STATE(101),
    [anon_sym_LF] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(311),
  },
  [102] = {
    [sym_class_expression] = STATE(145),
    [sym_pos_class] = STATE(115),
    [sym_class_atom] = STATE(116),
    [sym_conjunction] = STATE(117),
    [sym_disjunction] = STATE(117),
    [sym_qualified_class] = STATE(117),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(248),
    [anon_sym_a] = ACTIONS(250),
    [anon_sym_an] = ACTIONS(252),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_neither] = ACTIONS(256),
  },
  [103] = {
    [aux_sym_narrative_repeat1] = STATE(103),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(314),
    [anon_sym_is] = ACTIONS(208),
  },
  [104] = {
    [sym_class_expression] = STATE(146),
    [sym_pos_class] = STATE(115),
    [sym_class_atom] = STATE(116),
    [sym_conjunction] = STATE(117),
    [sym_disjunction] = STATE(117),
    [sym_qualified_class] = STATE(117),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(248),
    [anon_sym_a] = ACTIONS(250),
    [anon_sym_an] = ACTIONS(252),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_neither] = ACTIONS(256),
  },
  [105] = {
    [aux_sym_narrative_repeat1] = STATE(105),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(317),
    [anon_sym_isa] = ACTIONS(208),
  },
  [106] = {
    [sym_class_expression] = STATE(147),
    [sym_pos_class] = STATE(115),
    [sym_class_atom] = STATE(116),
    [sym_conjunction] = STATE(117),
    [sym_disjunction] = STATE(117),
    [sym_qualified_class] = STATE(117),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(248),
    [anon_sym_a] = ACTIONS(250),
    [anon_sym_an] = ACTIONS(252),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_neither] = ACTIONS(256),
  },
  [107] = {
    [aux_sym_narrative_repeat1] = STATE(107),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(320),
    [anon_sym_are] = ACTIONS(289),
    [anon_sym_aren_SQUOTEt] = ACTIONS(208),
  },
  [108] = {
    [aux_sym_narrative_repeat1] = STATE(108),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(323),
    [sym_is_defined_as] = ACTIONS(208),
  },
  [109] = {
    [sym_delimiter] = ACTIONS(326),
  },
  [110] = {
    [aux_sym_source_body_repeat1] = STATE(149),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(330),
    [sym_delimiter] = ACTIONS(332),
  },
  [111] = {
    [sym_class_name] = STATE(76),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(334),
  },
  [112] = {
    [sym_pos_class] = STATE(151),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(152),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(336),
    [anon_sym_a] = ACTIONS(338),
    [anon_sym_an] = ACTIONS(340),
  },
  [113] = {
    [sym_pos_class] = STATE(154),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(155),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(342),
    [anon_sym_a] = ACTIONS(344),
    [anon_sym_an] = ACTIONS(346),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym_tag] = ACTIONS(348),
    [anon_sym_Scenario_COLON] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [sym_given] = ACTIONS(348),
    [sym_then] = ACTIONS(348),
  },
  [115] = {
    [aux_sym_conjunction_repeat1] = STATE(159),
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_tag] = ACTIONS(350),
    [anon_sym_Scenario_COLON] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_and] = ACTIONS(352),
    [anon_sym_or] = ACTIONS(350),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_who] = ACTIONS(356),
    [anon_sym_which] = ACTIONS(356),
    [anon_sym_that] = ACTIONS(356),
    [sym_given] = ACTIONS(350),
    [sym_then] = ACTIONS(350),
  },
  [116] = {
    [aux_sym_disjunction_repeat1] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(358),
    [sym_tag] = ACTIONS(358),
    [anon_sym_Scenario_COLON] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_or] = ACTIONS(360),
    [sym_given] = ACTIONS(358),
    [sym_then] = ACTIONS(358),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [sym_tag] = ACTIONS(358),
    [anon_sym_Scenario_COLON] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(358),
    [sym_given] = ACTIONS(358),
    [sym_then] = ACTIONS(358),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_tag] = ACTIONS(156),
    [anon_sym_Scenario_COLON] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_and] = ACTIONS(156),
    [anon_sym_nor] = ACTIONS(156),
    [anon_sym_or] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_who] = ACTIONS(156),
    [anon_sym_which] = ACTIONS(156),
    [anon_sym_that] = ACTIONS(156),
    [sym_given] = ACTIONS(156),
    [sym_then] = ACTIONS(156),
  },
  [119] = {
    [aux_sym_narrative_repeat1] = STATE(162),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(362),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(180),
    [anon_sym_or] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_who] = ACTIONS(180),
    [anon_sym_which] = ACTIONS(180),
    [anon_sym_that] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [120] = {
    [aux_sym_definition_repeat1] = STATE(164),
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym_tag] = ACTIONS(348),
    [anon_sym_Scenario_COLON] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_and] = ACTIONS(364),
    [sym_given] = ACTIONS(348),
    [sym_then] = ACTIONS(348),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_tag] = ACTIONS(174),
    [anon_sym_Scenario_COLON] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_and] = ACTIONS(174),
    [sym_are_different] = ACTIONS(174),
    [sym_given] = ACTIONS(174),
    [sym_then] = ACTIONS(174),
  },
  [122] = {
    [aux_sym_narrative_repeat1] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(366),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_tag] = ACTIONS(368),
    [anon_sym_Scenario_COLON] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [sym_given] = ACTIONS(368),
    [sym_then] = ACTIONS(368),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym_tag] = ACTIONS(370),
    [anon_sym_Scenario_COLON] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(370),
    [sym_given] = ACTIONS(370),
    [sym_then] = ACTIONS(370),
  },
  [125] = {
    [aux_sym_universal_negative_repeat1] = STATE(125),
    [anon_sym_and] = ACTIONS(372),
    [anon_sym_aredisjoint] = ACTIONS(375),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_tag] = ACTIONS(377),
    [anon_sym_Scenario_COLON] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(377),
    [anon_sym_and] = ACTIONS(377),
    [sym_are_different] = ACTIONS(377),
    [sym_given] = ACTIONS(377),
    [sym_then] = ACTIONS(377),
  },
  [127] = {
    [aux_sym_narrative_repeat1] = STATE(166),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(379),
    [anon_sym_and] = ACTIONS(180),
    [sym_are_different] = ACTIONS(180),
  },
  [128] = {
    [sym_indiv_name] = STATE(167),
    [sym_qname] = STATE(121),
    [aux_sym_narrative_repeat1] = STATE(137),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(280),
  },
  [129] = {
    [sym_class_name] = STATE(76),
    [sym_predicate_fragement] = STATE(168),
    [sym_qname] = STATE(133),
    [aux_sym_narrative_repeat1] = STATE(134),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(381),
  },
  [130] = {
    [sym_predicate_fragement] = STATE(168),
    [sym_qname] = STATE(169),
    [aux_sym_narrative_repeat1] = STATE(170),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(383),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym_tag] = ACTIONS(385),
    [anon_sym_Scenario_COLON] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(385),
    [sym_given] = ACTIONS(385),
    [sym_then] = ACTIONS(385),
  },
  [132] = {
    [sym_predicate_end] = STATE(172),
    [anon_sym_of] = ACTIONS(387),
    [anon_sym_than] = ACTIONS(387),
    [anon_sym_to] = ACTIONS(387),
    [anon_sym_on] = ACTIONS(387),
    [anon_sym_in] = ACTIONS(387),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_tag] = ACTIONS(172),
    [anon_sym_Scenario_COLON] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_and] = ACTIONS(172),
    [anon_sym_or] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_who] = ACTIONS(172),
    [anon_sym_which] = ACTIONS(172),
    [anon_sym_that] = ACTIONS(172),
    [anon_sym_of] = ACTIONS(389),
    [anon_sym_than] = ACTIONS(389),
    [anon_sym_to] = ACTIONS(389),
    [anon_sym_on] = ACTIONS(389),
    [anon_sym_in] = ACTIONS(389),
    [sym_given] = ACTIONS(172),
    [sym_then] = ACTIONS(172),
  },
  [134] = {
    [aux_sym_narrative_repeat1] = STATE(173),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(391),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(180),
    [anon_sym_or] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_who] = ACTIONS(180),
    [anon_sym_which] = ACTIONS(180),
    [anon_sym_that] = ACTIONS(180),
    [anon_sym_of] = ACTIONS(180),
    [anon_sym_than] = ACTIONS(180),
    [anon_sym_to] = ACTIONS(180),
    [anon_sym_on] = ACTIONS(180),
    [anon_sym_in] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [135] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(393),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [sym_tag] = ACTIONS(395),
    [anon_sym_Scenario_COLON] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(395),
    [sym_given] = ACTIONS(395),
    [sym_then] = ACTIONS(395),
  },
  [137] = {
    [aux_sym_narrative_repeat1] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(397),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [138] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(399),
  },
  [139] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(401),
  },
  [140] = {
    [aux_sym_narrative_repeat1] = STATE(175),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(180),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [sym_tag] = ACTIONS(403),
    [anon_sym_Scenario_COLON] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(403),
    [sym_given] = ACTIONS(403),
    [sym_then] = ACTIONS(403),
  },
  [142] = {
    [aux_sym_definition_repeat1] = STATE(142),
    [anon_sym_and] = ACTIONS(405),
    [sym_are_different] = ACTIONS(377),
  },
  [143] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(408),
    [anon_sym_PERCENTOWL] = ACTIONS(410),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(410),
    [anon_sym_every] = ACTIONS(410),
    [anon_sym_no] = ACTIONS(410),
    [anon_sym_a] = ACTIONS(408),
    [anon_sym_an] = ACTIONS(410),
  },
  [144] = {
    [sym_given] = ACTIONS(412),
    [sym_then] = ACTIONS(412),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [sym_tag] = ACTIONS(414),
    [anon_sym_Scenario_COLON] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(414),
    [sym_given] = ACTIONS(414),
    [sym_then] = ACTIONS(414),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [sym_tag] = ACTIONS(416),
    [anon_sym_Scenario_COLON] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(416),
    [sym_given] = ACTIONS(416),
    [sym_then] = ACTIONS(416),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [sym_tag] = ACTIONS(418),
    [anon_sym_Scenario_COLON] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(418),
    [sym_given] = ACTIONS(418),
    [sym_then] = ACTIONS(418),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [sym_tag] = ACTIONS(420),
    [anon_sym_Scenario_COLON] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(420),
    [sym_given] = ACTIONS(420),
    [sym_then] = ACTIONS(420),
  },
  [149] = {
    [aux_sym_source_body_repeat1] = STATE(149),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(422),
    [aux_sym_SLASH_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_DQUOTE_DQUOTE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(425),
    [sym_delimiter] = ACTIONS(428),
  },
  [150] = {
    [sym_class_name] = STATE(76),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(152),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(430),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [sym_tag] = ACTIONS(432),
    [anon_sym_Scenario_COLON] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [anon_sym_and] = ACTIONS(432),
    [anon_sym_or] = ACTIONS(432),
    [sym_given] = ACTIONS(432),
    [sym_then] = ACTIONS(432),
  },
  [152] = {
    [aux_sym_narrative_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(434),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_or] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [153] = {
    [sym_class_name] = STATE(76),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(155),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(436),
  },
  [154] = {
    [aux_sym_conjunction_repeat2] = STATE(178),
    [anon_sym_nor] = ACTIONS(438),
  },
  [155] = {
    [aux_sym_narrative_repeat1] = STATE(179),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(440),
    [anon_sym_nor] = ACTIONS(180),
  },
  [156] = {
    [sym_pos_class] = STATE(182),
    [sym_class_atom] = STATE(183),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(122),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(442),
    [anon_sym_a] = ACTIONS(444),
    [anon_sym_an] = ACTIONS(446),
    [anon_sym_not] = ACTIONS(448),
  },
  [157] = {
    [anon_sym_who] = ACTIONS(450),
    [anon_sym_which] = ACTIONS(450),
    [anon_sym_that] = ACTIONS(450),
  },
  [158] = {
    [sym_qualifier] = STATE(187),
    [sym_predicate_phrase] = STATE(188),
    [sym_predicate_open] = STATE(189),
    [anon_sym_is] = ACTIONS(452),
    [anon_sym_isn_SQUOTEt] = ACTIONS(454),
    [anon_sym_does] = ACTIONS(164),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(166),
    [anon_sym_has] = ACTIONS(168),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(170),
  },
  [159] = {
    [aux_sym_conjunction_repeat1] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_tag] = ACTIONS(456),
    [anon_sym_Scenario_COLON] = ACTIONS(456),
    [anon_sym_DOT] = ACTIONS(456),
    [anon_sym_and] = ACTIONS(352),
    [sym_given] = ACTIONS(456),
    [sym_then] = ACTIONS(456),
  },
  [160] = {
    [sym_pos_class] = STATE(182),
    [sym_class_atom] = STATE(191),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(152),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(336),
    [anon_sym_a] = ACTIONS(338),
    [anon_sym_an] = ACTIONS(340),
    [anon_sym_not] = ACTIONS(254),
  },
  [161] = {
    [aux_sym_disjunction_repeat1] = STATE(192),
    [ts_builtin_sym_end] = ACTIONS(458),
    [sym_tag] = ACTIONS(458),
    [anon_sym_Scenario_COLON] = ACTIONS(458),
    [anon_sym_DOT] = ACTIONS(458),
    [anon_sym_or] = ACTIONS(360),
    [sym_given] = ACTIONS(458),
    [sym_then] = ACTIONS(458),
  },
  [162] = {
    [aux_sym_narrative_repeat1] = STATE(162),
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(460),
    [sym_tag] = ACTIONS(208),
    [anon_sym_Scenario_COLON] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_and] = ACTIONS(208),
    [anon_sym_or] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_who] = ACTIONS(208),
    [anon_sym_which] = ACTIONS(208),
    [anon_sym_that] = ACTIONS(208),
    [sym_given] = ACTIONS(208),
    [sym_then] = ACTIONS(208),
  },
  [163] = {
    [sym_indiv_name] = STATE(126),
    [sym_qname] = STATE(121),
    [aux_sym_narrative_repeat1] = STATE(122),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(258),
  },
  [164] = {
    [aux_sym_definition_repeat1] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(463),
    [sym_tag] = ACTIONS(463),
    [anon_sym_Scenario_COLON] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_and] = ACTIONS(364),
    [sym_given] = ACTIONS(463),
    [sym_then] = ACTIONS(463),
  },
  [165] = {
    [aux_sym_narrative_repeat1] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(465),
    [sym_tag] = ACTIONS(208),
    [anon_sym_Scenario_COLON] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_and] = ACTIONS(208),
    [sym_given] = ACTIONS(208),
    [sym_then] = ACTIONS(208),
  },
  [166] = {
    [aux_sym_narrative_repeat1] = STATE(166),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(468),
    [anon_sym_and] = ACTIONS(208),
    [sym_are_different] = ACTIONS(208),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [sym_tag] = ACTIONS(471),
    [anon_sym_Scenario_COLON] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [sym_given] = ACTIONS(471),
    [sym_then] = ACTIONS(471),
  },
  [168] = {
    [sym_predicate_end] = STATE(194),
    [anon_sym_of] = ACTIONS(387),
    [anon_sym_than] = ACTIONS(387),
    [anon_sym_to] = ACTIONS(387),
    [anon_sym_on] = ACTIONS(387),
    [anon_sym_in] = ACTIONS(387),
  },
  [169] = {
    [anon_sym_of] = ACTIONS(389),
    [anon_sym_than] = ACTIONS(389),
    [anon_sym_to] = ACTIONS(389),
    [anon_sym_on] = ACTIONS(389),
    [anon_sym_in] = ACTIONS(389),
  },
  [170] = {
    [aux_sym_narrative_repeat1] = STATE(195),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(473),
    [anon_sym_of] = ACTIONS(180),
    [anon_sym_than] = ACTIONS(180),
    [anon_sym_to] = ACTIONS(180),
    [anon_sym_on] = ACTIONS(180),
    [anon_sym_in] = ACTIONS(180),
  },
  [171] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(475),
  },
  [172] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(477),
  },
  [173] = {
    [aux_sym_narrative_repeat1] = STATE(173),
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(479),
    [sym_tag] = ACTIONS(208),
    [anon_sym_Scenario_COLON] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_and] = ACTIONS(208),
    [anon_sym_or] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_who] = ACTIONS(208),
    [anon_sym_which] = ACTIONS(208),
    [anon_sym_that] = ACTIONS(208),
    [anon_sym_of] = ACTIONS(208),
    [anon_sym_than] = ACTIONS(208),
    [anon_sym_to] = ACTIONS(208),
    [anon_sym_on] = ACTIONS(208),
    [anon_sym_in] = ACTIONS(208),
    [sym_given] = ACTIONS(208),
    [sym_then] = ACTIONS(208),
  },
  [174] = {
    [aux_sym_narrative_repeat1] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(482),
    [sym_tag] = ACTIONS(208),
    [anon_sym_Scenario_COLON] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [sym_given] = ACTIONS(208),
    [sym_then] = ACTIONS(208),
  },
  [175] = {
    [aux_sym_narrative_repeat1] = STATE(175),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(485),
  },
  [176] = {
    [aux_sym_narrative_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(488),
    [sym_tag] = ACTIONS(208),
    [anon_sym_Scenario_COLON] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_or] = ACTIONS(208),
    [sym_given] = ACTIONS(208),
    [sym_then] = ACTIONS(208),
  },
  [177] = {
    [sym_pos_class] = STATE(197),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(198),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(491),
    [anon_sym_a] = ACTIONS(493),
    [anon_sym_an] = ACTIONS(495),
  },
  [178] = {
    [aux_sym_conjunction_repeat2] = STATE(199),
    [ts_builtin_sym_end] = ACTIONS(497),
    [sym_tag] = ACTIONS(497),
    [anon_sym_Scenario_COLON] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_nor] = ACTIONS(438),
    [sym_given] = ACTIONS(497),
    [sym_then] = ACTIONS(497),
  },
  [179] = {
    [aux_sym_narrative_repeat1] = STATE(179),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(499),
    [anon_sym_nor] = ACTIONS(208),
  },
  [180] = {
    [sym_class_name] = STATE(76),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(122),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(258),
  },
  [181] = {
    [sym_pos_class] = STATE(151),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(122),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(442),
    [anon_sym_a] = ACTIONS(444),
    [anon_sym_an] = ACTIONS(446),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_tag] = ACTIONS(350),
    [anon_sym_Scenario_COLON] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_and] = ACTIONS(350),
    [anon_sym_or] = ACTIONS(350),
    [sym_given] = ACTIONS(350),
    [sym_then] = ACTIONS(350),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_tag] = ACTIONS(502),
    [anon_sym_Scenario_COLON] = ACTIONS(502),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_and] = ACTIONS(502),
    [sym_given] = ACTIONS(502),
    [sym_then] = ACTIONS(502),
  },
  [184] = {
    [sym_qualifier] = STATE(200),
    [sym_predicate_phrase] = STATE(188),
    [sym_predicate_open] = STATE(189),
    [anon_sym_is] = ACTIONS(452),
    [anon_sym_isn_SQUOTEt] = ACTIONS(454),
    [anon_sym_does] = ACTIONS(164),
    [anon_sym_doesn_SQUOTEt] = ACTIONS(166),
    [anon_sym_has] = ACTIONS(168),
    [anon_sym_hasn_SQUOTEt] = ACTIONS(170),
  },
  [185] = {
    [sym_class_expression] = STATE(203),
    [sym_pos_class] = STATE(115),
    [sym_class_atom] = STATE(116),
    [sym_conjunction] = STATE(117),
    [sym_disjunction] = STATE(117),
    [sym_qualified_class] = STATE(117),
    [sym_class_name] = STATE(118),
    [sym_predicate_fragement] = STATE(204),
    [sym_qname] = STATE(133),
    [aux_sym_narrative_repeat1] = STATE(134),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(266),
    [anon_sym_a] = ACTIONS(504),
    [anon_sym_an] = ACTIONS(506),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_neither] = ACTIONS(256),
    [anon_sym_the] = ACTIONS(508),
  },
  [186] = {
    [sym_predicate_fragement] = STATE(204),
    [sym_qname] = STATE(169),
    [aux_sym_narrative_repeat1] = STATE(170),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(510),
    [anon_sym_a] = ACTIONS(512),
    [anon_sym_an] = ACTIONS(508),
    [anon_sym_the] = ACTIONS(508),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(514),
    [sym_tag] = ACTIONS(514),
    [anon_sym_Scenario_COLON] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(514),
    [sym_given] = ACTIONS(514),
    [sym_then] = ACTIONS(514),
  },
  [188] = {
    [sym_quantifier] = STATE(206),
    [anon_sym_some] = ACTIONS(516),
    [anon_sym_only] = ACTIONS(516),
  },
  [189] = {
    [sym_predicate_name] = STATE(207),
    [sym_qname] = STATE(208),
    [aux_sym_narrative_repeat1] = STATE(209),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(518),
  },
  [190] = {
    [aux_sym_conjunction_repeat1] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(502),
    [sym_tag] = ACTIONS(502),
    [anon_sym_Scenario_COLON] = ACTIONS(502),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_and] = ACTIONS(520),
    [sym_given] = ACTIONS(502),
    [sym_then] = ACTIONS(502),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [sym_tag] = ACTIONS(523),
    [anon_sym_Scenario_COLON] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(523),
    [anon_sym_or] = ACTIONS(523),
    [sym_given] = ACTIONS(523),
    [sym_then] = ACTIONS(523),
  },
  [192] = {
    [aux_sym_disjunction_repeat1] = STATE(192),
    [ts_builtin_sym_end] = ACTIONS(523),
    [sym_tag] = ACTIONS(523),
    [anon_sym_Scenario_COLON] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(523),
    [anon_sym_or] = ACTIONS(525),
    [sym_given] = ACTIONS(523),
    [sym_then] = ACTIONS(523),
  },
  [193] = {
    [aux_sym_definition_repeat1] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_tag] = ACTIONS(377),
    [anon_sym_Scenario_COLON] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(377),
    [anon_sym_and] = ACTIONS(528),
    [sym_given] = ACTIONS(377),
    [sym_then] = ACTIONS(377),
  },
  [194] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(531),
  },
  [195] = {
    [aux_sym_narrative_repeat1] = STATE(195),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(533),
    [anon_sym_of] = ACTIONS(208),
    [anon_sym_than] = ACTIONS(208),
    [anon_sym_to] = ACTIONS(208),
    [anon_sym_on] = ACTIONS(208),
    [anon_sym_in] = ACTIONS(208),
  },
  [196] = {
    [sym_class_name] = STATE(76),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(198),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(536),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [sym_tag] = ACTIONS(538),
    [anon_sym_Scenario_COLON] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(538),
    [anon_sym_nor] = ACTIONS(538),
    [sym_given] = ACTIONS(538),
    [sym_then] = ACTIONS(538),
  },
  [198] = {
    [aux_sym_narrative_repeat1] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(540),
    [sym_tag] = ACTIONS(180),
    [anon_sym_Scenario_COLON] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_nor] = ACTIONS(180),
    [sym_given] = ACTIONS(180),
    [sym_then] = ACTIONS(180),
  },
  [199] = {
    [aux_sym_conjunction_repeat2] = STATE(199),
    [ts_builtin_sym_end] = ACTIONS(538),
    [sym_tag] = ACTIONS(538),
    [anon_sym_Scenario_COLON] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(538),
    [anon_sym_nor] = ACTIONS(542),
    [sym_given] = ACTIONS(538),
    [sym_then] = ACTIONS(538),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [sym_tag] = ACTIONS(545),
    [anon_sym_Scenario_COLON] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [sym_given] = ACTIONS(545),
    [sym_then] = ACTIONS(545),
  },
  [201] = {
    [sym_class_name] = STATE(76),
    [sym_predicate_fragement] = STATE(211),
    [sym_qname] = STATE(133),
    [aux_sym_narrative_repeat1] = STATE(134),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(381),
  },
  [202] = {
    [sym_predicate_fragement] = STATE(211),
    [sym_qname] = STATE(169),
    [aux_sym_narrative_repeat1] = STATE(170),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(383),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [sym_tag] = ACTIONS(547),
    [anon_sym_Scenario_COLON] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(547),
    [sym_given] = ACTIONS(547),
    [sym_then] = ACTIONS(547),
  },
  [204] = {
    [sym_predicate_end] = STATE(213),
    [anon_sym_of] = ACTIONS(549),
    [anon_sym_than] = ACTIONS(549),
    [anon_sym_to] = ACTIONS(549),
    [anon_sym_on] = ACTIONS(549),
    [anon_sym_in] = ACTIONS(549),
  },
  [205] = {
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(551),
    [anon_sym_a] = ACTIONS(551),
    [anon_sym_an] = ACTIONS(553),
    [anon_sym_not] = ACTIONS(553),
    [anon_sym_neither] = ACTIONS(553),
  },
  [206] = {
    [sym_class_expression] = STATE(214),
    [sym_pos_class] = STATE(115),
    [sym_class_atom] = STATE(116),
    [sym_conjunction] = STATE(117),
    [sym_disjunction] = STATE(117),
    [sym_qualified_class] = STATE(117),
    [sym_class_name] = STATE(118),
    [sym_qname] = STATE(69),
    [aux_sym_narrative_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(248),
    [anon_sym_a] = ACTIONS(250),
    [anon_sym_an] = ACTIONS(252),
    [anon_sym_not] = ACTIONS(254),
    [anon_sym_neither] = ACTIONS(256),
  },
  [207] = {
    [anon_sym_some] = ACTIONS(399),
    [anon_sym_only] = ACTIONS(399),
  },
  [208] = {
    [anon_sym_some] = ACTIONS(401),
    [anon_sym_only] = ACTIONS(401),
  },
  [209] = {
    [aux_sym_narrative_repeat1] = STATE(215),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(555),
    [anon_sym_some] = ACTIONS(180),
    [anon_sym_only] = ACTIONS(180),
  },
  [210] = {
    [aux_sym_narrative_repeat1] = STATE(210),
    [ts_builtin_sym_end] = ACTIONS(208),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(557),
    [sym_tag] = ACTIONS(208),
    [anon_sym_Scenario_COLON] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_nor] = ACTIONS(208),
    [sym_given] = ACTIONS(208),
    [sym_then] = ACTIONS(208),
  },
  [211] = {
    [sym_predicate_end] = STATE(216),
    [anon_sym_of] = ACTIONS(549),
    [anon_sym_than] = ACTIONS(549),
    [anon_sym_to] = ACTIONS(549),
    [anon_sym_on] = ACTIONS(549),
    [anon_sym_in] = ACTIONS(549),
  },
  [212] = {
    [anon_sym_some] = ACTIONS(475),
    [anon_sym_only] = ACTIONS(475),
  },
  [213] = {
    [anon_sym_some] = ACTIONS(477),
    [anon_sym_only] = ACTIONS(477),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [sym_tag] = ACTIONS(560),
    [anon_sym_Scenario_COLON] = ACTIONS(560),
    [anon_sym_DOT] = ACTIONS(560),
    [sym_given] = ACTIONS(560),
    [sym_then] = ACTIONS(560),
  },
  [215] = {
    [aux_sym_narrative_repeat1] = STATE(215),
    [aux_sym_SLASH_BSLASHS_SLASH] = ACTIONS(562),
    [anon_sym_some] = ACTIONS(208),
    [anon_sym_only] = ACTIONS(208),
  },
  [216] = {
    [anon_sym_some] = ACTIONS(531),
    [anon_sym_only] = ACTIONS(531),
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
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = true}, SHIFT(28),
  [43] = {.count = 1, .reusable = true}, SHIFT(29),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(14),
  [50] = {.count = 1, .reusable = true}, SHIFT(31),
  [52] = {.count = 1, .reusable = true}, SHIFT(32),
  [54] = {.count = 1, .reusable = false}, SHIFT(36),
  [56] = {.count = 1, .reusable = true}, SHIFT(34),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_background, 2),
  [60] = {.count = 1, .reusable = true}, SHIFT(39),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [64] = {.count = 1, .reusable = false}, SHIFT(54),
  [66] = {.count = 1, .reusable = true}, SHIFT(40),
  [68] = {.count = 1, .reusable = true}, SHIFT(41),
  [70] = {.count = 1, .reusable = true}, SHIFT(42),
  [72] = {.count = 1, .reusable = false}, SHIFT(43),
  [74] = {.count = 1, .reusable = true}, SHIFT(43),
  [76] = {.count = 1, .reusable = true}, SHIFT(55),
  [78] = {.count = 1, .reusable = true}, SHIFT(56),
  [80] = {.count = 1, .reusable = true}, SHIFT(57),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 2),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_body, 1),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(28),
  [97] = {.count = 1, .reusable = true}, SHIFT(62),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 4),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_narrative, 1),
  [103] = {.count = 1, .reusable = false}, SHIFT(63),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_language_ID, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_language_setting, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(36),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_uriref, 1),
  [115] = {.count = 1, .reusable = false}, SHIFT(65),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_background, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(17),
  [124] = {.count = 1, .reusable = true}, SHIFT(67),
  [126] = {.count = 1, .reusable = true}, SHIFT(70),
  [128] = {.count = 1, .reusable = true}, SHIFT(73),
  [130] = {.count = 1, .reusable = true}, SHIFT(75),
  [132] = {.count = 1, .reusable = true}, SHIFT(77),
  [134] = {.count = 1, .reusable = true}, SHIFT(78),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(79),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 1),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_proposition, 1),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_universal, 1),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 1),
  [148] = {.count = 1, .reusable = true}, SHIFT(80),
  [150] = {.count = 1, .reusable = true}, SHIFT(81),
  [152] = {.count = 1, .reusable = true}, SHIFT(83),
  [154] = {.count = 1, .reusable = true}, SHIFT(82),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 1),
  [158] = {.count = 1, .reusable = true}, SHIFT(84),
  [160] = {.count = 1, .reusable = false}, SHIFT(85),
  [162] = {.count = 1, .reusable = true}, SHIFT(85),
  [164] = {.count = 1, .reusable = false}, SHIFT(86),
  [166] = {.count = 1, .reusable = true}, SHIFT(86),
  [168] = {.count = 1, .reusable = false}, SHIFT(87),
  [170] = {.count = 1, .reusable = true}, SHIFT(87),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_class_name, 1),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_indiv_name, 1),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_indiv_name, 1),
  [178] = {.count = 1, .reusable = false}, SHIFT(91),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_qname, 1),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_qname, 1),
  [184] = {.count = 1, .reusable = true}, SHIFT(92),
  [186] = {.count = 1, .reusable = true}, SHIFT(94),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 1),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 1),
  [192] = {.count = 1, .reusable = true}, SHIFT(95),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_test, 2),
  [196] = {.count = 1, .reusable = true}, SHIFT(96),
  [198] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(22),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(23),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 3),
  [208] = {.count = 1, .reusable = true}, REDUCE(aux_sym_narrative_repeat1, 2),
  [210] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(63),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(65),
  [218] = {.count = 1, .reusable = true}, SHIFT(100),
  [220] = {.count = 1, .reusable = false}, SHIFT(101),
  [222] = {.count = 1, .reusable = true}, SHIFT(102),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_class_name, 1),
  [226] = {.count = 1, .reusable = false}, SHIFT(103),
  [228] = {.count = 1, .reusable = true}, SHIFT(104),
  [230] = {.count = 1, .reusable = false}, SHIFT(105),
  [232] = {.count = 1, .reusable = false}, SHIFT(106),
  [234] = {.count = 1, .reusable = true}, SHIFT(106),
  [236] = {.count = 1, .reusable = false}, SHIFT(107),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 2),
  [240] = {.count = 1, .reusable = false}, SHIFT(108),
  [242] = {.count = 1, .reusable = true}, SHIFT(110),
  [244] = {.count = 1, .reusable = false}, SHIFT(110),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 3),
  [248] = {.count = 1, .reusable = false}, SHIFT(119),
  [250] = {.count = 1, .reusable = false}, SHIFT(111),
  [252] = {.count = 1, .reusable = true}, SHIFT(111),
  [254] = {.count = 1, .reusable = true}, SHIFT(112),
  [256] = {.count = 1, .reusable = true}, SHIFT(113),
  [258] = {.count = 1, .reusable = true}, SHIFT(122),
  [260] = {.count = 1, .reusable = true}, SHIFT(125),
  [262] = {.count = 1, .reusable = true}, SHIFT(124),
  [264] = {.count = 1, .reusable = true}, SHIFT(127),
  [266] = {.count = 1, .reusable = false}, SHIFT(134),
  [268] = {.count = 1, .reusable = true}, SHIFT(128),
  [270] = {.count = 1, .reusable = false}, SHIFT(129),
  [272] = {.count = 1, .reusable = true}, SHIFT(129),
  [274] = {.count = 1, .reusable = false}, SHIFT(130),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 1),
  [278] = {.count = 1, .reusable = true}, SHIFT(135),
  [280] = {.count = 1, .reusable = true}, SHIFT(137),
  [282] = {.count = 1, .reusable = true}, SHIFT(140),
  [284] = {.count = 1, .reusable = true}, SHIFT(141),
  [286] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(91),
  [289] = {.count = 1, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_consistency, 1),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_consistency_test, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 2),
  [299] = {.count = 1, .reusable = true}, SHIFT(143),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_test, 3),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_inference_test, 2),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_infer_sentence, 1),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 5),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 5),
  [311] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(101),
  [314] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(103),
  [317] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(105),
  [320] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(107),
  [323] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(108),
  [326] = {.count = 1, .reusable = true}, SHIFT(148),
  [328] = {.count = 1, .reusable = true}, SHIFT(149),
  [330] = {.count = 1, .reusable = false}, SHIFT(149),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_source_body, 1),
  [334] = {.count = 1, .reusable = true}, SHIFT(119),
  [336] = {.count = 1, .reusable = false}, SHIFT(152),
  [338] = {.count = 1, .reusable = false}, SHIFT(150),
  [340] = {.count = 1, .reusable = true}, SHIFT(150),
  [342] = {.count = 1, .reusable = false}, SHIFT(155),
  [344] = {.count = 1, .reusable = false}, SHIFT(153),
  [346] = {.count = 1, .reusable = true}, SHIFT(153),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 3),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1),
  [352] = {.count = 1, .reusable = true}, SHIFT(156),
  [354] = {.count = 1, .reusable = true}, SHIFT(157),
  [356] = {.count = 1, .reusable = true}, SHIFT(158),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_class_expression, 1),
  [360] = {.count = 1, .reusable = true}, SHIFT(160),
  [362] = {.count = 1, .reusable = false}, SHIFT(162),
  [364] = {.count = 1, .reusable = true}, SHIFT(163),
  [366] = {.count = 1, .reusable = false}, SHIFT(165),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positve, 3),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 3),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym_universal_negative_repeat1, 2), SHIFT_REPEAT(125),
  [375] = {.count = 1, .reusable = true}, REDUCE(aux_sym_universal_negative_repeat1, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2),
  [379] = {.count = 1, .reusable = false}, SHIFT(166),
  [381] = {.count = 1, .reusable = true}, SHIFT(134),
  [383] = {.count = 1, .reusable = true}, SHIFT(170),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 3),
  [387] = {.count = 1, .reusable = true}, SHIFT(171),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_fragement, 1),
  [391] = {.count = 1, .reusable = false}, SHIFT(173),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_open, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_relation, 3),
  [397] = {.count = 1, .reusable = false}, SHIFT(174),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 2),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_name, 1),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_different, 3),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(84),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 3),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 3),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 6),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positve, 4),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 4),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_particular, 4),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_source, 4),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(149),
  [425] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2), SHIFT_REPEAT(149),
  [428] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_body_repeat1, 2),
  [430] = {.count = 1, .reusable = true}, SHIFT(152),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 2),
  [434] = {.count = 1, .reusable = false}, SHIFT(176),
  [436] = {.count = 1, .reusable = true}, SHIFT(155),
  [438] = {.count = 1, .reusable = true}, SHIFT(177),
  [440] = {.count = 1, .reusable = false}, SHIFT(179),
  [442] = {.count = 1, .reusable = false}, SHIFT(122),
  [444] = {.count = 1, .reusable = false}, SHIFT(180),
  [446] = {.count = 1, .reusable = true}, SHIFT(180),
  [448] = {.count = 1, .reusable = true}, SHIFT(181),
  [450] = {.count = 1, .reusable = true}, SHIFT(184),
  [452] = {.count = 1, .reusable = false}, SHIFT(185),
  [454] = {.count = 1, .reusable = true}, SHIFT(186),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 2),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction, 2),
  [460] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(162),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 4),
  [465] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(165),
  [468] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(166),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_equation, 4),
  [473] = {.count = 1, .reusable = false}, SHIFT(195),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_end, 1),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 3),
  [479] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(173),
  [482] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(174),
  [485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(175),
  [488] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(176),
  [491] = {.count = 1, .reusable = false}, SHIFT(198),
  [493] = {.count = 1, .reusable = false}, SHIFT(196),
  [495] = {.count = 1, .reusable = true}, SHIFT(196),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_conjunction, 3),
  [499] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(179),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [504] = {.count = 1, .reusable = false}, SHIFT(201),
  [506] = {.count = 1, .reusable = true}, SHIFT(201),
  [508] = {.count = 1, .reusable = true}, SHIFT(202),
  [510] = {.count = 1, .reusable = false}, SHIFT(170),
  [512] = {.count = 1, .reusable = false}, SHIFT(202),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 3),
  [516] = {.count = 1, .reusable = true}, SHIFT(205),
  [518] = {.count = 1, .reusable = true}, SHIFT(209),
  [520] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(156),
  [523] = {.count = 1, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(160),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(163),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_predicate_phrase, 4),
  [533] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(195),
  [536] = {.count = 1, .reusable = true}, SHIFT(198),
  [538] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [540] = {.count = 1, .reusable = false}, SHIFT(210),
  [542] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(177),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_qualified_class, 4),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 2),
  [549] = {.count = 1, .reusable = true}, SHIFT(212),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_quantifier, 1),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_quantifier, 1),
  [555] = {.count = 1, .reusable = false}, SHIFT(215),
  [557] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(210),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_qualifier, 3),
  [562] = {.count = 2, .reusable = false}, REDUCE(aux_sym_narrative_repeat1, 2), SHIFT_REPEAT(215),
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
