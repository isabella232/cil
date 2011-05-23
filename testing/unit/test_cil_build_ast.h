#ifndef TEST_CIL_BUILD_AST_H_
#define TEST_CIL_BUILD_AST_H_

#include "CuTest.h"

void test_cil_parse_to_list(CuTest *);
void test_cil_parse_to_list_currnull_neg(CuTest *);
void test_cil_parse_to_list_listnull_neg(CuTest *);

void test_cil_set_to_list(CuTest *);
void test_cil_set_to_list_tree_node_null_neg(CuTest *);
void test_cil_set_to_list_cl_head_null_neg(CuTest *);
void test_cil_set_to_list_listnull_neg(CuTest *);

void test_cil_gen_block(CuTest *);
void test_cil_gen_block_justblock_neg(CuTest *);
void test_cil_gen_block_noname_neg(CuTest *);
void test_cil_gen_block_dbnull_neg(CuTest *);
void test_cil_gen_block_treenull_neg(CuTest *);
void test_cil_gen_block_nodenull_neg(CuTest *);
void test_cil_gen_block_nodeparentnull_neg(CuTest *);
void test_cil_destroy_block(CuTest *);

void test_cil_gen_perm(CuTest *);
void test_cil_gen_perm_noname_neg(CuTest *);
void test_cil_gen_perm_dbnull_neg(CuTest *);
void test_cil_gen_perm_currnull_neg(CuTest *);
void test_cil_gen_perm_astnull_neg(CuTest *);
void test_cil_gen_perm_nodenull_neg(CuTest *);

void test_cil_gen_perm_nodes(CuTest *);
void test_cil_gen_perm_nodes_failgen_neg(CuTest *);
void test_cil_gen_perm_nodes_inval_perm_neg(CuTest *);

void test_cil_gen_class(CuTest *);
void test_cil_gen_class_noname_neg(CuTest *);
void test_cil_gen_class_nodenull_neg(CuTest *);
void test_cil_gen_class_dbnull_neg(CuTest *);
void test_cil_gen_class_currnull_neg(CuTest *);
void test_cil_gen_class_noclass_neg(CuTest *);
void test_cil_gen_class_noclassname_neg(CuTest *);
void test_cil_gen_class_namesublist_neg(CuTest *);
void test_cil_gen_class_noperms_neg(CuTest *);
void test_cil_gen_class_permsnotinlist_neg(CuTest *);
void test_cil_gen_class_extrapermlist_neg(CuTest *);
void test_cil_gen_class_listinlist_neg(CuTest *);

void test_cil_gen_common(CuTest *);
void test_cil_gen_common_dbnull_neg(CuTest *tc);
void test_cil_gen_common_currnull_neg(CuTest *tc);
void test_cil_gen_common_astnull_neg(CuTest *tc);
void test_cil_gen_common_noname_neg(CuTest *tc);
void test_cil_gen_common_twoperms_neg(CuTest *tc);
void test_cil_gen_common_permsublist_neg(CuTest *tc);
void test_cil_gen_common_noperms_neg(CuTest *tc);

void test_cil_gen_sidcontext(CuTest *);
void test_cil_gen_sidcontext_namedcontext(CuTest *);
void test_cil_gen_sidcontext_halfcontext_neg(CuTest *);
void test_cil_gen_sidcontext_noname_neg(CuTest *);
void test_cil_gen_sidcontext_empty_neg(CuTest *);
void test_cil_gen_sidcontext_nocontext_neg(CuTest *);
void test_cil_gen_sidcontext_dblname_neg(CuTest *);
void test_cil_gen_sidcontext_dbnull_neg(CuTest *);
void test_cil_gen_sidcontext_pcurrnull_neg(CuTest *);
void test_cil_gen_sidcontext_astnodenull_neg(CuTest *);
void test_cil_gen_sidcontext_insertnode_neg(CuTest *);

