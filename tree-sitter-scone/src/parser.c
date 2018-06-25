#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 120
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_Feature_COLON = 1,
  anon_sym_LF = 2,
  aux_sym_SLASH_DOT_PLUS_SLASH = 3,
  anon_sym_Background_COLON = 4,
  sym_tag = 5,
  anon_sym_STARLanguage = 6,
  anon_sym_PERCENTOWL = 7,
  anon_sym_PERCENTCommonLogic = 8,
  anon_sym_STARTest = 9,
  anon_sym_theontology = 10,
  anon_sym_Scenario_COLON = 11,
  anon_sym_DOT = 12,
  anon_sym_thescenariois = 13,
  anon_sym_isenumeratedas = 14,
  anon_sym_and = 15,
  anon_sym_every = 16,
  anon_sym_is = 17,
  anon_sym_isasubclassof = 18,
  anon_sym_no = 19,
  anon_sym_isa = 20,
  anon_sym_aredisjoint = 21,
  anon_sym_some = 22,
  anon_sym_are = 23,
  anon_sym_aren_SQUOTEt = 24,
  anon_sym_isn_SQUOTEt = 25,
  anon_sym_thesameas = 26,
  anon_sym_a = 27,
  anon_sym_an = 28,
  anon_sym_not = 29,
  sym_qname = 30,
  sym_uriref = 31,
  sym_given = 32,
  sym_then = 33,
  anon_sym_consistent = 34,
  anon_sym_inconsistent = 35,
  sym_is_defined_as = 36,
  anon_sym_don_SQUOTEt = 37,
  anon_sym_infer = 38,
  anon_sym_that = 39,
  sym_source_file = 40,
  sym_feature = 41,
  sym_title = 42,
  sym_narrative = 43,
  sym_background = 44,
  sym_language_setting = 45,
  sym_language_ID = 46,
  sym_import = 47,
  sym_scenario = 48,
  sym_scenario_head = 49,
  sym_scenario_body = 50,
  sym_assumption = 51,
  sym_test = 52,
  sym_inference_test = 53,
  sym_consistency_test = 54,
  sym_sentence = 55,
  sym_infer_sentence = 56,
  sym_definition = 57,
  sym_proposition = 58,
  sym_universal = 59,
  sym_universal_positve = 60,
  sym_universal_negative = 61,
  sym_particular = 62,
  sym_fact = 63,
  sym_instance = 64,
  sym_equation = 65,
  sym_class_expression = 66,
  sym_pos_class = 67,
  sym_class_atom = 68,
  sym_class_name = 69,
  sym_indiv = 70,
  sym_indiv_name = 71,
  sym_consistency = 72,
  sym_infer_start = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_feature_repeat1 = 75,
  aux_sym_background_repeat1 = 76,
  aux_sym_scenario_body_repeat1 = 77,
  aux_sym_scenario_body_repeat2 = 78,
  aux_sym_definition_repeat1 = 79,
  aux_sym_universal_negative_repeat1 = 80,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_Feature_COLON] = "Feature:",
  [anon_sym_LF] = "\n",
  [aux_sym_SLASH_DOT_PLUS_SLASH] = "/.+/",
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
  [anon_sym_a] = "a",
  [anon_sym_an] = "an",
  [anon_sym_not] = "not",
  [sym_qname] = "qname",
  [sym_uriref] = "uriref",
  [sym_given] = "given",
  [sym_then] = "then",
  [anon_sym_consistent] = "consistent",
  [anon_sym_inconsistent] = "inconsistent",
  [sym_is_defined_as] = "is_defined_as",
  [anon_sym_don_SQUOTEt] = "don't",
  [anon_sym_infer] = "infer",
  [anon_sym_that] = "that",
  [sym_source_file] = "source_file",
  [sym_feature] = "feature",
  [sym_title] = "title",
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
  [sym_equation] = "equation",
  [sym_class_expression] = "class_expression",
  [sym_pos_class] = "pos_class",
  [sym_class_atom] = "class_atom",
  [sym_class_name] = "class_name",
  [sym_indiv] = "indiv",
  [sym_indiv_name] = "indiv_name",
  [sym_consistency] = "consistency",
  [sym_infer_start] = "infer_start",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_feature_repeat1] = "feature_repeat1",
  [aux_sym_background_repeat1] = "background_repeat1",
  [aux_sym_scenario_body_repeat1] = "scenario_body_repeat1",
  [aux_sym_scenario_body_repeat2] = "scenario_body_repeat2",
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_universal_negative_repeat1] = "universal_negative_repeat1",
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
  [aux_sym_SLASH_DOT_PLUS_SLASH] = {
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
  [sym_qname] = {
    .visible = true,
    .named = true,
  },
  [sym_uriref] = {
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
  [anon_sym_that] = {
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
  [sym_title] = {
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
  [sym_equation] = {
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
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_indiv] = {
    .visible = true,
    .named = true,
  },
  [sym_indiv_name] = {
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
  [aux_sym_background_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_body_repeat2] = {
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
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == 'B')
        ADVANCE(32);
      if (lookahead == 'F')
        ADVANCE(43);
      if (lookahead == 'G')
        ADVANCE(51);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(77);
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'e')
        ADVANCE(92);
      if (lookahead == 'i')
        ADVANCE(97);
      if (lookahead == 'n')
        ADVANCE(153);
      if (lookahead == 'q')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == 't')
        ADVANCE(165);
      if (lookahead == 'u')
        ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
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
      if (lookahead == ' ')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'L')
        ADVANCE(19);
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'a')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'n')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'g')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'u')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'a')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'g')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STARLanguage);
      END_STATE();
    case 27:
      if (lookahead == 'e')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 's')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 't')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STARTest);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 32:
      if (lookahead == 'a')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'c')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'k')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'g')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'r')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'o')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'u')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'n')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'd')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ':')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Background_COLON);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'a')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 't')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'u')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'r')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'e')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == ':')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Feature_COLON);
      END_STATE();
    case 51:
      if (lookahead == 'i')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'v')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_given);
      END_STATE();
    case 56:
      if (lookahead == 'c')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'n')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'r')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'i')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'o')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == ':')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Scenario_COLON);
      END_STATE();
    case 65:
      if (lookahead == 'h')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'n')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_then);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'n')
        ADVANCE(70);
      if (lookahead == 'r')
        ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_an);
      if (lookahead == 'd')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_are);
      if (lookahead == 'n')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == '\'')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_aren_SQUOTEt);
      END_STATE();
    case 77:
      if (lookahead == 'o')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'n')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 's')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'i')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 's')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 't')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'e')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'n')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 't')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_consistent);
      END_STATE();
    case 87:
      if (lookahead == 'o')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == '\'')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 't')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_don_SQUOTEt);
      END_STATE();
    case 92:
      if (lookahead == 'v')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'r')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'y')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_every);
      END_STATE();
    case 97:
      if (lookahead == 'n')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'c')
        ADVANCE(99);
      if (lookahead == 'f')
        ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == 'o')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'n')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 's')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'i')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 's')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 't')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'e')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'n')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 't')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_inconsistent);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'r')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_infer);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == ' ')
        ADVANCE(113);
      if (lookahead == 'n')
        ADVANCE(150);
      END_STATE();
    case 113:
      if (lookahead == 'a')
        ADVANCE(114);
      if (lookahead == 'd')
        ADVANCE(127);
      if (lookahead == 'e')
        ADVANCE(137);
      END_STATE();
    case 114:
      if (lookahead == ' ')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 's')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'u')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'b')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'c')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'l')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'a')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 's')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 's')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == ' ')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'o')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'f')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_isasubclassof);
      END_STATE();
    case 127:
      if (lookahead == 'e')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'f')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'i')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'n')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'e')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'd')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == ' ')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'a')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 's')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_is_defined_as);
      END_STATE();
    case 137:
      if (lookahead == 'n')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'u')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'm')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'e')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'r')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'a')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 't')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'e')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'd')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == ' ')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'a')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 's')
        ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_isenumeratedas);
      END_STATE();
    case 150:
      if (lookahead == '\'')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 't')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_isn_SQUOTEt);
      END_STATE();
    case 153:
      if (lookahead == 'o')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 't')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 156:
      if (lookahead == 'n')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'a')
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
      ACCEPT_TOKEN(sym_qname);
      END_STATE();
    case 161:
      if (lookahead == 'o')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'm')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 165:
      if (lookahead == 'h')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'a')
        ADVANCE(167);
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 167:
      if (lookahead == 't')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_that);
      END_STATE();
    case 169:
      if (lookahead == ' ')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'o')
        ADVANCE(171);
      if (lookahead == 's')
        ADVANCE(179);
      END_STATE();
    case 171:
      if (lookahead == 'n')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'o')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'l')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'o')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'g')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'y')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_theontology);
      END_STATE();
    case 179:
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == 'c')
        ADVANCE(186);
      END_STATE();
    case 180:
      if (lookahead == 'm')
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
      if (lookahead == 'a')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 's')
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_thesameas);
      END_STATE();
    case 186:
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'n')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'a')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'r')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'i')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'o')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == ' ')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'i')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 's')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_thescenariois);
      END_STATE();
    case 196:
      if (lookahead == 'r')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'i')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'r')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'f')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_uriref);
      END_STATE();
    case 202:
      if (lookahead == 'F')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      END_STATE();
    case 203:
      if (lookahead == ' ')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 's')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'p')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'a')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'c')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'e')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == ' ')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'd')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'e')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'l')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'i')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'n')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'i')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 't')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'd')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == ' ')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 's')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 't')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'r')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'i')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'n')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'g')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == ' ')
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
      if (lookahead == 'a')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'r')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 't')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'n')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'g')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == ' ')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'w')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'i')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 't')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'h')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == ' ')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == '@')
        ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 242:
      if (lookahead == '\n')
        SKIP(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(243);
      if (lookahead != 0)
        ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(244);
      END_STATE();
    case 245:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      END_STATE();
    case 246:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'B')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(246);
      END_STATE();
    case 247:
      if (lookahead == '\n')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 249:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(17);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      END_STATE();
    case 250:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(250);
      END_STATE();
    case 251:
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == 'G')
        ADVANCE(51);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(251);
      END_STATE();
    case 252:
      if (lookahead == 'n')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'd')
        ADVANCE(71);
      END_STATE();
    case 254:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      END_STATE();
    case 255:
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'u')
        ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(255);
      END_STATE();
    case 256:
      if (lookahead == 'h')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'e')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == ' ')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'o')
        ADVANCE(171);
      END_STATE();
    case 260:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(261);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      END_STATE();
    case 261:
      if (lookahead == ' ')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 263:
      if (lookahead == 'a')
        ADVANCE(264);
      if (lookahead == 'e')
        ADVANCE(92);
      if (lookahead == 'n')
        ADVANCE(266);
      if (lookahead == 'q')
        ADVANCE(156);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == 'n')
        ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_an);
      END_STATE();
    case 266:
      if (lookahead == 'o')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 268:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '*')
        ADVANCE(261);
      if (lookahead == 'G')
        ADVANCE(51);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(268);
      END_STATE();
    case 269:
      if (lookahead == 'a')
        ADVANCE(252);
      if (lookahead == 'i')
        ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(269);
      END_STATE();
    case 270:
      if (lookahead == 's')
        ADVANCE(112);
      END_STATE();
    case 271:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == 'G')
        ADVANCE(51);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      END_STATE();
    case 272:
      if (lookahead == 'i')
        ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      END_STATE();
    case 273:
      if (lookahead == 's')
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'n')
        ADVANCE(150);
      END_STATE();
    case 275:
      if (lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      END_STATE();
    case 276:
      if (lookahead == 'n')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'f')
        ADVANCE(109);
      END_STATE();
    case 278:
      if (lookahead == 'h')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'e')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == ' ')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 's')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'c')
        ADVANCE(186);
      END_STATE();
    case 283:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      END_STATE();
    case 284:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == 'G')
        ADVANCE(51);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead == 'i')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(284);
      END_STATE();
    case 285:
      if (lookahead == ' ')
        ADVANCE(204);
      if (lookahead == 'r')
        ADVANCE(72);
      END_STATE();
    case 286:
      if (lookahead == 's')
        ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 288:
      if (lookahead == 'i')
        ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      END_STATE();
    case 289:
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(289);
      END_STATE();
    case 290:
      if (lookahead == 's')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == ' ')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'a')
        ADVANCE(293);
      if (lookahead == 'd')
        ADVANCE(127);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_isa);
      END_STATE();
    case 294:
      if (lookahead == 'i')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(294);
      END_STATE();
    case 295:
      if (lookahead == 's')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == ' ')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'a')
        ADVANCE(293);
      END_STATE();
    case 298:
      if (lookahead == 'a')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      END_STATE();
    case 299:
      if (lookahead == 'r')
        ADVANCE(72);
      END_STATE();
    case 300:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == 'G')
        ADVANCE(51);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == 'i')
        ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(300);
      END_STATE();
    case 301:
      if (lookahead == 's')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == ' ')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'd')
        ADVANCE(127);
      END_STATE();
    case 304:
      if (lookahead == 'a')
        ADVANCE(264);
      if (lookahead == 'n')
        ADVANCE(305);
      if (lookahead == 'q')
        ADVANCE(156);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(304);
      END_STATE();
    case 305:
      if (lookahead == 'o')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 't')
        ADVANCE(155);
      END_STATE();
    case 307:
      if (lookahead == 'h')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'e')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == ' ')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 's')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'a')
        ADVANCE(180);
      END_STATE();
    case 312:
      if (lookahead == 'a')
        ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(312);
      END_STATE();
    case 313:
      if (lookahead == 'n')
        ADVANCE(253);
      if (lookahead == 'r')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'e')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == ' ')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'd')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'i')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 's')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'j')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'o')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'i')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'n')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 't')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_aredisjoint);
      END_STATE();
    case 325:
      if (lookahead == 'c')
        ADVANCE(77);
      if (lookahead == 'i')
        ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(325);
      END_STATE();
    case 326:
      if (lookahead == 'n')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'c')
        ADVANCE(99);
      END_STATE();
    case 328:
      if (lookahead == 'a')
        ADVANCE(264);
      if (lookahead == 'e')
        ADVANCE(92);
      if (lookahead == 'n')
        ADVANCE(266);
      if (lookahead == 'q')
        ADVANCE(156);
      if (lookahead == 't')
        ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      END_STATE();
    case 329:
      if (lookahead == 'h')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'a')
        ADVANCE(167);
      END_STATE();
    case 331:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      END_STATE();
    case 332:
      if (lookahead == '*')
        ADVANCE(333);
      if (lookahead == 'G')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(332);
      END_STATE();
    case 333:
      if (lookahead == ' ')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'L')
        ADVANCE(19);
      END_STATE();
    case 335:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == 'G')
        ADVANCE(51);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(335);
      END_STATE();
    case 336:
      if (lookahead == ' ')
        ADVANCE(204);
      if (lookahead == 'n')
        ADVANCE(253);
      END_STATE();
    case 337:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(31);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(337);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 202},
  [2] = {.lex_state = 242},
  [3] = {.lex_state = 245},
  [4] = {.lex_state = 246},
  [5] = {.lex_state = 202},
  [6] = {.lex_state = 247},
  [7] = {.lex_state = 247},
  [8] = {.lex_state = 249},
  [9] = {.lex_state = 242},
  [10] = {.lex_state = 250},
  [11] = {.lex_state = 251},
  [12] = {.lex_state = 250},
  [13] = {.lex_state = 246},
  [14] = {.lex_state = 242},
  [15] = {.lex_state = 202},
  [16] = {.lex_state = 242},
  [17] = {.lex_state = 254},
  [18] = {.lex_state = 255},
  [19] = {.lex_state = 260},
  [20] = {.lex_state = 260},
  [21] = {.lex_state = 247},
  [22] = {.lex_state = 250},
  [23] = {.lex_state = 263},
  [24] = {.lex_state = 250},
  [25] = {.lex_state = 251},
  [26] = {.lex_state = 250},
  [27] = {.lex_state = 251},
  [28] = {.lex_state = 246},
  [29] = {.lex_state = 247},
  [30] = {.lex_state = 246},
  [31] = {.lex_state = 246},
  [32] = {.lex_state = 268},
  [33] = {.lex_state = 268},
  [34] = {.lex_state = 255},
  [35] = {.lex_state = 260},
  [36] = {.lex_state = 260},
  [37] = {.lex_state = 260},
  [38] = {.lex_state = 242},
  [39] = {.lex_state = 263},
  [40] = {.lex_state = 263},
  [41] = {.lex_state = 263},
  [42] = {.lex_state = 263},
  [43] = {.lex_state = 269},
  [44] = {.lex_state = 251},
  [45] = {.lex_state = 251},
  [46] = {.lex_state = 251},
  [47] = {.lex_state = 271},
  [48] = {.lex_state = 271},
  [49] = {.lex_state = 269},
  [50] = {.lex_state = 269},
  [51] = {.lex_state = 272},
  [52] = {.lex_state = 275},
  [53] = {.lex_state = 251},
  [54] = {.lex_state = 283},
  [55] = {.lex_state = 250},
  [56] = {.lex_state = 242},
  [57] = {.lex_state = 260},
  [58] = {.lex_state = 247},
  [59] = {.lex_state = 247},
  [60] = {.lex_state = 284},
  [61] = {.lex_state = 288},
  [62] = {.lex_state = 289},
  [63] = {.lex_state = 294},
  [64] = {.lex_state = 298},
  [65] = {.lex_state = 300},
  [66] = {.lex_state = 251},
  [67] = {.lex_state = 304},
  [68] = {.lex_state = 263},
  [69] = {.lex_state = 304},
  [70] = {.lex_state = 312},
  [71] = {.lex_state = 304},
  [72] = {.lex_state = 325},
  [73] = {.lex_state = 275},
  [74] = {.lex_state = 328},
  [75] = {.lex_state = 331},
  [76] = {.lex_state = 263},
  [77] = {.lex_state = 283},
  [78] = {.lex_state = 246},
  [79] = {.lex_state = 332},
  [80] = {.lex_state = 304},
  [81] = {.lex_state = 304},
  [82] = {.lex_state = 304},
  [83] = {.lex_state = 263},
  [84] = {.lex_state = 263},
  [85] = {.lex_state = 271},
  [86] = {.lex_state = 271},
  [87] = {.lex_state = 271},
  [88] = {.lex_state = 271},
  [89] = {.lex_state = 335},
  [90] = {.lex_state = 251},
  [91] = {.lex_state = 271},
  [92] = {.lex_state = 271},
  [93] = {.lex_state = 312},
  [94] = {.lex_state = 263},
  [95] = {.lex_state = 271},
  [96] = {.lex_state = 331},
  [97] = {.lex_state = 331},
  [98] = {.lex_state = 328},
  [99] = {.lex_state = 263},
  [100] = {.lex_state = 283},
  [101] = {.lex_state = 331},
  [102] = {.lex_state = 331},
  [103] = {.lex_state = 269},
  [104] = {.lex_state = 251},
  [105] = {.lex_state = 271},
  [106] = {.lex_state = 271},
  [107] = {.lex_state = 251},
  [108] = {.lex_state = 271},
  [109] = {.lex_state = 263},
  [110] = {.lex_state = 251},
  [111] = {.lex_state = 271},
  [112] = {.lex_state = 271},
  [113] = {.lex_state = 263},
  [114] = {.lex_state = 263},
  [115] = {.lex_state = 335},
  [116] = {.lex_state = 251},
  [117] = {.lex_state = 337},
  [118] = {.lex_state = 337},
  [119] = {.lex_state = 337},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Feature_COLON] = ACTIONS(1),
    [anon_sym_Background_COLON] = ACTIONS(1),
    [anon_sym_STARLanguage] = ACTIONS(1),
    [anon_sym_PERCENTOWL] = ACTIONS(1),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(1),
    [anon_sym_STARTest] = ACTIONS(1),
    [anon_sym_theontology] = ACTIONS(1),
    [anon_sym_Scenario_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_thescenariois] = ACTIONS(1),
    [anon_sym_isenumeratedas] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_every] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(3),
    [anon_sym_isasubclassof] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(3),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_are] = ACTIONS(3),
    [anon_sym_aren_SQUOTEt] = ACTIONS(1),
    [anon_sym_isn_SQUOTEt] = ACTIONS(1),
    [anon_sym_thesameas] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(3),
    [anon_sym_an] = ACTIONS(3),
    [anon_sym_not] = ACTIONS(1),
    [sym_qname] = ACTIONS(1),
    [sym_uriref] = ACTIONS(1),
    [sym_given] = ACTIONS(1),
    [sym_then] = ACTIONS(1),
    [anon_sym_consistent] = ACTIONS(1),
    [anon_sym_inconsistent] = ACTIONS(1),
    [sym_is_defined_as] = ACTIONS(1),
    [anon_sym_don_SQUOTEt] = ACTIONS(1),
    [anon_sym_infer] = ACTIONS(1),
    [anon_sym_that] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_feature] = STATE(4),
    [aux_sym_feature_repeat1] = STATE(5),
    [anon_sym_Feature_COLON] = ACTIONS(5),
    [sym_tag] = ACTIONS(7),
  },
  [2] = {
    [sym_title] = STATE(7),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(9),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [4] = {
    [sym_background] = STATE(10),
    [sym_scenario] = STATE(12),
    [sym_scenario_head] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_feature_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_Background_COLON] = ACTIONS(15),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [5] = {
    [aux_sym_feature_repeat1] = STATE(15),
    [anon_sym_Feature_COLON] = ACTIONS(21),
    [sym_tag] = ACTIONS(23),
  },
  [6] = {
    [anon_sym_LF] = ACTIONS(25),
  },
  [7] = {
    [anon_sym_LF] = ACTIONS(27),
  },
  [8] = {
    [sym_language_setting] = STATE(19),
    [sym_import] = STATE(20),
    [aux_sym_background_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_tag] = ACTIONS(29),
    [anon_sym_STARLanguage] = ACTIONS(31),
    [anon_sym_STARTest] = ACTIONS(33),
    [anon_sym_Scenario_COLON] = ACTIONS(29),
  },
  [9] = {
    [sym_title] = STATE(21),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(9),
  },
  [10] = {
    [sym_scenario] = STATE(22),
    [sym_scenario_head] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(22),
    [aux_sym_feature_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [11] = {
    [sym_scenario_body] = STATE(24),
    [sym_assumption] = STATE(25),
    [aux_sym_scenario_body_repeat1] = STATE(25),
    [sym_given] = ACTIONS(37),
  },
  [12] = {
    [sym_scenario] = STATE(26),
    [sym_scenario_head] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_feature_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [13] = {
    [sym_scenario_head] = STATE(27),
    [aux_sym_feature_repeat1] = STATE(28),
    [sym_tag] = ACTIONS(39),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [14] = {
    [sym_title] = STATE(29),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(9),
  },
  [15] = {
    [aux_sym_feature_repeat1] = STATE(15),
    [anon_sym_Feature_COLON] = ACTIONS(41),
    [sym_tag] = ACTIONS(43),
  },
  [16] = {
    [sym_narrative] = STATE(31),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(46),
  },
  [17] = {
    [sym_language_ID] = STATE(33),
    [anon_sym_PERCENTOWL] = ACTIONS(48),
    [anon_sym_PERCENTCommonLogic] = ACTIONS(48),
  },
  [18] = {
    [anon_sym_theontology] = ACTIONS(50),
    [sym_uriref] = ACTIONS(52),
  },
  [19] = {
    [sym_import] = STATE(36),
    [aux_sym_background_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_tag] = ACTIONS(54),
    [anon_sym_STARTest] = ACTIONS(33),
    [anon_sym_Scenario_COLON] = ACTIONS(54),
  },
  [20] = {
    [sym_import] = STATE(37),
    [aux_sym_background_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_tag] = ACTIONS(54),
    [anon_sym_STARTest] = ACTIONS(33),
    [anon_sym_Scenario_COLON] = ACTIONS(54),
  },
  [21] = {
    [anon_sym_LF] = ACTIONS(56),
  },
  [22] = {
    [sym_scenario] = STATE(26),
    [sym_scenario_head] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_feature_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_tag] = ACTIONS(17),
    [anon_sym_Scenario_COLON] = ACTIONS(19),
  },
  [23] = {
    [sym_sentence] = STATE(44),
    [sym_definition] = STATE(45),
    [sym_proposition] = STATE(45),
    [sym_universal] = STATE(46),
    [sym_universal_positve] = STATE(47),
    [sym_universal_negative] = STATE(47),
    [sym_particular] = STATE(46),
    [sym_fact] = STATE(45),
    [sym_instance] = STATE(48),
    [sym_equation] = STATE(48),
    [sym_pos_class] = STATE(49),
    [sym_class_name] = STATE(50),
    [sym_indiv_name] = STATE(51),
    [anon_sym_every] = ACTIONS(60),
    [anon_sym_no] = ACTIONS(62),
    [anon_sym_some] = ACTIONS(64),
    [anon_sym_a] = ACTIONS(66),
    [anon_sym_an] = ACTIONS(68),
    [sym_qname] = ACTIONS(70),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_tag] = ACTIONS(72),
    [anon_sym_Scenario_COLON] = ACTIONS(72),
  },
  [25] = {
    [sym_assumption] = STATE(53),
    [sym_test] = STATE(54),
    [aux_sym_scenario_body_repeat1] = STATE(53),
    [aux_sym_scenario_body_repeat2] = STATE(54),
    [sym_given] = ACTIONS(37),
    [sym_then] = ACTIONS(74),
  },
  [26] = {
    [sym_scenario] = STATE(26),
    [sym_scenario_head] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_feature_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_tag] = ACTIONS(78),
    [anon_sym_Scenario_COLON] = ACTIONS(81),
  },
  [27] = {
    [sym_scenario_body] = STATE(55),
    [sym_assumption] = STATE(25),
    [aux_sym_scenario_body_repeat1] = STATE(25),
    [sym_given] = ACTIONS(37),
  },
  [28] = {
    [aux_sym_feature_repeat1] = STATE(28),
    [sym_tag] = ACTIONS(84),
    [anon_sym_Scenario_COLON] = ACTIONS(41),
  },
  [29] = {
    [anon_sym_LF] = ACTIONS(87),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_Background_COLON] = ACTIONS(89),
    [sym_tag] = ACTIONS(89),
    [anon_sym_Scenario_COLON] = ACTIONS(89),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_Background_COLON] = ACTIONS(91),
    [sym_tag] = ACTIONS(91),
    [anon_sym_Scenario_COLON] = ACTIONS(91),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_tag] = ACTIONS(93),
    [anon_sym_STARTest] = ACTIONS(93),
    [anon_sym_Scenario_COLON] = ACTIONS(93),
    [sym_given] = ACTIONS(93),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_tag] = ACTIONS(95),
    [anon_sym_STARTest] = ACTIONS(95),
    [anon_sym_Scenario_COLON] = ACTIONS(95),
    [sym_given] = ACTIONS(95),
  },
  [34] = {
    [sym_uriref] = ACTIONS(97),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_tag] = ACTIONS(99),
    [anon_sym_STARTest] = ACTIONS(99),
    [anon_sym_Scenario_COLON] = ACTIONS(99),
  },
  [36] = {
    [sym_import] = STATE(37),
    [aux_sym_background_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_tag] = ACTIONS(101),
    [anon_sym_STARTest] = ACTIONS(33),
    [anon_sym_Scenario_COLON] = ACTIONS(101),
  },
  [37] = {
    [sym_import] = STATE(37),
    [aux_sym_background_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_tag] = ACTIONS(103),
    [anon_sym_STARTest] = ACTIONS(105),
    [anon_sym_Scenario_COLON] = ACTIONS(103),
  },
  [38] = {
    [sym_narrative] = STATE(59),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(108),
  },
  [39] = {
    [sym_class_name] = STATE(61),
    [sym_qname] = ACTIONS(110),
  },
  [40] = {
    [sym_class_name] = STATE(63),
    [sym_qname] = ACTIONS(112),
  },
  [41] = {
    [sym_class_name] = STATE(64),
    [sym_qname] = ACTIONS(110),
  },
  [42] = {
    [sym_class_name] = STATE(65),
    [sym_qname] = ACTIONS(112),
  },
  [43] = {
    [anon_sym_isenumeratedas] = ACTIONS(114),
    [anon_sym_and] = ACTIONS(114),
    [anon_sym_is] = ACTIONS(116),
    [anon_sym_isasubclassof] = ACTIONS(114),
    [anon_sym_isn_SQUOTEt] = ACTIONS(118),
    [sym_is_defined_as] = ACTIONS(114),
  },
  [44] = {
    [anon_sym_DOT] = ACTIONS(120),
    [sym_given] = ACTIONS(122),
    [sym_then] = ACTIONS(122),
  },
  [45] = {
    [anon_sym_DOT] = ACTIONS(124),
    [sym_given] = ACTIONS(124),
    [sym_then] = ACTIONS(124),
  },
  [46] = {
    [anon_sym_DOT] = ACTIONS(126),
    [sym_given] = ACTIONS(126),
    [sym_then] = ACTIONS(126),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_tag] = ACTIONS(128),
    [anon_sym_Scenario_COLON] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(128),
    [sym_given] = ACTIONS(128),
    [sym_then] = ACTIONS(128),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_tag] = ACTIONS(130),
    [anon_sym_Scenario_COLON] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [sym_given] = ACTIONS(130),
    [sym_then] = ACTIONS(130),
  },
  [49] = {
    [sym_is_defined_as] = ACTIONS(132),
  },
  [50] = {
    [aux_sym_universal_negative_repeat1] = STATE(70),
    [anon_sym_isenumeratedas] = ACTIONS(134),
    [anon_sym_and] = ACTIONS(136),
    [anon_sym_isasubclassof] = ACTIONS(138),
    [sym_is_defined_as] = ACTIONS(140),
  },
  [51] = {
    [anon_sym_is] = ACTIONS(142),
    [anon_sym_isn_SQUOTEt] = ACTIONS(144),
  },
  [52] = {
    [sym_inference_test] = STATE(75),
    [sym_consistency_test] = STATE(75),
    [sym_infer_start] = STATE(76),
    [anon_sym_thescenariois] = ACTIONS(146),
    [anon_sym_don_SQUOTEt] = ACTIONS(148),
    [anon_sym_infer] = ACTIONS(150),
  },
  [53] = {
    [sym_assumption] = STATE(53),
    [aux_sym_scenario_body_repeat1] = STATE(53),
    [sym_given] = ACTIONS(152),
    [sym_then] = ACTIONS(155),
  },
  [54] = {
    [sym_test] = STATE(77),
    [aux_sym_scenario_body_repeat2] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_tag] = ACTIONS(157),
    [anon_sym_Scenario_COLON] = ACTIONS(157),
    [sym_then] = ACTIONS(74),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_tag] = ACTIONS(159),
    [anon_sym_Scenario_COLON] = ACTIONS(159),
  },
  [56] = {
    [sym_narrative] = STATE(78),
    [aux_sym_SLASH_DOT_PLUS_SLASH] = ACTIONS(46),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_tag] = ACTIONS(161),
    [anon_sym_STARTest] = ACTIONS(161),
    [anon_sym_Scenario_COLON] = ACTIONS(161),
  },
  [58] = {
    [anon_sym_LF] = ACTIONS(89),
  },
  [59] = {
    [anon_sym_LF] = ACTIONS(163),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_tag] = ACTIONS(114),
    [anon_sym_Scenario_COLON] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_is] = ACTIONS(114),
    [anon_sym_are] = ACTIONS(165),
    [anon_sym_aren_SQUOTEt] = ACTIONS(114),
    [sym_given] = ACTIONS(114),
    [sym_then] = ACTIONS(114),
  },
  [61] = {
    [anon_sym_is] = ACTIONS(167),
  },
  [62] = {
    [anon_sym_isa] = ACTIONS(114),
    [sym_is_defined_as] = ACTIONS(114),
  },
  [63] = {
    [anon_sym_isa] = ACTIONS(169),
  },
  [64] = {
    [anon_sym_are] = ACTIONS(171),
    [anon_sym_aren_SQUOTEt] = ACTIONS(173),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_tag] = ACTIONS(175),
    [anon_sym_Scenario_COLON] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(175),
    [sym_given] = ACTIONS(175),
    [sym_then] = ACTIONS(175),
    [sym_is_defined_as] = ACTIONS(175),
  },
  [66] = {
    [sym_given] = ACTIONS(177),
    [sym_then] = ACTIONS(177),
  },
  [67] = {
    [sym_class_expression] = STATE(85),
    [sym_pos_class] = STATE(86),
    [sym_class_atom] = STATE(87),
    [sym_class_name] = STATE(88),
    [anon_sym_a] = ACTIONS(179),
    [anon_sym_an] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(183),
    [sym_qname] = ACTIONS(110),
  },
  [68] = {
    [sym_indiv] = STATE(90),
    [sym_qname] = ACTIONS(185),
  },
  [69] = {
    [sym_class_expression] = STATE(91),
    [sym_pos_class] = STATE(86),
    [sym_class_atom] = STATE(87),
    [sym_class_name] = STATE(88),
    [anon_sym_a] = ACTIONS(179),
    [anon_sym_an] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(183),
    [sym_qname] = ACTIONS(110),
  },
  [70] = {
    [aux_sym_universal_negative_repeat1] = STATE(93),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_aredisjoint] = ACTIONS(189),
  },
  [71] = {
    [sym_class_expression] = STATE(95),
    [sym_pos_class] = STATE(86),
    [sym_class_atom] = STATE(87),
    [sym_class_name] = STATE(88),
    [anon_sym_thesameas] = ACTIONS(191),
    [anon_sym_a] = ACTIONS(179),
    [anon_sym_an] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(183),
    [sym_qname] = ACTIONS(110),
  },
  [72] = {
    [sym_consistency] = STATE(97),
    [anon_sym_consistent] = ACTIONS(193),
    [anon_sym_inconsistent] = ACTIONS(193),
  },
  [73] = {
    [anon_sym_infer] = ACTIONS(195),
  },
  [74] = {
    [anon_sym_every] = ACTIONS(197),
    [anon_sym_no] = ACTIONS(197),
    [anon_sym_a] = ACTIONS(199),
    [anon_sym_an] = ACTIONS(197),
    [sym_qname] = ACTIONS(197),
    [anon_sym_that] = ACTIONS(201),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_tag] = ACTIONS(203),
    [anon_sym_Scenario_COLON] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(205),
    [sym_then] = ACTIONS(203),
  },
  [76] = {
    [sym_infer_sentence] = STATE(101),
    [sym_definition] = STATE(102),
    [sym_universal] = STATE(102),
    [sym_universal_positve] = STATE(47),
    [sym_universal_negative] = STATE(47),
    [sym_fact] = STATE(102),
    [sym_instance] = STATE(48),
    [sym_equation] = STATE(48),
    [sym_pos_class] = STATE(49),
    [sym_class_name] = STATE(103),
    [sym_indiv_name] = STATE(51),
    [anon_sym_every] = ACTIONS(60),
    [anon_sym_no] = ACTIONS(62),
    [anon_sym_a] = ACTIONS(66),
    [anon_sym_an] = ACTIONS(68),
    [sym_qname] = ACTIONS(70),
  },
  [77] = {
    [sym_test] = STATE(77),
    [aux_sym_scenario_body_repeat2] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_tag] = ACTIONS(207),
    [anon_sym_Scenario_COLON] = ACTIONS(207),
    [sym_then] = ACTIONS(209),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_Background_COLON] = ACTIONS(212),
    [sym_tag] = ACTIONS(212),
    [anon_sym_Scenario_COLON] = ACTIONS(212),
  },
  [79] = {
    [sym_language_setting] = STATE(104),
    [anon_sym_STARLanguage] = ACTIONS(31),
    [sym_given] = ACTIONS(214),
  },
  [80] = {
    [sym_class_expression] = STATE(105),
    [sym_pos_class] = STATE(86),
    [sym_class_atom] = STATE(87),
    [sym_class_name] = STATE(88),
    [anon_sym_a] = ACTIONS(179),
    [anon_sym_an] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(183),
    [sym_qname] = ACTIONS(110),
  },
  [81] = {
    [sym_class_expression] = STATE(106),
    [sym_pos_class] = STATE(86),
    [sym_class_atom] = STATE(87),
    [sym_class_name] = STATE(88),
    [anon_sym_a] = ACTIONS(179),
    [anon_sym_an] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(183),
    [sym_qname] = ACTIONS(110),
  },
  [82] = {
    [sym_class_expression] = STATE(107),
    [sym_pos_class] = STATE(86),
    [sym_class_atom] = STATE(87),
    [sym_class_name] = STATE(88),
    [anon_sym_a] = ACTIONS(179),
    [anon_sym_an] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(183),
    [sym_qname] = ACTIONS(110),
  },
  [83] = {
    [sym_class_name] = STATE(65),
    [sym_qname] = ACTIONS(110),
  },
  [84] = {
    [sym_pos_class] = STATE(108),
    [sym_class_name] = STATE(88),
    [anon_sym_a] = ACTIONS(179),
    [anon_sym_an] = ACTIONS(181),
    [sym_qname] = ACTIONS(110),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_tag] = ACTIONS(216),
    [anon_sym_Scenario_COLON] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [sym_given] = ACTIONS(216),
    [sym_then] = ACTIONS(216),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym_tag] = ACTIONS(218),
    [anon_sym_Scenario_COLON] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(218),
    [sym_given] = ACTIONS(218),
    [sym_then] = ACTIONS(218),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [sym_tag] = ACTIONS(220),
    [anon_sym_Scenario_COLON] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(220),
    [sym_given] = ACTIONS(220),
    [sym_then] = ACTIONS(220),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_tag] = ACTIONS(140),
    [anon_sym_Scenario_COLON] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(140),
    [sym_given] = ACTIONS(140),
    [sym_then] = ACTIONS(140),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_tag] = ACTIONS(222),
    [anon_sym_Scenario_COLON] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_and] = ACTIONS(222),
    [sym_given] = ACTIONS(222),
    [sym_then] = ACTIONS(222),
  },
  [90] = {
    [aux_sym_definition_repeat1] = STATE(110),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_and] = ACTIONS(224),
    [sym_given] = ACTIONS(216),
    [sym_then] = ACTIONS(216),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_tag] = ACTIONS(226),
    [anon_sym_Scenario_COLON] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
    [sym_given] = ACTIONS(226),
    [sym_then] = ACTIONS(226),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_tag] = ACTIONS(228),
    [anon_sym_Scenario_COLON] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(228),
    [sym_given] = ACTIONS(228),
    [sym_then] = ACTIONS(228),
  },
  [93] = {
    [aux_sym_universal_negative_repeat1] = STATE(93),
    [anon_sym_and] = ACTIONS(230),
    [anon_sym_aredisjoint] = ACTIONS(233),
  },
  [94] = {
    [sym_indiv_name] = STATE(112),
    [sym_qname] = ACTIONS(235),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_tag] = ACTIONS(237),
    [anon_sym_Scenario_COLON] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(237),
    [sym_given] = ACTIONS(237),
    [sym_then] = ACTIONS(237),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_tag] = ACTIONS(239),
    [anon_sym_Scenario_COLON] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [sym_then] = ACTIONS(239),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_tag] = ACTIONS(241),
    [anon_sym_Scenario_COLON] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(241),
    [sym_then] = ACTIONS(241),
  },
  [98] = {
    [anon_sym_every] = ACTIONS(243),
    [anon_sym_no] = ACTIONS(243),
    [anon_sym_a] = ACTIONS(245),
    [anon_sym_an] = ACTIONS(243),
    [sym_qname] = ACTIONS(243),
    [anon_sym_that] = ACTIONS(247),
  },
  [99] = {
    [anon_sym_every] = ACTIONS(243),
    [anon_sym_no] = ACTIONS(243),
    [anon_sym_a] = ACTIONS(245),
    [anon_sym_an] = ACTIONS(243),
    [sym_qname] = ACTIONS(243),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_tag] = ACTIONS(249),
    [anon_sym_Scenario_COLON] = ACTIONS(249),
    [sym_then] = ACTIONS(249),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_tag] = ACTIONS(251),
    [anon_sym_Scenario_COLON] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(251),
    [sym_then] = ACTIONS(251),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_tag] = ACTIONS(253),
    [anon_sym_Scenario_COLON] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(253),
    [sym_then] = ACTIONS(253),
  },
  [103] = {
    [aux_sym_universal_negative_repeat1] = STATE(70),
    [anon_sym_isenumeratedas] = ACTIONS(255),
    [anon_sym_and] = ACTIONS(136),
    [anon_sym_isasubclassof] = ACTIONS(138),
    [sym_is_defined_as] = ACTIONS(140),
  },
  [104] = {
    [sym_given] = ACTIONS(257),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_tag] = ACTIONS(259),
    [anon_sym_Scenario_COLON] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(259),
    [sym_given] = ACTIONS(259),
    [sym_then] = ACTIONS(259),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_tag] = ACTIONS(261),
    [anon_sym_Scenario_COLON] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(261),
    [sym_given] = ACTIONS(261),
    [sym_then] = ACTIONS(261),
  },
  [107] = {
    [anon_sym_DOT] = ACTIONS(263),
    [sym_given] = ACTIONS(263),
    [sym_then] = ACTIONS(263),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_tag] = ACTIONS(265),
    [anon_sym_Scenario_COLON] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(265),
    [sym_given] = ACTIONS(265),
    [sym_then] = ACTIONS(265),
  },
  [109] = {
    [sym_indiv] = STATE(115),
    [sym_qname] = ACTIONS(185),
  },
  [110] = {
    [aux_sym_definition_repeat1] = STATE(116),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(224),
    [sym_given] = ACTIONS(267),
    [sym_then] = ACTIONS(267),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_tag] = ACTIONS(118),
    [anon_sym_Scenario_COLON] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(118),
    [sym_given] = ACTIONS(118),
    [sym_then] = ACTIONS(118),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_tag] = ACTIONS(269),
    [anon_sym_Scenario_COLON] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(269),
    [sym_given] = ACTIONS(269),
    [sym_then] = ACTIONS(269),
  },
  [113] = {
    [anon_sym_every] = ACTIONS(271),
    [anon_sym_no] = ACTIONS(271),
    [anon_sym_a] = ACTIONS(273),
    [anon_sym_an] = ACTIONS(271),
    [sym_qname] = ACTIONS(271),
  },
  [114] = {
    [sym_indiv] = STATE(117),
    [sym_qname] = ACTIONS(185),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_tag] = ACTIONS(275),
    [anon_sym_Scenario_COLON] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_and] = ACTIONS(275),
    [sym_given] = ACTIONS(275),
    [sym_then] = ACTIONS(275),
  },
  [116] = {
    [aux_sym_definition_repeat1] = STATE(116),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_and] = ACTIONS(277),
    [sym_given] = ACTIONS(275),
    [sym_then] = ACTIONS(275),
  },
  [117] = {
    [aux_sym_definition_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_tag] = ACTIONS(216),
    [anon_sym_Scenario_COLON] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_and] = ACTIONS(224),
    [sym_then] = ACTIONS(216),
  },
  [118] = {
    [aux_sym_definition_repeat1] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym_tag] = ACTIONS(267),
    [anon_sym_Scenario_COLON] = ACTIONS(267),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(224),
    [sym_then] = ACTIONS(267),
  },
  [119] = {
    [aux_sym_definition_repeat1] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_tag] = ACTIONS(275),
    [anon_sym_Scenario_COLON] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_and] = ACTIONS(277),
    [sym_then] = ACTIONS(275),
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
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(13),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(14),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_title, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_background, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(23),
  [39] = {.count = 1, .reusable = true}, SHIFT(28),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(15),
  [46] = {.count = 1, .reusable = true}, SHIFT(30),
  [48] = {.count = 1, .reusable = true}, SHIFT(32),
  [50] = {.count = 1, .reusable = true}, SHIFT(34),
  [52] = {.count = 1, .reusable = true}, SHIFT(35),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_background, 2),
  [56] = {.count = 1, .reusable = true}, SHIFT(38),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [60] = {.count = 1, .reusable = true}, SHIFT(39),
  [62] = {.count = 1, .reusable = true}, SHIFT(40),
  [64] = {.count = 1, .reusable = true}, SHIFT(41),
  [66] = {.count = 1, .reusable = false}, SHIFT(42),
  [68] = {.count = 1, .reusable = true}, SHIFT(42),
  [70] = {.count = 1, .reusable = true}, SHIFT(43),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 2),
  [74] = {.count = 1, .reusable = true}, SHIFT(52),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(28),
  [87] = {.count = 1, .reusable = true}, SHIFT(56),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_narrative, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 4),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_language_ID, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_language_setting, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(57),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_background, 3),
  [103] = {.count = 1, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(18),
  [108] = {.count = 1, .reusable = true}, SHIFT(58),
  [110] = {.count = 1, .reusable = true}, SHIFT(60),
  [112] = {.count = 1, .reusable = true}, SHIFT(62),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_class_name, 1),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_indiv_name, 1),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_indiv_name, 1),
  [120] = {.count = 1, .reusable = true}, SHIFT(66),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 2),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 1),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_proposition, 1),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_universal, 1),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_fact, 1),
  [132] = {.count = 1, .reusable = true}, SHIFT(67),
  [134] = {.count = 1, .reusable = true}, SHIFT(68),
  [136] = {.count = 1, .reusable = true}, SHIFT(70),
  [138] = {.count = 1, .reusable = true}, SHIFT(69),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 1),
  [142] = {.count = 1, .reusable = false}, SHIFT(71),
  [144] = {.count = 1, .reusable = true}, SHIFT(71),
  [146] = {.count = 1, .reusable = true}, SHIFT(72),
  [148] = {.count = 1, .reusable = true}, SHIFT(73),
  [150] = {.count = 1, .reusable = true}, SHIFT(74),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2), SHIFT_REPEAT(23),
  [155] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat1, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_body, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_scenario, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_import, 3),
  [163] = {.count = 1, .reusable = true}, SHIFT(79),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_class_name, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(80),
  [169] = {.count = 1, .reusable = true}, SHIFT(81),
  [171] = {.count = 1, .reusable = false}, SHIFT(82),
  [173] = {.count = 1, .reusable = true}, SHIFT(82),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_pos_class, 2),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_assumption, 3),
  [179] = {.count = 1, .reusable = false}, SHIFT(83),
  [181] = {.count = 1, .reusable = true}, SHIFT(83),
  [183] = {.count = 1, .reusable = true}, SHIFT(84),
  [185] = {.count = 1, .reusable = true}, SHIFT(89),
  [187] = {.count = 1, .reusable = true}, SHIFT(93),
  [189] = {.count = 1, .reusable = true}, SHIFT(92),
  [191] = {.count = 1, .reusable = true}, SHIFT(94),
  [193] = {.count = 1, .reusable = true}, SHIFT(96),
  [195] = {.count = 1, .reusable = true}, SHIFT(98),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 1),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 1),
  [201] = {.count = 1, .reusable = true}, SHIFT(99),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_test, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(100),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat2, 2),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_scenario_body_repeat2, 2), SHIFT_REPEAT(52),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_feature, 5),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 5),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 3),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 1),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_class_expression, 1),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_indiv, 1),
  [224] = {.count = 1, .reusable = true}, SHIFT(109),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positve, 3),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 3),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_universal_negative_repeat1, 2), SHIFT_REPEAT(93),
  [233] = {.count = 1, .reusable = true}, REDUCE(aux_sym_universal_negative_repeat1, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(111),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_consistency, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_consistency_test, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(113),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_test, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_inference_test, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_infer_sentence, 1),
  [255] = {.count = 1, .reusable = true}, SHIFT(114),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_scenario_head, 6),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_universal_positve, 4),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_universal_negative, 4),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_particular, 4),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_class_atom, 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 4),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_equation, 4),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_infer_start, 3),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_infer_start, 3),
  [275] = {.count = 1, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(109),
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
