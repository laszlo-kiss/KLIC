#include <klic/basic.h>
char * Const init_atomname[] = {
	(char *)"call",
	(char *)"element",
	(char *)"size",
	(char *)"set_element",
	(char *)"split",
	(char *)"join",
	(char *)"vector",
	(char *)"string",
	(char *)"element_size",
	(char *)"search_character",
	(char *)"less_than",
	(char *)"not_less_than",
	(char *)"estring",
	(char *)"print",
	(char *)"int",
	(char *)"sin",
	(char *)"cos",
	(char *)"tan",
	(char *)"asin",
	(char *)"acos",
	(char *)"atan",
	(char *)"sinh",
	(char *)"cosh",
	(char *)"tanh",
	(char *)"asinh",
	(char *)"acosh",
	(char *)"atanh",
	(char *)"exp",
	(char *)"log",
	(char *)"sqrt",
	(char *)"ceil",
	(char *)"floor",
	(char *)"round",
	(char *)"plus",
	(char *)"minus",
	(char *)"add",
	(char *)"subtract",
	(char *)"multiply",
	(char *)"divide",
	(char *)"pow",
	(char *)"not_greater_than",
	(char *)"greater_than",
	(char *)"equal",
	(char *)"not_equal",
	(char *)"float",
	(char *)"module",
	(char *)"name",
	(char *)"arity",
	(char *)"apply",
	(char *)"predicate",
	(char *)"defined",
	(char *)"reduce",
	(char *)"step",
	(char *)"arg",
	(char *)"setarg",
	(char *)"id",
	(char *)"set_predicate",
	(char *)"normal",
	(char *)"get_atom",
	(char *)"get_atom_name",
	(char *)"intern",
	(char *)"power",
	(char *)"eof",
	(char *)"end_of_file",
	(char *)"[",
	(char *)"{",
	(char *)" (",
	(char *)"(",
	(char *)"-",
	(char *)"]",
	(char *)"never",
	(char *)"}",
	(char *)")",
	(char *)"|",
	(char *)",",
	(char *)"fx",
	(char *)"fy",
	(char *)"xfx",
	(char *)"xfy",
	(char *)"yfx",
	(char *)"xf",
	(char *)"yf",
	(char *)"none",
	(char *)"yes",
	(char *)"no",
	(char *)"abnormal",
	(char *)"variable",
	(char *)"error",
	(char *)"number",
	(char *)"integer",
	(char *)"floating_point",
	(char *)"prefix",
	(char *)"infix",
	(char *)"ops",
	(char *)"postfix",
	(char *)"op",
	(char *)"atom",
	(char *)"list",
	(char *)"functor",
	(char *)"!",
	(char *)";",
	(char *)"void",
	(char *)"escaped_newline",
	(char *)"hexadecimal",
	(char *)"getc",
	(char *)"vtab",
	(char *)"=",
	(char *)"var",
	(char *)"octal",
	(char *)"ungetc",
	(char *)"stderr",
	(char *)"linecount",
	(char *)"putc",
	(char *)"fwrite",
	(char *)"fflush",
	(char *)"s",
	(char *)"open",
	(char *)"unknown",
	(char *)"nl",
	(char *)"&",
	(char *)"?-",
	(char *)"implicit",
	(char *)"local_implicit",
	(char *)"mode",
	(char *)"nospy",
	(char *)"public",
	(char *)"spy",
	(char *)"with_macro",
	(char *)"~",
	(char *)"$~",
	(char *)"\\+",
	(char *)"#",
	(char *)"$$:=",
	(char *)"$$<",
	(char *)"$$<=",
	(char *)"$$=:=",
	(char *)"$$=<",
	(char *)"$$=\\=",
	(char *)"$$>",
	(char *)"$$>=",
	(char *)"$:=",
	(char *)"$<",
	(char *)"$<=",
	(char *)"$=:=",
	(char *)"$=<",
	(char *)"$=\\=",
	(char *)"$>",
	(char *)"$>=",
	(char *)"&<",
	(char *)"&<=",
	(char *)"&=<",
	(char *)"&>",
	(char *)"&>=",
	(char *)"$+=",
	(char *)"$-=",
	(char *)"$*=",
	(char *)"$/=",
	(char *)"*",
	(char *)"**",
	(char *)"+",
	(char *)"-->",
	(char *)"->",
	(char *)"/",
	(char *)"//",
	(char *)"/\\",
	(char *)":",
	(char *)":-",
	(char *)"::",
	(char *)":=",
	(char *)"<",
	(char *)"<<",
	(char *)"<<=",
	(char *)"<=",
	(char *)"<==",
	(char *)"=..",
	(char *)"=:=",
	(char *)"=<",
	(char *)"==",
	(char *)"=>",
	(char *)"=\\=",
	(char *)">",
	(char *)">=",
	(char *)"+=",
	(char *)"-=",
	(char *)"*=",
	(char *)"/=",
	(char *)">>",
	(char *)"@",
	(char *)"@<",
	(char *)"@=<",
	(char *)"@>",
	(char *)"@>=",
	(char *)"\\/",
	(char *)"\\=",
	(char *)"\\==",
	(char *)"^",
	(char *)"is",
	(char *)"mod",
	(char *)"xor",
	(char *)"++",
	(char *)"--",
	(char *)"stdin",
	(char *)"stdout",
	(char *)"read_open",
	(char *)"write_open",
	(char *)"append_open",
	(char *)"update_open",
	(char *)"unix",
	(char *)"string_output",
	(char *)"string_input",
	(char *)"gett",
	(char *)"getwt",
	(char *)"putt",
	(char *)"puttq",
	(char *)"putwt",
	(char *)"putwtq",
	(char *)"addop",
	(char *)"rmop",
	(char *)"on_error",
	(char *)"connect",
	(char *)"bind",
	(char *)"accept",
	(char *)"connect2",
	(char *)"accept2",
	(char *)"sym",
	(char *)"unparser",
	(char *)"unparse",
	(char *)"unwparse",
	(char *)"qtd",
	(char *)"alf",
	(char *)"do",
	(char *)"empty",
	(char *)"put",
	(char *)"get",
	(char *)"get_if_any",
	(char *)"get_all",
	(char *)"carbon_copy",
	(char *)"get_max_if_any",
	(char *)"get_min_if_any",
	(char *)"get_if_any_and_put",
	(char *)"get_and_put_if_any",
	(char *)"get_and_put",
	(char *)"comparator",
	(char *)"sort",
	(char *)"pool",
	(char *)"n",
	(char *)"time",
	(char *)"signal_stream",
	(char *)"pipe",
	(char *)"system",
	(char *)"cd",
	(char *)"unlink",
	(char *)"mktemp",
	(char *)"access",
	(char *)"chmod",
	(char *)"umask",
	(char *)"getenv",
	(char *)"putenv",
	(char *)"kill",
	(char *)"fork",
	(char *)"fork_with_pipes",
	(char *)"inet",
	(char *)"fread",
	(char *)"feof",
	(char *)"sync",
	(char *)"parent",
	(char *)"child",
	(char *)"fseek",
	(char *)"ftell",
	(char *)"fclose",
	(char *)"stdio",
	(char *)"flush",
	(char *)"puts",
	(char *)"builtin",
	(char *)"integer_arithmetics",
	(char *)"floating_arithmetics",
	(char *)"bblt_add",
	(char *)"bblt_sub",
	(char *)"bblt_mult",
	(char *)"bblt_div",
	(char *)"modulo",
	(char *)"bblt_mod",
	(char *)"and",
	(char *)"bblt_and",
	(char *)"or",
	(char *)"bblt_or",
	(char *)"exclusive_or",
	(char *)"bblt_exclusive_or",
	(char *)"shift_left",
	(char *)"bblt_lshift",
	(char *)"shift_right",
	(char *)"bblt_rshift",
	(char *)"complement",
	(char *)"bblt_complement",
	(char *)"bblt_plus",
	(char *)"bblt_minus",
	(char *)"floating_point_add",
	(char *)"bblt_float_add",
	(char *)"floating_point_subtract",
	(char *)"bblt_float_sub",
	(char *)"floating_point_multiply",
	(char *)"bblt_float_mult",
	(char *)"floating_point_divide",
	(char *)"bblt_float_div",
	(char *)"floating_point_power",
	(char *)"bblt_float_pow",
	(char *)"floating_point_sin",
	(char *)"bblt_float_sin",
	(char *)"floating_point_cos",
	(char *)"bblt_float_cos",
	(char *)"floating_point_tan",
	(char *)"bblt_float_tan",
	(char *)"floating_point_asin",
	(char *)"bblt_float_asin",
	(char *)"floating_point_acos",
	(char *)"bblt_float_acos",
	(char *)"floating_point_atan",
	(char *)"bblt_float_atan",
	(char *)"floating_point_sinh",
	(char *)"bblt_float_sinh",
	(char *)"floating_point_cosh",
	(char *)"bblt_float_cosh",
	(char *)"floating_point_tanh",
	(char *)"bblt_float_tanh",
	(char *)"floating_point_exp",
	(char *)"bblt_float_exp",
	(char *)"floating_point_log",
	(char *)"bblt_float_log",
	(char *)"floating_point_sqrt",
	(char *)"bblt_float_sqrt",
	(char *)"floating_point_ceil",
	(char *)"bblt_float_ceil",
	(char *)"floating_point_floor",
	(char *)"bblt_float_floor",
	(char *)"floating_point_to_integer",
	(char *)"bblt_fix",
	(char *)"current_node",
	(char *)"bblt_current_node",
	(char *)"object",
	(char *)"gblt_hash",
	(char *)"gblt_deep_hash",
	(char *)"gblt_compare",
	(char *)"gblt_current_prio",
	(char *)"gblt_wait",
	(char *)"gblt_list",
	(char *)"gblt_atom",
	(char *)"gblt_integer",
	(char *)"atomic",
	(char *)"gblt_atomic",
	(char *)"gblt_float",
	(char *)"gblt_size_of_vector",
	(char *)"gblt_element_of_vector",
	(char *)"gblt_size_of_string",
	(char *)"gblt_element_size_of_string",
	(char *)"gblt_is_string",
	(char *)"gblt_element_of_string",
	(char *)"gblt_pfunctor",
	(char *)"gblt_arity",
	(char *)"any",
	(char *)"gblt_arg",
	(char *)"gblt_less",
	(char *)"gblt_greater_or_eq",
	(char *)"gblt_greater",
	(char *)"gblt_less_or_eq",
	(char *)"gblt_eq",
	(char *)"gblt_not_eq",
	(char *)"gblt_diff",
	(char *)"gblt_and",
	(char *)"gblt_or",
	(char *)"gblt_exclusive_or",
	(char *)"gblt_rshift",
	(char *)"gblt_lshift",
	(char *)"gblt_add",
	(char *)"gblt_subtract",
	(char *)"gblt_multiply",
	(char *)"gblt_divide",
	(char *)"gblt_modulo",
	(char *)"gblt_complement",
	(char *)"gblt_plus",
	(char *)"gblt_minus",
	(char *)"gblt_fix",
	(char *)"gblt_tag",
	(char *)"gblt_value",
	(char *)"bound",
	(char *)"gblt_display_console",
	(char *)"hash",
	(char *)"compare",
	(char *)"current_priority",
	(char *)"wait",
	(char *)"vector_element",
	(char *)"string_element",
	(char *)"diff",
	(char *)"tag_and_value",
	(char *)"display_console",
	(char *)"put_console",
	(char *)"$",
	(char *)"interrupt",
	(char *)"e",
	(char *)"otherwise",
	(char *)"alternatively",
	(char *)"head",
	(char *)"cdr",
	(char *)"car",
	(char *)"inline",
	(char *)"new",
	(char *)"generic",
	(char *)"lower_priority",
	(char *)"lab",
	(char *)"a",
	(char *)"clause",
	(char *)"il",
	(char *)"gg",
	(char *)"gp",
	(char *)"gb",
	(char *)"$macroexpanded",
	(char *)"gcall",
	(char *)"xcall",
	(char *)"priority",
	(char *)"node",
	(char *)"xpcall",
	(char *)"pcall",
	(char *)"xlcall",
	(char *)"lcall",
	(char *)"xthrow",
	(char *)"throw",
	(char *)"rename",
	(char *)"mkfunct",
	(char *)"mkvect",
	(char *)"cons",
	(char *)"version 3.01",
	(char *)"Sun, 10 Apr 2016 19:09:11 +0900",
	(char *)"end_sw",
	(char *)"funct",
	(char *)"abs",
	(char *)"rel",
	(char *)"qp",
	(char *)"known",
	(char *)"other",
	(char *)"alter",
	(char *)"l",
	(char *)"x",
	(char *)"if_ref",
	(char *)"if_not_ref",
	(char *)"v",
	(char *)"deref",
	(char *)"sw_tag",
	(char *)"case_label",
	(char *)"if_not_int",
	(char *)"if_int",
	(char *)"f",
	(char *)"o",
	(char *)"if_not_gobj",
	(char *)"if_not_class",
	(char *)"goto",
	(char *)"if_not",
	(char *)"if_funct_not",
	(char *)"sw_sym",
	(char *)"sw_int",
	(char *)"sw_funct",
	(char *)"case_sym",
	(char *)"case_int",
	(char *)"case_funct",
	(char *)"label",
	(char *)"gblt_pred",
	(char *)"guard_generic",
	(char *)"eq",
	(char *)"if_not_eq",
	(char *)"load_generic_arg",
	(char *)"make_cons",
	(char *)"make_functor",
	(char *)"alloc_functor_id",
	(char *)"make_vector",
	(char *)"const",
	(char *)"alloc_value",
	(char *)"alloc_const",
	(char *)"exec",
	(char *)"execute",
	(char *)"proceed",
	(char *)"bblt",
	(char *)"push_goal",
	(char *)"gnew",
	(char *)"new_generic",
	(char *)"call_generic",
	(char *)"throw_goal",
	(char *)"set_pred",
	(char *)"ext",
	(char *)"heappos",
	(char *)"set_ext_pred",
	(char *)"enq_at_prio_no_check",
	(char *)"enq_at_prio",
	(char *)"enq_at_lower_prio_no_check",
	(char *)"enq_at_lower_prio",
	(char *)"alloc_var",
	(char *)"make_space",
	(char *)"unify_value",
	(char *)"unify",
	(char *)"set_const",
	(char *)"set_value",
	(char *)"set_newvar",
	(char *)"store_generic_arg",
	(char *)"load_const",
	(char *)"get_elem",
	(char *)"load_newvar",
	(char *)"move",
	(char *)"r",
	(char *)"guse",
	(char *)"set_qp",
	(char *)"case_default",
	(char *)"clear_reason",
	(char *)"user_error",
	(char *)"alloc_elem",
	(char *)"if_list",
	(char *)"if_not_list",
	(char *)"if_funct",
	(char *)"if_not_funct",
	(char *)"set_elem",
	(char *)"gblt",
	(char *)"equiv",
	(char *)"info",
	(char *)"class",
	(char *)"pred",
	(char *)"true",
	(char *)"functor_table",
	(char *)"merge",
	(char *)"builtin_utility",
	(char *)"g",
	(char *)"`",
	(char *)"``",
	(char *)"c",
	(char *)"key",
	(char *)"lf",
	(char *)"cr",
	(char *)"b",
	(char *)"fix",
	(char *)"expanded",
	(char *)"unbound",
	(char *)"new_functor",
	(char *)"set_string_element",
	(char *)"set_vector_element",
	(char *)"new_string",
	(char *)"new_vector",
	(char *)"predicate_to_code",
	(char *)"string_less_than",
	(char *)"string_not_less_than",
	(char *)"code",
	(char *)"general",
	(char *)"\\",
	(char *)"byte_string",
	(char *)"inputfile",
	(char *)"fileopen",
	(char *)"fileoutput",
	(char *)"compiling_module",
	(char *)"compiling_predicate",
	(char *)"ambiguous",
	(char *)"token",
	(char *)"was",
	(char *)"found",
	(char *)"end",
	(char *)"$VAR",
	(char *)"with",
};
Const unsigned long initial_atoms_atom_c = 560;
char **atomname_atom_c = (char **)init_atomname;