void test_cil_gen_type(CuTest *);
void test_cil_gen_type_dbnull_neg(CuTest *tc);
void test_cil_gen_type_currnull_neg(CuTest *tc);
void test_cil_gen_type_astnull_neg(CuTest *tc);
void test_cil_gen_type_extra_neg(CuTest *tc);
void test_cil_gen_type_invalid_node_neg(CuTest *tc);
void test_cil_gen_type_extratype_nottypeorattr_neg(CuTest *tc);

void test_cil_gen_type_attribute(CuTest *);
void test_cil_gen_type_attribute_dbnull_neg(CuTest *tc);
void test_cil_gen_type_attribute_currnull_neg(CuTest *tc);
void test_cil_gen_type_attribute_astnull_neg(CuTest *tc);
void test_cil_gen_type_attribute_extra_neg(CuTest *tc);
//TODO: cil_gen_type negative test case for when flavor isn't type or attribute

void test_cil_gen_typeattr(CuTest *);
void test_cil_gen_typeattr_dbnull_neg(CuTest *);
void test_cil_gen_typeattr_currnull_neg(CuTest *);
void test_cil_gen_typeattr_astnull_neg(CuTest *);
void test_cil_gen_typeattr_typenull_neg(CuTest *);
void test_cil_gen_typeattr_attrnull_neg(CuTest *);
void test_cil_gen_typeattr_attrlist_neg(CuTest *);
void test_cil_gen_typeattr_extra_neg(CuTest *);

void test_cil_gen_expr_stack_and(CuTest *);
void test_cil_gen_expr_stack_or(CuTest *);
void test_cil_gen_expr_stack_xor(CuTest *);
void test_cil_gen_expr_stack_not(CuTest *);
void test_cil_gen_expr_stack_not_neg(CuTest *);
void test_cil_gen_expr_stack_eq(CuTest *);
void test_cil_gen_expr_stack_neq(CuTest *);
void test_cil_gen_expr_stack_nested(CuTest *);
void test_cil_gen_expr_stack_nested_neg(CuTest *);
void test_cil_gen_expr_stack_arg1null_neg(CuTest *);
void test_cil_gen_expr_stack_arg2null_neg(CuTest *);
void test_cil_gen_expr_stack_extraarg_neg(CuTest *);
void test_cil_gen_expr_stack_currnull_neg(CuTest *);
void test_cil_gen_expr_stack_stacknull_neg(CuTest *);

void test_cil_gen_boolif(CuTest *);
void test_cil_gen_boolif_nocond(CuTest *);
void test_cil_gen_boolif_neg(CuTest *);
void test_cil_gen_boolif_dbnull_neg(CuTest *);
void test_cil_gen_boolif_currnull_neg(CuTest *);
void test_cil_gen_boolif_astnull_neg(CuTest *);
void test_cil_gen_boolif_nocond_neg(CuTest *);
void test_cil_gen_boolif_notruelist_neg(CuTest *);

void test_cil_gen_else(CuTest *);
void test_cil_gen_else_neg(CuTest *);
void test_cil_gen_else_dbnull_neg(CuTest *);
void test_cil_gen_else_currnull_neg(CuTest *);
void test_cil_gen_else_astnull_neg(CuTest *);

void test_cil_gen_tunif(CuTest *);
void test_cil_gen_tunif_nocond(CuTest *);
void test_cil_gen_tunif_neg(CuTest *);
void test_cil_gen_tunif_dbnull_neg(CuTest *);
void test_cil_gen_tunif_currnull_neg(CuTest *);
void test_cil_gen_tunif_astnull_neg(CuTest *);
void test_cil_gen_tunif_nocond_neg(CuTest *);
void test_cil_gen_tunif_notruelist_neg(CuTest *);

void test_cil_gen_typealias(CuTest *);
void test_cil_gen_typealias(CuTest *);
void test_cil_gen_typealias(CuTest *);
void test_cil_gen_typealias_incomplete_neg(CuTest *);
void test_cil_gen_typealias_incomplete_neg2(CuTest *);
void test_cil_gen_typealias_extratype_neg(CuTest *);
void test_cil_gen_typealias_dbnull_neg(CuTest *tc);
void test_cil_gen_typealias_currnull_neg(CuTest *tc);
void test_cil_gen_typealias_astnull_neg(CuTest *tc);


void test_cil_gen_role(CuTest *);
void test_cil_gen_role_dbnull_neg(CuTest *tc);
void test_cil_gen_role_currnull_neg(CuTest *tc);
void test_cil_gen_role_astnull_neg(CuTest *tc);
void test_cil_gen_role_extrarole_neg(CuTest *tc);
void test_cil_gen_role_noname_neg(CuTest *tc);

void test_cil_gen_roletrans(CuTest *);
void test_cil_gen_roletrans_currnull_neg(CuTest *);
void test_cil_gen_roletrans_astnull_neg(CuTest *);
void test_cil_gen_roletrans_srcnull_neg(CuTest *);
void test_cil_gen_roletrans_tgtnull_neg(CuTest *);
void test_cil_gen_roletrans_resultnull_neg(CuTest *);
void test_cil_gen_roletrans_extra_neg(CuTest *);

void test_cil_gen_bool_true(CuTest *);
void test_cil_gen_bool_tunable_true(CuTest *);
void test_cil_gen_bool_false(CuTest *);
void test_cil_gen_bool_tunable_false(CuTest *);
void test_cil_gen_bool_none_neg(CuTest *);
void test_cil_gen_bool_dbnull_neg(CuTest *);
void test_cil_gen_bool_currnull_neg(CuTest *);
void test_cil_gen_bool_astnull_neg(CuTest *);
void test_cil_gen_bool_notbool_neg(CuTest *);
void test_cil_gen_bool_boolname_neg(CuTest *);
void test_cil_gen_bool_extraname_false_neg(CuTest *);
void test_cil_gen_bool_extraname_true_neg(CuTest *);

void test_cil_gen_roleallow(CuTest *);
void test_cil_gen_roleallow_dbnull_neg(CuTest *);
void test_cil_gen_roleallow_currnull_neg(CuTest *);
void test_cil_gen_roleallow_astnull_neg(CuTest *);
void test_cil_gen_roleallow_srcnull_neg(CuTest *);
void test_cil_gen_roleallow_tgtnull_neg(CuTest *);
void test_cil_gen_roleallow_extra_neg(CuTest *);

void test_cil_gen_avrule(CuTest *);
void test_cil_gen_avrule_currnull_neg(CuTest *tc);
void test_cil_gen_avrule_astnull_neg(CuTest *tc);
void test_cil_gen_avrule_sourcedomainnull_neg(CuTest *tc);
void test_cil_gen_avrule_targetdomainnull_neg(CuTest *tc);
void test_cil_gen_avrule_objectclassnull_neg(CuTest *tc);
void test_cil_gen_avrule_permsnull_neg(CuTest *tc);
void test_cil_gen_avrule_notlist_neg(CuTest *);
void test_cil_gen_avrule_twolists_neg(CuTest *);
//TODO: add cases to cover  parse_current->next->cl_head != NULL || parse_current->next->next->cl_head != NULL 
// || parse_current->next->next->next->cl_head != NULL

void test_cil_gen_type_rule_transition(CuTest *);
void test_cil_gen_type_rule_transition_currnull_neg(CuTest *);
void test_cil_gen_type_rule_transition_astnull_neg(CuTest *);
void test_cil_gen_type_rule_transition_srcnull_neg(CuTest *);
void test_cil_gen_type_rule_transition_tgtnull_neg(CuTest *);
void test_cil_gen_type_rule_transition_objnull_neg(CuTest *);
void test_cil_gen_type_rule_transition_resultnull_neg(CuTest *);
void test_cil_gen_type_rule_transition_extra_neg(CuTest *);

void test_cil_gen_type_rule_change(CuTest *);
void test_cil_gen_type_rule_change_currnull_neg(CuTest *);
void test_cil_gen_type_rule_change_astnull_neg(CuTest *);
void test_cil_gen_type_rule_change_srcnull_neg(CuTest *);
void test_cil_gen_type_rule_change_tgtnull_neg(CuTest *);
void test_cil_gen_type_rule_change_objnull_neg(CuTest *);
void test_cil_gen_type_rule_change_resultnull_neg(CuTest *);
void test_cil_gen_type_rule_change_extra_neg(CuTest *);

void test_cil_gen_type_rule_member(CuTest *); 
void test_cil_gen_type_rule_member_currnull_neg(CuTest *);
void test_cil_gen_type_rule_member_astnull_neg(CuTest *);
void test_cil_gen_type_rule_member_srcnull_neg(CuTest *);
void test_cil_gen_type_rule_member_tgtnull_neg(CuTest *);
void test_cil_gen_type_rule_member_objnull_neg(CuTest *);
void test_cil_gen_type_rule_member_resultnull_neg(CuTest *);
void test_cil_gen_type_rule_member_extra_neg(CuTest *);

void test_cil_gen_user(CuTest *);
void test_cil_gen_user_dbnull_neg(CuTest *);
void test_cil_gen_user_currnull_neg(CuTest *);
void test_cil_gen_user_astnull_neg(CuTest *);
void test_cil_gen_user_nouser_neg(CuTest *);
void test_cil_gen_user_xsinfo_neg(CuTest *);

void test_cil_gen_sensitivity(CuTest *);
void test_cil_gen_sensitivity_dbnull_neg(CuTest *);
void test_cil_gen_sensitivity_currnull_neg(CuTest *);
void test_cil_gen_sensitivity_astnull_neg(CuTest *);
void test_cil_gen_sensitivity_sensnull_neg(CuTest *);
void test_cil_gen_sensitivity_senslist_neg(CuTest *);
void test_cil_gen_sensitivity_extra_neg(CuTest *);

void test_cil_gen_sensalias(CuTest *);
void test_cil_gen_sensalias_dbnull_neg(CuTest *);
void test_cil_gen_sensalias_currnull_neg(CuTest *);
void test_cil_gen_sensalias_astnull_neg(CuTest *);
void test_cil_gen_sensalias_sensnull_neg(CuTest *);
void test_cil_gen_sensalias_senslist_neg(CuTest *);
void test_cil_gen_sensalias_aliasnull_neg(CuTest *);
void test_cil_gen_sensalias_aliaslist_neg(CuTest *);
void test_cil_gen_sensalias_extra_neg(CuTest *);

void test_cil_gen_category(CuTest *);
void test_cil_gen_category_dbnull_neg(CuTest *); 
void test_cil_gen_category_astnull_neg(CuTest *);
void test_cil_gen_category_currnull_neg(CuTest *);
void test_cil_gen_category_catnull_neg(CuTest *);
void test_cil_gen_category_catlist_neg(CuTest *);
void test_cil_gen_category_extra_neg(CuTest *);

void test_cil_gen_catset(CuTest *);
void test_cil_gen_catset_dbnull_neg(CuTest *);
void test_cil_gen_catset_currnull_neg(CuTest *);
void test_cil_gen_catset_astnull_neg(CuTest *);
void test_cil_gen_catset_namenull_neg(CuTest *);
void test_cil_gen_catset_setnull_neg(CuTest *);
void test_cil_gen_catset_namelist_neg(CuTest *);
void test_cil_gen_catset_extra_neg(CuTest *);
void test_cil_gen_catset_nodefail_neg(CuTest *);
void test_cil_gen_catset_notset_neg(CuTest *);
void test_cil_gen_catset_settolistfail_neg(CuTest *);

void test_cil_gen_catalias(CuTest *);
void test_cil_gen_catalias_dbnull_neg(CuTest *);
void test_cil_gen_catalias_currnull_neg(CuTest *);
void test_cil_gen_catalias_astnull_neg(CuTest *);
void test_cil_gen_catalias_catnull_neg(CuTest *);
void test_cil_gen_catalias_aliasnull_neg(CuTest *);
void test_cil_gen_catalias_extra_neg(CuTest *);

void test_cil_gen_roletype(CuTest *tc);
void test_cil_gen_roletype_currnull_neg(CuTest *tc);
void test_cil_gen_roletype_dbnull_neg(CuTest *tc);
void test_cil_gen_roletype_astnull_neg(CuTest *tc);
void test_cil_gen_roletype_empty_neg(CuTest *tc);
void test_cil_gen_roletype_rolelist_neg(CuTest *tc);
void test_cil_gen_roletype_roletype_sublist_neg(CuTest *tc);
void test_cil_gen_roletype_typelist_neg(CuTest *tc);

void test_cil_gen_userrole(CuTest *tc);
void test_cil_gen_userrole_currnull_neg(CuTest *tc);
void test_cil_gen_userrole_dbnull_neg(CuTest *tc);
void test_cil_gen_userrole_astnull_neg(CuTest *tc);
void test_cil_gen_userrole_empty_neg(CuTest *tc);
void test_cil_gen_userrole_userlist_neg(CuTest *tc);
void test_cil_gen_userrole_userrole_sublist_neg(CuTest *tc);
void test_cil_gen_userrole_rolelist_neg(CuTest *tc);

void test_cil_gen_classcommon(CuTest *tc);
void test_cil_gen_classcommon_dbnull_neg(CuTest *tc);
void test_cil_gen_classcommon_currnull_neg(CuTest *tc);
void test_cil_gen_classcommon_astnull_neg(CuTest *tc);
void test_cil_gen_classcommon_missingclassname_neg(CuTest *tc);
void test_cil_gen_classcommon_noperms_neg(CuTest *tc);
void test_cil_gen_classcommon_extraperms_neg(CuTest *tc);

void test_cil_gen_catorder(CuTest *tc);
void test_cil_gen_catorder_dbnull_neg(CuTest *tc);
void test_cil_gen_catorder_currnull_neg(CuTest *tc);
void test_cil_gen_catorder_astnull_neg(CuTest *tc);
void test_cil_gen_catorder_missingcats_neg(CuTest *tc);
void test_cil_gen_catorder_nosublist_neg(CuTest *tc);

void test_cil_gen_dominance(CuTest *tc);
void test_cil_gen_dominance_dbnull_neg(CuTest *tc);
void test_cil_gen_dominance_currnull_neg(CuTest *tc);
void test_cil_gen_dominance_astnull_neg(CuTest *tc);
void test_cil_gen_dominance_nosensitivities_neg(CuTest *tc);
void test_cil_gen_dominance_nosublist_neg(CuTest *tc);

void test_cil_gen_senscat(CuTest *tc);
void test_cil_gen_senscat_dbnull_neg(CuTest *tc);
void test_cil_gen_senscat_currnull_neg(CuTest *tc);
void test_cil_gen_senscat_astnull_neg(CuTest *tc);
void test_cil_gen_senscat_nosensitivities_neg(CuTest *tc);
void test_cil_gen_senscat_nosublist_neg(CuTest *tc);

void test_cil_fill_level(CuTest *tc);
void test_cil_fill_level_sensnull_neg(CuTest *tc);
void test_cil_fill_level_levelnull_neg(CuTest *tc);
void test_cil_fill_level_nocat(CuTest *tc);
void test_cil_fill_level_emptycat_neg(CuTest *tc);

void test_cil_gen_level(CuTest *tc);
void test_cil_gen_level_emptycat_neg(CuTest *tc);
void test_cil_gen_level_noname_neg(CuTest *tc);
void test_cil_gen_level_nosens_neg(CuTest *tc);
void test_cil_gen_level_dbnull_neg(CuTest *tc);
void test_cil_gen_level_currnull_neg(CuTest *tc);
void test_cil_gen_level_astnull_neg(CuTest *tc);

void test__cil_build_constrain_tree(CuTest *tc);
void test__cil_build_constrain_tree_multi_constrain(CuTest *tc);
void test__cil_build_constrain_tree_currnull_neg(CuTest *tc);
void test__cil_build_constrain_tree_exprnull_neg(CuTest *tc);

void test_cil_gen_constrain(CuTest *tc);
void test_cil_gen_constrain_classset_neg(CuTest *tc);
void test_cil_gen_constrain_classset_noclass_neg(CuTest *tc);
void test_cil_gen_constrain_classset_noperm_neg(CuTest *tc);
void test_cil_gen_constrain_permset_neg(CuTest *tc);
void test_cil_gen_constrain_permset_noclass_neg(CuTest *tc);
void test_cil_gen_constrain_permset_noperm_neg(CuTest *tc);
void test_cil_gen_constrain_expression_neg(CuTest *tc);
void test_cil_gen_constrain_dbnull_neg(CuTest *tc);
void test_cil_gen_constrain_currnull_neg(CuTest *tc);
void test_cil_gen_constrain_astnull_neg(CuTest *tc);

void test_cil_fill_context(CuTest *tc);
void test_cil_fill_context_unnamedlvl(CuTest *tc);
void test_cil_fill_context_nocontext_neg(CuTest *tc);
void test_cil_fill_context_nouser_neg(CuTest *tc);
void test_cil_fill_context_norole_neg(CuTest *tc);
void test_cil_fill_context_notype_neg(CuTest *tc);
void test_cil_fill_context_nolowlvl_neg(CuTest *tc);
void test_cil_fill_context_nohighlvl_neg(CuTest *tc);
void test_cil_fill_context_unnamedlvl_nocontextlow_neg(CuTest *tc);
void test_cil_fill_context_unnamedlvl_nocontexthigh_neg(CuTest *tc);

void test_cil_gen_context(CuTest *tc);
void test_cil_gen_context_extra_neg(CuTest *tc);
void test_cil_gen_context_doubleparen_neg(CuTest *tc);
void test_cil_gen_context_norole_neg(CuTest *tc);
void test_cil_gen_context_roleinparens_neg(CuTest *tc);
void test_cil_gen_context_notype_neg(CuTest *tc);
void test_cil_gen_context_typeinparens_neg(CuTest *tc);
void test_cil_gen_context_nolevels_neg(CuTest *tc);
void test_cil_gen_context_nosecondlevel_neg(CuTest *tc);
void test_cil_gen_context_noname_neg(CuTest *tc);
void test_cil_gen_context_nouser_neg(CuTest *tc);
void test_cil_gen_context_dbnull_neg(CuTest *tc);
void test_cil_gen_context_currnull_neg(CuTest *tc);
void test_cil_gen_context_astnull_neg(CuTest *tc);

void test_cil_gen_netifcon(CuTest *tc);
void test_cil_gen_netifcon_nested(CuTest *tc);
void test_cil_gen_netifcon_nested_neg(CuTest *tc);
void test_cil_gen_netifcon_nested_emptysecondlist_neg(CuTest *tc);
void test_cil_gen_netifcon_extra_nested_secondlist_neg(CuTest *tc);
void test_cil_gen_netifcon_nested_missingobjects_neg(CuTest *tc);
void test_cil_gen_netifcon_nested_secondnested_missingobjects_neg(CuTest *tc);
void test_cil_gen_netifcon_dbnull_neg(CuTest *tc);
void test_cil_gen_netifcon_currnull_neg(CuTest *tc);
void test_cil_gen_netifcon_astnull_neg(CuTest *tc);
void test_cil_gen_netifcon_ethmissing_neg(CuTest *tc);
void test_cil_gen_netifcon_interfacemissing_neg(CuTest *tc);
void test_cil_gen_netifcon_packetmissing_neg(CuTest *tc);

void test_cil_gen_macro_type(CuTest *tc);
void test_cil_gen_macro_role(CuTest *tc);
void test_cil_gen_macro_user(CuTest *tc);
void test_cil_gen_macro_sensitivity(CuTest *tc);
void test_cil_gen_macro_category(CuTest *tc);
void test_cil_gen_macro_catset(CuTest *tc);
void test_cil_gen_macro_level(CuTest *tc);
void test_cil_gen_macro_class(CuTest *tc);
void test_cil_gen_macro_duplicate(CuTest *tc);
void test_cil_gen_macro_duplicate_neg(CuTest *tc);
void test_cil_gen_macro_unknown_neg(CuTest *tc);
void test_cil_gen_macro_dbnull_neg(CuTest *tc);
void test_cil_gen_macro_currnull_neg(CuTest *tc);
void test_cil_gen_macro_astnull_neg(CuTest *tc);
void test_cil_gen_macro_unnamed_neg(CuTest *tc);
void test_cil_gen_macro_noparam_neg(CuTest *tc);
void test_cil_gen_macro_nosecondparam_neg(CuTest *tc);
void test_cil_gen_macro_emptyparam_neg(CuTest *tc);

void test_cil_gen_call(CuTest *tc);
void test_cil_gen_call_anon(CuTest *tc);
void test_cil_gen_call_empty(CuTest *tc);
void test_cil_gen_call_dbnull_neg(CuTest *tc);
void test_cil_gen_call_currnull_neg(CuTest *tc);
void test_cil_gen_call_astnull_neg(CuTest *tc);
void test_cil_gen_call_noname_neg(CuTest *tc);
void test_cil_gen_call_noparams_neg(CuTest *tc);

/*
cil_build_ast test cases
*/
void test_cil_build_ast(CuTest *);
void test_cil_build_ast_dbnull_neg(CuTest *);
void test_cil_build_ast_astnull_neg(CuTest *);
void test_cil_build_ast_suberr_neg(CuTest *);
void test_cil_build_ast_treenull_neg(CuTest *);

void test_cil_build_ast_node_helper_block(CuTest *);
void test_cil_build_ast_node_helper_block_neg(CuTest *);

void test_cil_build_ast_node_helper_class(CuTest *);
void test_cil_build_ast_node_helper_class_neg(CuTest *);

void test_cil_build_ast_node_helper_common(CuTest *);
void test_cil_build_ast_node_helper_common_neg(CuTest *);

void test_cil_build_ast_node_helper_sidcontext(CuTest *);
void test_cil_build_ast_node_helper_sidcontext_neg(CuTest *);

void test_cil_build_ast_node_helper_user(CuTest *);
void test_cil_build_ast_node_helper_user_neg(CuTest *);

void test_cil_build_ast_node_helper_type(CuTest *);
void test_cil_build_ast_node_helper_type_neg(CuTest *);

void test_cil_build_ast_node_helper_type_attribute(CuTest *);
void test_cil_build_ast_node_helper_type_attribute_neg(CuTest *);

void test_cil_build_ast_node_helper_typeattr(CuTest *);
void test_cil_build_ast_node_helper_typeattr_neg(CuTest *);

void test_cil_build_ast_node_helper_boolif(CuTest *);
void test_cil_build_ast_node_helper_boolif_neg(CuTest *);

void test_cil_build_ast_node_helper_tunif(CuTest *);
void test_cil_build_ast_node_helper_tunif_neg(CuTest *);

void test_cil_build_ast_node_helper_typealias(CuTest *);
void test_cil_build_ast_node_helper_typealias_notype_neg(CuTest *);

void test_cil_build_ast_node_helper_role(CuTest *);
void test_cil_build_ast_node_helper_role_neg(CuTest *);

void test_cil_build_ast_node_helper_roletrans(CuTest *);
void test_cil_build_ast_node_helper_roletrans_neg(CuTest *);

void test_cil_build_ast_node_helper_roleallow(CuTest *);
void test_cil_build_ast_node_helper_roleallow_neg(CuTest *);

void test_cil_build_ast_node_helper_avrule_allow(CuTest *);
void test_cil_build_ast_node_helper_avrule_allow_neg(CuTest *);

void test_cil_build_ast_node_helper_avrule_auditallow(CuTest *);
void test_cil_build_ast_node_helper_avrule_auditallow_neg(CuTest *);

void test_cil_build_ast_node_helper_avrule_dontaudit(CuTest *);
void test_cil_build_ast_node_helper_avrule_dontaudit_neg(CuTest *);

void test_cil_build_ast_node_helper_avrule_neverallow(CuTest *);
void test_cil_build_ast_node_helper_avrule_neverallow_neg(CuTest *);

void test_cil_build_ast_node_helper_type_rule_transition(CuTest *);
void test_cil_build_ast_node_helper_type_rule_transition_neg(CuTest *);

void test_cil_build_ast_node_helper_type_rule_change(CuTest *);
void test_cil_build_ast_node_helper_type_rule_change_neg(CuTest *);

void test_cil_build_ast_node_helper_type_rule_member(CuTest *);
void test_cil_build_ast_node_helper_type_rule_member_neg(CuTest *);

void test_cil_build_ast_node_helper_bool(CuTest *);
void test_cil_build_ast_node_helper_bool_neg(CuTest *);

void test_cil_build_ast_node_helper_bool_tunable(CuTest *);
void test_cil_build_ast_node_helper_bool_tunable_neg(CuTest *);

void test_cil_build_ast_node_helper_sensitivity(CuTest *);
void test_cil_build_ast_node_helper_sensitivity_neg(CuTest *);

void test_cil_build_ast_node_helper_sensalias(CuTest *);
void test_cil_build_ast_node_helper_sensalias_neg(CuTest *);

void test_cil_build_ast_node_helper_catset(CuTest *tc);
void test_cil_build_ast_node_helper_catset_neg(CuTest *tc);

void test_cil_build_ast_node_helper_catorder(CuTest *tc);
void test_cil_build_ast_node_helper_catorder_neg(CuTest *tc);

void test_cil_build_ast_node_helper_catalias(CuTest *tc);
void test_cil_build_ast_node_helper_catalias_neg(CuTest *tc);

void test_cil_build_ast_node_helper_roletype(CuTest *tc);
void test_cil_build_ast_node_helper_roletype_neg(CuTest *tc);

void test_cil_build_ast_node_helper_userrole(CuTest *tc);
void test_cil_build_ast_node_helper_userrole_neg(CuTest *tc);

void test_cil_build_ast_node_helper_gen_classcommon(CuTest *tc); 
void test_cil_build_ast_node_helper_gen_classcommon_neg(CuTest *tc);

void test_cil_build_ast_node_helper_gen_dominance(CuTest *tc); 
void test_cil_build_ast_node_helper_gen_dominance_neg(CuTest *tc);

void test_cil_build_ast_node_helper_gen_senscat(CuTest *tc); 
void test_cil_build_ast_node_helper_gen_senscat_neg(CuTest *tc);

void test_cil_build_ast_node_helper_gen_level(CuTest *tc); 
void test_cil_build_ast_node_helper_gen_level_neg(CuTest *tc);

void test_cil_build_ast_node_helper_gen_constrain(CuTest *tc); 
void test_cil_build_ast_node_helper_gen_constrain_neg(CuTest *tc);

void test_cil_build_ast_node_helper_gen_context(CuTest *tc); 
void test_cil_build_ast_node_helper_gen_context_neg(CuTest *tc);

void test_cil_build_ast_node_helper_gen_netifcon(CuTest *tc); 
void test_cil_build_ast_node_helper_gen_netifcon_neg(CuTest *tc);

void test_cil_build_ast_node_helper_gen_macro(CuTest *tc); 
void test_cil_build_ast_node_helper_gen_macro_neg(CuTest *tc);
#endif
