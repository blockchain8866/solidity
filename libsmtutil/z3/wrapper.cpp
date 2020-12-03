// This file is auto-generated from genwrapper.py
#include <z3.h>
#include <tuple>
#include <Z3Loader.h>

namespace {

template<typename T>
struct FunctionTrait;

template<typename R, typename... Args>
struct FunctionTrait<R(*)(Args...)> {
  using ResultType = R;
  template<unsigned N>
  using ArgType = std::tuple_element_t<N, std::tuple<Args...>>;
};

template<auto F>
using ResultType = typename FunctionTrait<decltype(F)>::ResultType;

template<auto F, unsigned N>
using ArgType = typename FunctionTrait<decltype(F)>::template ArgType<N>;

}

extern "C" {

void Z3_API Z3_set_error_handler(Z3_context c, Z3_error_handler h)
{
    static auto sym = reinterpret_cast<decltype(&Z3_set_error_handler)>(Z3Loader::get().loadSymbol("Z3_set_error_handler"));
    sym(c, h);
}

ResultType<&Z3_algebraic_is_value> Z3_API Z3_algebraic_is_value(ArgType<&Z3_algebraic_is_value, 0> _0, ArgType<&Z3_algebraic_is_value, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_is_value)>(Z3Loader::get().loadSymbol("Z3_algebraic_is_value"));
	return sym(_0, _1);
}
ResultType<&Z3_algebraic_is_pos> Z3_API Z3_algebraic_is_pos(ArgType<&Z3_algebraic_is_pos, 0> _0, ArgType<&Z3_algebraic_is_pos, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_is_pos)>(Z3Loader::get().loadSymbol("Z3_algebraic_is_pos"));
	return sym(_0, _1);
}
ResultType<&Z3_algebraic_is_neg> Z3_API Z3_algebraic_is_neg(ArgType<&Z3_algebraic_is_neg, 0> _0, ArgType<&Z3_algebraic_is_neg, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_is_neg)>(Z3Loader::get().loadSymbol("Z3_algebraic_is_neg"));
	return sym(_0, _1);
}
ResultType<&Z3_algebraic_is_zero> Z3_API Z3_algebraic_is_zero(ArgType<&Z3_algebraic_is_zero, 0> _0, ArgType<&Z3_algebraic_is_zero, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_is_zero)>(Z3Loader::get().loadSymbol("Z3_algebraic_is_zero"));
	return sym(_0, _1);
}
ResultType<&Z3_algebraic_sign> Z3_API Z3_algebraic_sign(ArgType<&Z3_algebraic_sign, 0> _0, ArgType<&Z3_algebraic_sign, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_sign)>(Z3Loader::get().loadSymbol("Z3_algebraic_sign"));
	return sym(_0, _1);
}
ResultType<&Z3_algebraic_add> Z3_API Z3_algebraic_add(ArgType<&Z3_algebraic_add, 0> _0, ArgType<&Z3_algebraic_add, 1> _1, ArgType<&Z3_algebraic_add, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_add)>(Z3Loader::get().loadSymbol("Z3_algebraic_add"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_sub> Z3_API Z3_algebraic_sub(ArgType<&Z3_algebraic_sub, 0> _0, ArgType<&Z3_algebraic_sub, 1> _1, ArgType<&Z3_algebraic_sub, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_sub)>(Z3Loader::get().loadSymbol("Z3_algebraic_sub"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_mul> Z3_API Z3_algebraic_mul(ArgType<&Z3_algebraic_mul, 0> _0, ArgType<&Z3_algebraic_mul, 1> _1, ArgType<&Z3_algebraic_mul, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_mul)>(Z3Loader::get().loadSymbol("Z3_algebraic_mul"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_div> Z3_API Z3_algebraic_div(ArgType<&Z3_algebraic_div, 0> _0, ArgType<&Z3_algebraic_div, 1> _1, ArgType<&Z3_algebraic_div, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_div)>(Z3Loader::get().loadSymbol("Z3_algebraic_div"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_root> Z3_API Z3_algebraic_root(ArgType<&Z3_algebraic_root, 0> _0, ArgType<&Z3_algebraic_root, 1> _1, ArgType<&Z3_algebraic_root, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_root)>(Z3Loader::get().loadSymbol("Z3_algebraic_root"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_power> Z3_API Z3_algebraic_power(ArgType<&Z3_algebraic_power, 0> _0, ArgType<&Z3_algebraic_power, 1> _1, ArgType<&Z3_algebraic_power, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_power)>(Z3Loader::get().loadSymbol("Z3_algebraic_power"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_lt> Z3_API Z3_algebraic_lt(ArgType<&Z3_algebraic_lt, 0> _0, ArgType<&Z3_algebraic_lt, 1> _1, ArgType<&Z3_algebraic_lt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_lt)>(Z3Loader::get().loadSymbol("Z3_algebraic_lt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_gt> Z3_API Z3_algebraic_gt(ArgType<&Z3_algebraic_gt, 0> _0, ArgType<&Z3_algebraic_gt, 1> _1, ArgType<&Z3_algebraic_gt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_gt)>(Z3Loader::get().loadSymbol("Z3_algebraic_gt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_le> Z3_API Z3_algebraic_le(ArgType<&Z3_algebraic_le, 0> _0, ArgType<&Z3_algebraic_le, 1> _1, ArgType<&Z3_algebraic_le, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_le)>(Z3Loader::get().loadSymbol("Z3_algebraic_le"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_ge> Z3_API Z3_algebraic_ge(ArgType<&Z3_algebraic_ge, 0> _0, ArgType<&Z3_algebraic_ge, 1> _1, ArgType<&Z3_algebraic_ge, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_ge)>(Z3Loader::get().loadSymbol("Z3_algebraic_ge"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_eq> Z3_API Z3_algebraic_eq(ArgType<&Z3_algebraic_eq, 0> _0, ArgType<&Z3_algebraic_eq, 1> _1, ArgType<&Z3_algebraic_eq, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_eq)>(Z3Loader::get().loadSymbol("Z3_algebraic_eq"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_neq> Z3_API Z3_algebraic_neq(ArgType<&Z3_algebraic_neq, 0> _0, ArgType<&Z3_algebraic_neq, 1> _1, ArgType<&Z3_algebraic_neq, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_neq)>(Z3Loader::get().loadSymbol("Z3_algebraic_neq"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_algebraic_roots> Z3_API Z3_algebraic_roots(ArgType<&Z3_algebraic_roots, 0> _0, ArgType<&Z3_algebraic_roots, 1> _1, ArgType<&Z3_algebraic_roots, 2> _2, ArgType<&Z3_algebraic_roots, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_roots)>(Z3Loader::get().loadSymbol("Z3_algebraic_roots"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_algebraic_eval> Z3_API Z3_algebraic_eval(ArgType<&Z3_algebraic_eval, 0> _0, ArgType<&Z3_algebraic_eval, 1> _1, ArgType<&Z3_algebraic_eval, 2> _2, ArgType<&Z3_algebraic_eval, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_eval)>(Z3Loader::get().loadSymbol("Z3_algebraic_eval"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_algebraic_get_poly> Z3_API Z3_algebraic_get_poly(ArgType<&Z3_algebraic_get_poly, 0> _0, ArgType<&Z3_algebraic_get_poly, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_get_poly)>(Z3Loader::get().loadSymbol("Z3_algebraic_get_poly"));
	return sym(_0, _1);
}
ResultType<&Z3_algebraic_get_i> Z3_API Z3_algebraic_get_i(ArgType<&Z3_algebraic_get_i, 0> _0, ArgType<&Z3_algebraic_get_i, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_algebraic_get_i)>(Z3Loader::get().loadSymbol("Z3_algebraic_get_i"));
	return sym(_0, _1);
}
ResultType<&Z3_global_param_set> Z3_API Z3_global_param_set(ArgType<&Z3_global_param_set, 0> _0, ArgType<&Z3_global_param_set, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_global_param_set)>(Z3Loader::get().loadSymbol("Z3_global_param_set"));
	return sym(_0, _1);
}
ResultType<&Z3_global_param_reset_all> Z3_API Z3_global_param_reset_all()
{
	static auto sym = reinterpret_cast<decltype(&Z3_global_param_reset_all)>(Z3Loader::get().loadSymbol("Z3_global_param_reset_all"));
	return sym();
}
ResultType<&Z3_global_param_get> Z3_API Z3_global_param_get(ArgType<&Z3_global_param_get, 0> _0, ArgType<&Z3_global_param_get, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_global_param_get)>(Z3Loader::get().loadSymbol("Z3_global_param_get"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_config> Z3_API Z3_mk_config()
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_config)>(Z3Loader::get().loadSymbol("Z3_mk_config"));
	return sym();
}
ResultType<&Z3_del_config> Z3_API Z3_del_config(ArgType<&Z3_del_config, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_del_config)>(Z3Loader::get().loadSymbol("Z3_del_config"));
	return sym(_0);
}
ResultType<&Z3_set_param_value> Z3_API Z3_set_param_value(ArgType<&Z3_set_param_value, 0> _0, ArgType<&Z3_set_param_value, 1> _1, ArgType<&Z3_set_param_value, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_set_param_value)>(Z3Loader::get().loadSymbol("Z3_set_param_value"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_context> Z3_API Z3_mk_context(ArgType<&Z3_mk_context, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_context)>(Z3Loader::get().loadSymbol("Z3_mk_context"));
	return sym(_0);
}
ResultType<&Z3_mk_context_rc> Z3_API Z3_mk_context_rc(ArgType<&Z3_mk_context_rc, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_context_rc)>(Z3Loader::get().loadSymbol("Z3_mk_context_rc"));
	return sym(_0);
}
ResultType<&Z3_del_context> Z3_API Z3_del_context(ArgType<&Z3_del_context, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_del_context)>(Z3Loader::get().loadSymbol("Z3_del_context"));
	return sym(_0);
}
ResultType<&Z3_inc_ref> Z3_API Z3_inc_ref(ArgType<&Z3_inc_ref, 0> _0, ArgType<&Z3_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_inc_ref)>(Z3Loader::get().loadSymbol("Z3_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_dec_ref> Z3_API Z3_dec_ref(ArgType<&Z3_dec_ref, 0> _0, ArgType<&Z3_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_dec_ref)>(Z3Loader::get().loadSymbol("Z3_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_update_param_value> Z3_API Z3_update_param_value(ArgType<&Z3_update_param_value, 0> _0, ArgType<&Z3_update_param_value, 1> _1, ArgType<&Z3_update_param_value, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_update_param_value)>(Z3Loader::get().loadSymbol("Z3_update_param_value"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_interrupt> Z3_API Z3_interrupt(ArgType<&Z3_interrupt, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_interrupt)>(Z3Loader::get().loadSymbol("Z3_interrupt"));
	return sym(_0);
}
ResultType<&Z3_mk_params> Z3_API Z3_mk_params(ArgType<&Z3_mk_params, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_params)>(Z3Loader::get().loadSymbol("Z3_mk_params"));
	return sym(_0);
}
ResultType<&Z3_params_inc_ref> Z3_API Z3_params_inc_ref(ArgType<&Z3_params_inc_ref, 0> _0, ArgType<&Z3_params_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_params_inc_ref)>(Z3Loader::get().loadSymbol("Z3_params_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_params_dec_ref> Z3_API Z3_params_dec_ref(ArgType<&Z3_params_dec_ref, 0> _0, ArgType<&Z3_params_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_params_dec_ref)>(Z3Loader::get().loadSymbol("Z3_params_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_params_set_bool> Z3_API Z3_params_set_bool(ArgType<&Z3_params_set_bool, 0> _0, ArgType<&Z3_params_set_bool, 1> _1, ArgType<&Z3_params_set_bool, 2> _2, ArgType<&Z3_params_set_bool, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_params_set_bool)>(Z3Loader::get().loadSymbol("Z3_params_set_bool"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_params_set_uint> Z3_API Z3_params_set_uint(ArgType<&Z3_params_set_uint, 0> _0, ArgType<&Z3_params_set_uint, 1> _1, ArgType<&Z3_params_set_uint, 2> _2, ArgType<&Z3_params_set_uint, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_params_set_uint)>(Z3Loader::get().loadSymbol("Z3_params_set_uint"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_params_set_double> Z3_API Z3_params_set_double(ArgType<&Z3_params_set_double, 0> _0, ArgType<&Z3_params_set_double, 1> _1, ArgType<&Z3_params_set_double, 2> _2, ArgType<&Z3_params_set_double, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_params_set_double)>(Z3Loader::get().loadSymbol("Z3_params_set_double"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_params_set_symbol> Z3_API Z3_params_set_symbol(ArgType<&Z3_params_set_symbol, 0> _0, ArgType<&Z3_params_set_symbol, 1> _1, ArgType<&Z3_params_set_symbol, 2> _2, ArgType<&Z3_params_set_symbol, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_params_set_symbol)>(Z3Loader::get().loadSymbol("Z3_params_set_symbol"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_params_to_string> Z3_API Z3_params_to_string(ArgType<&Z3_params_to_string, 0> _0, ArgType<&Z3_params_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_params_to_string)>(Z3Loader::get().loadSymbol("Z3_params_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_params_validate> Z3_API Z3_params_validate(ArgType<&Z3_params_validate, 0> _0, ArgType<&Z3_params_validate, 1> _1, ArgType<&Z3_params_validate, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_params_validate)>(Z3Loader::get().loadSymbol("Z3_params_validate"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_param_descrs_inc_ref> Z3_API Z3_param_descrs_inc_ref(ArgType<&Z3_param_descrs_inc_ref, 0> _0, ArgType<&Z3_param_descrs_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_param_descrs_inc_ref)>(Z3Loader::get().loadSymbol("Z3_param_descrs_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_param_descrs_dec_ref> Z3_API Z3_param_descrs_dec_ref(ArgType<&Z3_param_descrs_dec_ref, 0> _0, ArgType<&Z3_param_descrs_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_param_descrs_dec_ref)>(Z3Loader::get().loadSymbol("Z3_param_descrs_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_param_descrs_get_kind> Z3_API Z3_param_descrs_get_kind(ArgType<&Z3_param_descrs_get_kind, 0> _0, ArgType<&Z3_param_descrs_get_kind, 1> _1, ArgType<&Z3_param_descrs_get_kind, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_param_descrs_get_kind)>(Z3Loader::get().loadSymbol("Z3_param_descrs_get_kind"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_param_descrs_size> Z3_API Z3_param_descrs_size(ArgType<&Z3_param_descrs_size, 0> _0, ArgType<&Z3_param_descrs_size, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_param_descrs_size)>(Z3Loader::get().loadSymbol("Z3_param_descrs_size"));
	return sym(_0, _1);
}
ResultType<&Z3_param_descrs_get_name> Z3_API Z3_param_descrs_get_name(ArgType<&Z3_param_descrs_get_name, 0> _0, ArgType<&Z3_param_descrs_get_name, 1> _1, ArgType<&Z3_param_descrs_get_name, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_param_descrs_get_name)>(Z3Loader::get().loadSymbol("Z3_param_descrs_get_name"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_param_descrs_get_documentation> Z3_API Z3_param_descrs_get_documentation(ArgType<&Z3_param_descrs_get_documentation, 0> _0, ArgType<&Z3_param_descrs_get_documentation, 1> _1, ArgType<&Z3_param_descrs_get_documentation, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_param_descrs_get_documentation)>(Z3Loader::get().loadSymbol("Z3_param_descrs_get_documentation"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_param_descrs_to_string> Z3_API Z3_param_descrs_to_string(ArgType<&Z3_param_descrs_to_string, 0> _0, ArgType<&Z3_param_descrs_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_param_descrs_to_string)>(Z3Loader::get().loadSymbol("Z3_param_descrs_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_int_symbol> Z3_API Z3_mk_int_symbol(ArgType<&Z3_mk_int_symbol, 0> _0, ArgType<&Z3_mk_int_symbol, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_int_symbol)>(Z3Loader::get().loadSymbol("Z3_mk_int_symbol"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_string_symbol> Z3_API Z3_mk_string_symbol(ArgType<&Z3_mk_string_symbol, 0> _0, ArgType<&Z3_mk_string_symbol, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_string_symbol)>(Z3Loader::get().loadSymbol("Z3_mk_string_symbol"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_uninterpreted_sort> Z3_API Z3_mk_uninterpreted_sort(ArgType<&Z3_mk_uninterpreted_sort, 0> _0, ArgType<&Z3_mk_uninterpreted_sort, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_uninterpreted_sort)>(Z3Loader::get().loadSymbol("Z3_mk_uninterpreted_sort"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_bool_sort> Z3_API Z3_mk_bool_sort(ArgType<&Z3_mk_bool_sort, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bool_sort)>(Z3Loader::get().loadSymbol("Z3_mk_bool_sort"));
	return sym(_0);
}
ResultType<&Z3_mk_int_sort> Z3_API Z3_mk_int_sort(ArgType<&Z3_mk_int_sort, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_int_sort)>(Z3Loader::get().loadSymbol("Z3_mk_int_sort"));
	return sym(_0);
}
ResultType<&Z3_mk_real_sort> Z3_API Z3_mk_real_sort(ArgType<&Z3_mk_real_sort, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_real_sort)>(Z3Loader::get().loadSymbol("Z3_mk_real_sort"));
	return sym(_0);
}
ResultType<&Z3_mk_bv_sort> Z3_API Z3_mk_bv_sort(ArgType<&Z3_mk_bv_sort, 0> _0, ArgType<&Z3_mk_bv_sort, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bv_sort)>(Z3Loader::get().loadSymbol("Z3_mk_bv_sort"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_finite_domain_sort> Z3_API Z3_mk_finite_domain_sort(ArgType<&Z3_mk_finite_domain_sort, 0> _0, ArgType<&Z3_mk_finite_domain_sort, 1> _1, ArgType<&Z3_mk_finite_domain_sort, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_finite_domain_sort)>(Z3Loader::get().loadSymbol("Z3_mk_finite_domain_sort"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_array_sort> Z3_API Z3_mk_array_sort(ArgType<&Z3_mk_array_sort, 0> _0, ArgType<&Z3_mk_array_sort, 1> _1, ArgType<&Z3_mk_array_sort, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_array_sort)>(Z3Loader::get().loadSymbol("Z3_mk_array_sort"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_array_sort_n> Z3_API Z3_mk_array_sort_n(ArgType<&Z3_mk_array_sort_n, 0> _0, ArgType<&Z3_mk_array_sort_n, 1> _1, ArgType<&Z3_mk_array_sort_n, 2> _2, ArgType<&Z3_mk_array_sort_n, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_array_sort_n)>(Z3Loader::get().loadSymbol("Z3_mk_array_sort_n"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_tuple_sort> Z3_API Z3_mk_tuple_sort(ArgType<&Z3_mk_tuple_sort, 0> _0, ArgType<&Z3_mk_tuple_sort, 1> _1, ArgType<&Z3_mk_tuple_sort, 2> _2, ArgType<&Z3_mk_tuple_sort, 3> _3, ArgType<&Z3_mk_tuple_sort, 4> _4, ArgType<&Z3_mk_tuple_sort, 5> _5, ArgType<&Z3_mk_tuple_sort, 6> _6)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_tuple_sort)>(Z3Loader::get().loadSymbol("Z3_mk_tuple_sort"));
	return sym(_0, _1, _2, _3, _4, _5, _6);
}
ResultType<&Z3_mk_enumeration_sort> Z3_API Z3_mk_enumeration_sort(ArgType<&Z3_mk_enumeration_sort, 0> _0, ArgType<&Z3_mk_enumeration_sort, 1> _1, ArgType<&Z3_mk_enumeration_sort, 2> _2, ArgType<&Z3_mk_enumeration_sort, 3> _3, ArgType<&Z3_mk_enumeration_sort, 4> _4, ArgType<&Z3_mk_enumeration_sort, 5> _5)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_enumeration_sort)>(Z3Loader::get().loadSymbol("Z3_mk_enumeration_sort"));
	return sym(_0, _1, _2, _3, _4, _5);
}
ResultType<&Z3_mk_list_sort> Z3_API Z3_mk_list_sort(ArgType<&Z3_mk_list_sort, 0> _0, ArgType<&Z3_mk_list_sort, 1> _1, ArgType<&Z3_mk_list_sort, 2> _2, ArgType<&Z3_mk_list_sort, 3> _3, ArgType<&Z3_mk_list_sort, 4> _4, ArgType<&Z3_mk_list_sort, 5> _5, ArgType<&Z3_mk_list_sort, 6> _6, ArgType<&Z3_mk_list_sort, 7> _7, ArgType<&Z3_mk_list_sort, 8> _8)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_list_sort)>(Z3Loader::get().loadSymbol("Z3_mk_list_sort"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7, _8);
}
ResultType<&Z3_mk_constructor> Z3_API Z3_mk_constructor(ArgType<&Z3_mk_constructor, 0> _0, ArgType<&Z3_mk_constructor, 1> _1, ArgType<&Z3_mk_constructor, 2> _2, ArgType<&Z3_mk_constructor, 3> _3, ArgType<&Z3_mk_constructor, 4> _4, ArgType<&Z3_mk_constructor, 5> _5, ArgType<&Z3_mk_constructor, 6> _6)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_constructor)>(Z3Loader::get().loadSymbol("Z3_mk_constructor"));
	return sym(_0, _1, _2, _3, _4, _5, _6);
}
ResultType<&Z3_del_constructor> Z3_API Z3_del_constructor(ArgType<&Z3_del_constructor, 0> _0, ArgType<&Z3_del_constructor, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_del_constructor)>(Z3Loader::get().loadSymbol("Z3_del_constructor"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_datatype> Z3_API Z3_mk_datatype(ArgType<&Z3_mk_datatype, 0> _0, ArgType<&Z3_mk_datatype, 1> _1, ArgType<&Z3_mk_datatype, 2> _2, ArgType<&Z3_mk_datatype, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_datatype)>(Z3Loader::get().loadSymbol("Z3_mk_datatype"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_constructor_list> Z3_API Z3_mk_constructor_list(ArgType<&Z3_mk_constructor_list, 0> _0, ArgType<&Z3_mk_constructor_list, 1> _1, ArgType<&Z3_mk_constructor_list, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_constructor_list)>(Z3Loader::get().loadSymbol("Z3_mk_constructor_list"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_del_constructor_list> Z3_API Z3_del_constructor_list(ArgType<&Z3_del_constructor_list, 0> _0, ArgType<&Z3_del_constructor_list, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_del_constructor_list)>(Z3Loader::get().loadSymbol("Z3_del_constructor_list"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_datatypes> Z3_API Z3_mk_datatypes(ArgType<&Z3_mk_datatypes, 0> _0, ArgType<&Z3_mk_datatypes, 1> _1, ArgType<&Z3_mk_datatypes, 2> _2, ArgType<&Z3_mk_datatypes, 3> _3, ArgType<&Z3_mk_datatypes, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_datatypes)>(Z3Loader::get().loadSymbol("Z3_mk_datatypes"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_query_constructor> Z3_API Z3_query_constructor(ArgType<&Z3_query_constructor, 0> _0, ArgType<&Z3_query_constructor, 1> _1, ArgType<&Z3_query_constructor, 2> _2, ArgType<&Z3_query_constructor, 3> _3, ArgType<&Z3_query_constructor, 4> _4, ArgType<&Z3_query_constructor, 5> _5)
{
	static auto sym = reinterpret_cast<decltype(&Z3_query_constructor)>(Z3Loader::get().loadSymbol("Z3_query_constructor"));
	return sym(_0, _1, _2, _3, _4, _5);
}
ResultType<&Z3_mk_func_decl> Z3_API Z3_mk_func_decl(ArgType<&Z3_mk_func_decl, 0> _0, ArgType<&Z3_mk_func_decl, 1> _1, ArgType<&Z3_mk_func_decl, 2> _2, ArgType<&Z3_mk_func_decl, 3> _3, ArgType<&Z3_mk_func_decl, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_func_decl)>(Z3Loader::get().loadSymbol("Z3_mk_func_decl"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_app> Z3_API Z3_mk_app(ArgType<&Z3_mk_app, 0> _0, ArgType<&Z3_mk_app, 1> _1, ArgType<&Z3_mk_app, 2> _2, ArgType<&Z3_mk_app, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_app)>(Z3Loader::get().loadSymbol("Z3_mk_app"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_const> Z3_API Z3_mk_const(ArgType<&Z3_mk_const, 0> _0, ArgType<&Z3_mk_const, 1> _1, ArgType<&Z3_mk_const, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_const)>(Z3Loader::get().loadSymbol("Z3_mk_const"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fresh_func_decl> Z3_API Z3_mk_fresh_func_decl(ArgType<&Z3_mk_fresh_func_decl, 0> _0, ArgType<&Z3_mk_fresh_func_decl, 1> _1, ArgType<&Z3_mk_fresh_func_decl, 2> _2, ArgType<&Z3_mk_fresh_func_decl, 3> _3, ArgType<&Z3_mk_fresh_func_decl, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fresh_func_decl)>(Z3Loader::get().loadSymbol("Z3_mk_fresh_func_decl"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_fresh_const> Z3_API Z3_mk_fresh_const(ArgType<&Z3_mk_fresh_const, 0> _0, ArgType<&Z3_mk_fresh_const, 1> _1, ArgType<&Z3_mk_fresh_const, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fresh_const)>(Z3Loader::get().loadSymbol("Z3_mk_fresh_const"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_rec_func_decl> Z3_API Z3_mk_rec_func_decl(ArgType<&Z3_mk_rec_func_decl, 0> _0, ArgType<&Z3_mk_rec_func_decl, 1> _1, ArgType<&Z3_mk_rec_func_decl, 2> _2, ArgType<&Z3_mk_rec_func_decl, 3> _3, ArgType<&Z3_mk_rec_func_decl, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_rec_func_decl)>(Z3Loader::get().loadSymbol("Z3_mk_rec_func_decl"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_add_rec_def> Z3_API Z3_add_rec_def(ArgType<&Z3_add_rec_def, 0> _0, ArgType<&Z3_add_rec_def, 1> _1, ArgType<&Z3_add_rec_def, 2> _2, ArgType<&Z3_add_rec_def, 3> _3, ArgType<&Z3_add_rec_def, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_add_rec_def)>(Z3Loader::get().loadSymbol("Z3_add_rec_def"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_true> Z3_API Z3_mk_true(ArgType<&Z3_mk_true, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_true)>(Z3Loader::get().loadSymbol("Z3_mk_true"));
	return sym(_0);
}
ResultType<&Z3_mk_false> Z3_API Z3_mk_false(ArgType<&Z3_mk_false, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_false)>(Z3Loader::get().loadSymbol("Z3_mk_false"));
	return sym(_0);
}
ResultType<&Z3_mk_eq> Z3_API Z3_mk_eq(ArgType<&Z3_mk_eq, 0> _0, ArgType<&Z3_mk_eq, 1> _1, ArgType<&Z3_mk_eq, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_eq)>(Z3Loader::get().loadSymbol("Z3_mk_eq"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_distinct> Z3_API Z3_mk_distinct(ArgType<&Z3_mk_distinct, 0> _0, ArgType<&Z3_mk_distinct, 1> _1, ArgType<&Z3_mk_distinct, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_distinct)>(Z3Loader::get().loadSymbol("Z3_mk_distinct"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_not> Z3_API Z3_mk_not(ArgType<&Z3_mk_not, 0> _0, ArgType<&Z3_mk_not, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_not)>(Z3Loader::get().loadSymbol("Z3_mk_not"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_ite> Z3_API Z3_mk_ite(ArgType<&Z3_mk_ite, 0> _0, ArgType<&Z3_mk_ite, 1> _1, ArgType<&Z3_mk_ite, 2> _2, ArgType<&Z3_mk_ite, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_ite)>(Z3Loader::get().loadSymbol("Z3_mk_ite"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_iff> Z3_API Z3_mk_iff(ArgType<&Z3_mk_iff, 0> _0, ArgType<&Z3_mk_iff, 1> _1, ArgType<&Z3_mk_iff, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_iff)>(Z3Loader::get().loadSymbol("Z3_mk_iff"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_implies> Z3_API Z3_mk_implies(ArgType<&Z3_mk_implies, 0> _0, ArgType<&Z3_mk_implies, 1> _1, ArgType<&Z3_mk_implies, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_implies)>(Z3Loader::get().loadSymbol("Z3_mk_implies"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_xor> Z3_API Z3_mk_xor(ArgType<&Z3_mk_xor, 0> _0, ArgType<&Z3_mk_xor, 1> _1, ArgType<&Z3_mk_xor, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_xor)>(Z3Loader::get().loadSymbol("Z3_mk_xor"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_and> Z3_API Z3_mk_and(ArgType<&Z3_mk_and, 0> _0, ArgType<&Z3_mk_and, 1> _1, ArgType<&Z3_mk_and, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_and)>(Z3Loader::get().loadSymbol("Z3_mk_and"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_or> Z3_API Z3_mk_or(ArgType<&Z3_mk_or, 0> _0, ArgType<&Z3_mk_or, 1> _1, ArgType<&Z3_mk_or, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_or)>(Z3Loader::get().loadSymbol("Z3_mk_or"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_add> Z3_API Z3_mk_add(ArgType<&Z3_mk_add, 0> _0, ArgType<&Z3_mk_add, 1> _1, ArgType<&Z3_mk_add, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_add)>(Z3Loader::get().loadSymbol("Z3_mk_add"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_mul> Z3_API Z3_mk_mul(ArgType<&Z3_mk_mul, 0> _0, ArgType<&Z3_mk_mul, 1> _1, ArgType<&Z3_mk_mul, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_mul)>(Z3Loader::get().loadSymbol("Z3_mk_mul"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_sub> Z3_API Z3_mk_sub(ArgType<&Z3_mk_sub, 0> _0, ArgType<&Z3_mk_sub, 1> _1, ArgType<&Z3_mk_sub, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_sub)>(Z3Loader::get().loadSymbol("Z3_mk_sub"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_unary_minus> Z3_API Z3_mk_unary_minus(ArgType<&Z3_mk_unary_minus, 0> _0, ArgType<&Z3_mk_unary_minus, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_unary_minus)>(Z3Loader::get().loadSymbol("Z3_mk_unary_minus"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_div> Z3_API Z3_mk_div(ArgType<&Z3_mk_div, 0> _0, ArgType<&Z3_mk_div, 1> _1, ArgType<&Z3_mk_div, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_div)>(Z3Loader::get().loadSymbol("Z3_mk_div"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_mod> Z3_API Z3_mk_mod(ArgType<&Z3_mk_mod, 0> _0, ArgType<&Z3_mk_mod, 1> _1, ArgType<&Z3_mk_mod, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_mod)>(Z3Loader::get().loadSymbol("Z3_mk_mod"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_rem> Z3_API Z3_mk_rem(ArgType<&Z3_mk_rem, 0> _0, ArgType<&Z3_mk_rem, 1> _1, ArgType<&Z3_mk_rem, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_rem)>(Z3Loader::get().loadSymbol("Z3_mk_rem"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_power> Z3_API Z3_mk_power(ArgType<&Z3_mk_power, 0> _0, ArgType<&Z3_mk_power, 1> _1, ArgType<&Z3_mk_power, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_power)>(Z3Loader::get().loadSymbol("Z3_mk_power"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_lt> Z3_API Z3_mk_lt(ArgType<&Z3_mk_lt, 0> _0, ArgType<&Z3_mk_lt, 1> _1, ArgType<&Z3_mk_lt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_lt)>(Z3Loader::get().loadSymbol("Z3_mk_lt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_le> Z3_API Z3_mk_le(ArgType<&Z3_mk_le, 0> _0, ArgType<&Z3_mk_le, 1> _1, ArgType<&Z3_mk_le, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_le)>(Z3Loader::get().loadSymbol("Z3_mk_le"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_gt> Z3_API Z3_mk_gt(ArgType<&Z3_mk_gt, 0> _0, ArgType<&Z3_mk_gt, 1> _1, ArgType<&Z3_mk_gt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_gt)>(Z3Loader::get().loadSymbol("Z3_mk_gt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_ge> Z3_API Z3_mk_ge(ArgType<&Z3_mk_ge, 0> _0, ArgType<&Z3_mk_ge, 1> _1, ArgType<&Z3_mk_ge, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_ge)>(Z3Loader::get().loadSymbol("Z3_mk_ge"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_divides> Z3_API Z3_mk_divides(ArgType<&Z3_mk_divides, 0> _0, ArgType<&Z3_mk_divides, 1> _1, ArgType<&Z3_mk_divides, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_divides)>(Z3Loader::get().loadSymbol("Z3_mk_divides"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_int2real> Z3_API Z3_mk_int2real(ArgType<&Z3_mk_int2real, 0> _0, ArgType<&Z3_mk_int2real, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_int2real)>(Z3Loader::get().loadSymbol("Z3_mk_int2real"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_real2int> Z3_API Z3_mk_real2int(ArgType<&Z3_mk_real2int, 0> _0, ArgType<&Z3_mk_real2int, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_real2int)>(Z3Loader::get().loadSymbol("Z3_mk_real2int"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_is_int> Z3_API Z3_mk_is_int(ArgType<&Z3_mk_is_int, 0> _0, ArgType<&Z3_mk_is_int, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_is_int)>(Z3Loader::get().loadSymbol("Z3_mk_is_int"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_bvnot> Z3_API Z3_mk_bvnot(ArgType<&Z3_mk_bvnot, 0> _0, ArgType<&Z3_mk_bvnot, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvnot)>(Z3Loader::get().loadSymbol("Z3_mk_bvnot"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_bvredand> Z3_API Z3_mk_bvredand(ArgType<&Z3_mk_bvredand, 0> _0, ArgType<&Z3_mk_bvredand, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvredand)>(Z3Loader::get().loadSymbol("Z3_mk_bvredand"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_bvredor> Z3_API Z3_mk_bvredor(ArgType<&Z3_mk_bvredor, 0> _0, ArgType<&Z3_mk_bvredor, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvredor)>(Z3Loader::get().loadSymbol("Z3_mk_bvredor"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_bvand> Z3_API Z3_mk_bvand(ArgType<&Z3_mk_bvand, 0> _0, ArgType<&Z3_mk_bvand, 1> _1, ArgType<&Z3_mk_bvand, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvand)>(Z3Loader::get().loadSymbol("Z3_mk_bvand"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvor> Z3_API Z3_mk_bvor(ArgType<&Z3_mk_bvor, 0> _0, ArgType<&Z3_mk_bvor, 1> _1, ArgType<&Z3_mk_bvor, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvor)>(Z3Loader::get().loadSymbol("Z3_mk_bvor"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvxor> Z3_API Z3_mk_bvxor(ArgType<&Z3_mk_bvxor, 0> _0, ArgType<&Z3_mk_bvxor, 1> _1, ArgType<&Z3_mk_bvxor, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvxor)>(Z3Loader::get().loadSymbol("Z3_mk_bvxor"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvnand> Z3_API Z3_mk_bvnand(ArgType<&Z3_mk_bvnand, 0> _0, ArgType<&Z3_mk_bvnand, 1> _1, ArgType<&Z3_mk_bvnand, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvnand)>(Z3Loader::get().loadSymbol("Z3_mk_bvnand"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvnor> Z3_API Z3_mk_bvnor(ArgType<&Z3_mk_bvnor, 0> _0, ArgType<&Z3_mk_bvnor, 1> _1, ArgType<&Z3_mk_bvnor, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvnor)>(Z3Loader::get().loadSymbol("Z3_mk_bvnor"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvxnor> Z3_API Z3_mk_bvxnor(ArgType<&Z3_mk_bvxnor, 0> _0, ArgType<&Z3_mk_bvxnor, 1> _1, ArgType<&Z3_mk_bvxnor, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvxnor)>(Z3Loader::get().loadSymbol("Z3_mk_bvxnor"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvneg> Z3_API Z3_mk_bvneg(ArgType<&Z3_mk_bvneg, 0> _0, ArgType<&Z3_mk_bvneg, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvneg)>(Z3Loader::get().loadSymbol("Z3_mk_bvneg"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_bvadd> Z3_API Z3_mk_bvadd(ArgType<&Z3_mk_bvadd, 0> _0, ArgType<&Z3_mk_bvadd, 1> _1, ArgType<&Z3_mk_bvadd, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvadd)>(Z3Loader::get().loadSymbol("Z3_mk_bvadd"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvsub> Z3_API Z3_mk_bvsub(ArgType<&Z3_mk_bvsub, 0> _0, ArgType<&Z3_mk_bvsub, 1> _1, ArgType<&Z3_mk_bvsub, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsub)>(Z3Loader::get().loadSymbol("Z3_mk_bvsub"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvmul> Z3_API Z3_mk_bvmul(ArgType<&Z3_mk_bvmul, 0> _0, ArgType<&Z3_mk_bvmul, 1> _1, ArgType<&Z3_mk_bvmul, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvmul)>(Z3Loader::get().loadSymbol("Z3_mk_bvmul"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvudiv> Z3_API Z3_mk_bvudiv(ArgType<&Z3_mk_bvudiv, 0> _0, ArgType<&Z3_mk_bvudiv, 1> _1, ArgType<&Z3_mk_bvudiv, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvudiv)>(Z3Loader::get().loadSymbol("Z3_mk_bvudiv"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvsdiv> Z3_API Z3_mk_bvsdiv(ArgType<&Z3_mk_bvsdiv, 0> _0, ArgType<&Z3_mk_bvsdiv, 1> _1, ArgType<&Z3_mk_bvsdiv, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsdiv)>(Z3Loader::get().loadSymbol("Z3_mk_bvsdiv"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvurem> Z3_API Z3_mk_bvurem(ArgType<&Z3_mk_bvurem, 0> _0, ArgType<&Z3_mk_bvurem, 1> _1, ArgType<&Z3_mk_bvurem, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvurem)>(Z3Loader::get().loadSymbol("Z3_mk_bvurem"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvsrem> Z3_API Z3_mk_bvsrem(ArgType<&Z3_mk_bvsrem, 0> _0, ArgType<&Z3_mk_bvsrem, 1> _1, ArgType<&Z3_mk_bvsrem, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsrem)>(Z3Loader::get().loadSymbol("Z3_mk_bvsrem"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvsmod> Z3_API Z3_mk_bvsmod(ArgType<&Z3_mk_bvsmod, 0> _0, ArgType<&Z3_mk_bvsmod, 1> _1, ArgType<&Z3_mk_bvsmod, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsmod)>(Z3Loader::get().loadSymbol("Z3_mk_bvsmod"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvult> Z3_API Z3_mk_bvult(ArgType<&Z3_mk_bvult, 0> _0, ArgType<&Z3_mk_bvult, 1> _1, ArgType<&Z3_mk_bvult, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvult)>(Z3Loader::get().loadSymbol("Z3_mk_bvult"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvslt> Z3_API Z3_mk_bvslt(ArgType<&Z3_mk_bvslt, 0> _0, ArgType<&Z3_mk_bvslt, 1> _1, ArgType<&Z3_mk_bvslt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvslt)>(Z3Loader::get().loadSymbol("Z3_mk_bvslt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvule> Z3_API Z3_mk_bvule(ArgType<&Z3_mk_bvule, 0> _0, ArgType<&Z3_mk_bvule, 1> _1, ArgType<&Z3_mk_bvule, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvule)>(Z3Loader::get().loadSymbol("Z3_mk_bvule"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvsle> Z3_API Z3_mk_bvsle(ArgType<&Z3_mk_bvsle, 0> _0, ArgType<&Z3_mk_bvsle, 1> _1, ArgType<&Z3_mk_bvsle, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsle)>(Z3Loader::get().loadSymbol("Z3_mk_bvsle"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvuge> Z3_API Z3_mk_bvuge(ArgType<&Z3_mk_bvuge, 0> _0, ArgType<&Z3_mk_bvuge, 1> _1, ArgType<&Z3_mk_bvuge, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvuge)>(Z3Loader::get().loadSymbol("Z3_mk_bvuge"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvsge> Z3_API Z3_mk_bvsge(ArgType<&Z3_mk_bvsge, 0> _0, ArgType<&Z3_mk_bvsge, 1> _1, ArgType<&Z3_mk_bvsge, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsge)>(Z3Loader::get().loadSymbol("Z3_mk_bvsge"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvugt> Z3_API Z3_mk_bvugt(ArgType<&Z3_mk_bvugt, 0> _0, ArgType<&Z3_mk_bvugt, 1> _1, ArgType<&Z3_mk_bvugt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvugt)>(Z3Loader::get().loadSymbol("Z3_mk_bvugt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvsgt> Z3_API Z3_mk_bvsgt(ArgType<&Z3_mk_bvsgt, 0> _0, ArgType<&Z3_mk_bvsgt, 1> _1, ArgType<&Z3_mk_bvsgt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsgt)>(Z3Loader::get().loadSymbol("Z3_mk_bvsgt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_concat> Z3_API Z3_mk_concat(ArgType<&Z3_mk_concat, 0> _0, ArgType<&Z3_mk_concat, 1> _1, ArgType<&Z3_mk_concat, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_concat)>(Z3Loader::get().loadSymbol("Z3_mk_concat"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_extract> Z3_API Z3_mk_extract(ArgType<&Z3_mk_extract, 0> _0, ArgType<&Z3_mk_extract, 1> _1, ArgType<&Z3_mk_extract, 2> _2, ArgType<&Z3_mk_extract, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_extract)>(Z3Loader::get().loadSymbol("Z3_mk_extract"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_sign_ext> Z3_API Z3_mk_sign_ext(ArgType<&Z3_mk_sign_ext, 0> _0, ArgType<&Z3_mk_sign_ext, 1> _1, ArgType<&Z3_mk_sign_ext, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_sign_ext)>(Z3Loader::get().loadSymbol("Z3_mk_sign_ext"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_zero_ext> Z3_API Z3_mk_zero_ext(ArgType<&Z3_mk_zero_ext, 0> _0, ArgType<&Z3_mk_zero_ext, 1> _1, ArgType<&Z3_mk_zero_ext, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_zero_ext)>(Z3Loader::get().loadSymbol("Z3_mk_zero_ext"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_repeat> Z3_API Z3_mk_repeat(ArgType<&Z3_mk_repeat, 0> _0, ArgType<&Z3_mk_repeat, 1> _1, ArgType<&Z3_mk_repeat, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_repeat)>(Z3Loader::get().loadSymbol("Z3_mk_repeat"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvshl> Z3_API Z3_mk_bvshl(ArgType<&Z3_mk_bvshl, 0> _0, ArgType<&Z3_mk_bvshl, 1> _1, ArgType<&Z3_mk_bvshl, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvshl)>(Z3Loader::get().loadSymbol("Z3_mk_bvshl"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvlshr> Z3_API Z3_mk_bvlshr(ArgType<&Z3_mk_bvlshr, 0> _0, ArgType<&Z3_mk_bvlshr, 1> _1, ArgType<&Z3_mk_bvlshr, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvlshr)>(Z3Loader::get().loadSymbol("Z3_mk_bvlshr"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvashr> Z3_API Z3_mk_bvashr(ArgType<&Z3_mk_bvashr, 0> _0, ArgType<&Z3_mk_bvashr, 1> _1, ArgType<&Z3_mk_bvashr, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvashr)>(Z3Loader::get().loadSymbol("Z3_mk_bvashr"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_rotate_left> Z3_API Z3_mk_rotate_left(ArgType<&Z3_mk_rotate_left, 0> _0, ArgType<&Z3_mk_rotate_left, 1> _1, ArgType<&Z3_mk_rotate_left, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_rotate_left)>(Z3Loader::get().loadSymbol("Z3_mk_rotate_left"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_rotate_right> Z3_API Z3_mk_rotate_right(ArgType<&Z3_mk_rotate_right, 0> _0, ArgType<&Z3_mk_rotate_right, 1> _1, ArgType<&Z3_mk_rotate_right, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_rotate_right)>(Z3Loader::get().loadSymbol("Z3_mk_rotate_right"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_ext_rotate_left> Z3_API Z3_mk_ext_rotate_left(ArgType<&Z3_mk_ext_rotate_left, 0> _0, ArgType<&Z3_mk_ext_rotate_left, 1> _1, ArgType<&Z3_mk_ext_rotate_left, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_ext_rotate_left)>(Z3Loader::get().loadSymbol("Z3_mk_ext_rotate_left"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_ext_rotate_right> Z3_API Z3_mk_ext_rotate_right(ArgType<&Z3_mk_ext_rotate_right, 0> _0, ArgType<&Z3_mk_ext_rotate_right, 1> _1, ArgType<&Z3_mk_ext_rotate_right, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_ext_rotate_right)>(Z3Loader::get().loadSymbol("Z3_mk_ext_rotate_right"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_int2bv> Z3_API Z3_mk_int2bv(ArgType<&Z3_mk_int2bv, 0> _0, ArgType<&Z3_mk_int2bv, 1> _1, ArgType<&Z3_mk_int2bv, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_int2bv)>(Z3Loader::get().loadSymbol("Z3_mk_int2bv"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bv2int> Z3_API Z3_mk_bv2int(ArgType<&Z3_mk_bv2int, 0> _0, ArgType<&Z3_mk_bv2int, 1> _1, ArgType<&Z3_mk_bv2int, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bv2int)>(Z3Loader::get().loadSymbol("Z3_mk_bv2int"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvadd_no_overflow> Z3_API Z3_mk_bvadd_no_overflow(ArgType<&Z3_mk_bvadd_no_overflow, 0> _0, ArgType<&Z3_mk_bvadd_no_overflow, 1> _1, ArgType<&Z3_mk_bvadd_no_overflow, 2> _2, ArgType<&Z3_mk_bvadd_no_overflow, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvadd_no_overflow)>(Z3Loader::get().loadSymbol("Z3_mk_bvadd_no_overflow"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_bvadd_no_underflow> Z3_API Z3_mk_bvadd_no_underflow(ArgType<&Z3_mk_bvadd_no_underflow, 0> _0, ArgType<&Z3_mk_bvadd_no_underflow, 1> _1, ArgType<&Z3_mk_bvadd_no_underflow, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvadd_no_underflow)>(Z3Loader::get().loadSymbol("Z3_mk_bvadd_no_underflow"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvsub_no_overflow> Z3_API Z3_mk_bvsub_no_overflow(ArgType<&Z3_mk_bvsub_no_overflow, 0> _0, ArgType<&Z3_mk_bvsub_no_overflow, 1> _1, ArgType<&Z3_mk_bvsub_no_overflow, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsub_no_overflow)>(Z3Loader::get().loadSymbol("Z3_mk_bvsub_no_overflow"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvsub_no_underflow> Z3_API Z3_mk_bvsub_no_underflow(ArgType<&Z3_mk_bvsub_no_underflow, 0> _0, ArgType<&Z3_mk_bvsub_no_underflow, 1> _1, ArgType<&Z3_mk_bvsub_no_underflow, 2> _2, ArgType<&Z3_mk_bvsub_no_underflow, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsub_no_underflow)>(Z3Loader::get().loadSymbol("Z3_mk_bvsub_no_underflow"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_bvsdiv_no_overflow> Z3_API Z3_mk_bvsdiv_no_overflow(ArgType<&Z3_mk_bvsdiv_no_overflow, 0> _0, ArgType<&Z3_mk_bvsdiv_no_overflow, 1> _1, ArgType<&Z3_mk_bvsdiv_no_overflow, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvsdiv_no_overflow)>(Z3Loader::get().loadSymbol("Z3_mk_bvsdiv_no_overflow"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bvneg_no_overflow> Z3_API Z3_mk_bvneg_no_overflow(ArgType<&Z3_mk_bvneg_no_overflow, 0> _0, ArgType<&Z3_mk_bvneg_no_overflow, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvneg_no_overflow)>(Z3Loader::get().loadSymbol("Z3_mk_bvneg_no_overflow"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_bvmul_no_overflow> Z3_API Z3_mk_bvmul_no_overflow(ArgType<&Z3_mk_bvmul_no_overflow, 0> _0, ArgType<&Z3_mk_bvmul_no_overflow, 1> _1, ArgType<&Z3_mk_bvmul_no_overflow, 2> _2, ArgType<&Z3_mk_bvmul_no_overflow, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvmul_no_overflow)>(Z3Loader::get().loadSymbol("Z3_mk_bvmul_no_overflow"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_bvmul_no_underflow> Z3_API Z3_mk_bvmul_no_underflow(ArgType<&Z3_mk_bvmul_no_underflow, 0> _0, ArgType<&Z3_mk_bvmul_no_underflow, 1> _1, ArgType<&Z3_mk_bvmul_no_underflow, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bvmul_no_underflow)>(Z3Loader::get().loadSymbol("Z3_mk_bvmul_no_underflow"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_select> Z3_API Z3_mk_select(ArgType<&Z3_mk_select, 0> _0, ArgType<&Z3_mk_select, 1> _1, ArgType<&Z3_mk_select, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_select)>(Z3Loader::get().loadSymbol("Z3_mk_select"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_select_n> Z3_API Z3_mk_select_n(ArgType<&Z3_mk_select_n, 0> _0, ArgType<&Z3_mk_select_n, 1> _1, ArgType<&Z3_mk_select_n, 2> _2, ArgType<&Z3_mk_select_n, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_select_n)>(Z3Loader::get().loadSymbol("Z3_mk_select_n"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_store> Z3_API Z3_mk_store(ArgType<&Z3_mk_store, 0> _0, ArgType<&Z3_mk_store, 1> _1, ArgType<&Z3_mk_store, 2> _2, ArgType<&Z3_mk_store, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_store)>(Z3Loader::get().loadSymbol("Z3_mk_store"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_store_n> Z3_API Z3_mk_store_n(ArgType<&Z3_mk_store_n, 0> _0, ArgType<&Z3_mk_store_n, 1> _1, ArgType<&Z3_mk_store_n, 2> _2, ArgType<&Z3_mk_store_n, 3> _3, ArgType<&Z3_mk_store_n, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_store_n)>(Z3Loader::get().loadSymbol("Z3_mk_store_n"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_const_array> Z3_API Z3_mk_const_array(ArgType<&Z3_mk_const_array, 0> _0, ArgType<&Z3_mk_const_array, 1> _1, ArgType<&Z3_mk_const_array, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_const_array)>(Z3Loader::get().loadSymbol("Z3_mk_const_array"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_map> Z3_API Z3_mk_map(ArgType<&Z3_mk_map, 0> _0, ArgType<&Z3_mk_map, 1> _1, ArgType<&Z3_mk_map, 2> _2, ArgType<&Z3_mk_map, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_map)>(Z3Loader::get().loadSymbol("Z3_mk_map"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_array_default> Z3_API Z3_mk_array_default(ArgType<&Z3_mk_array_default, 0> _0, ArgType<&Z3_mk_array_default, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_array_default)>(Z3Loader::get().loadSymbol("Z3_mk_array_default"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_as_array> Z3_API Z3_mk_as_array(ArgType<&Z3_mk_as_array, 0> _0, ArgType<&Z3_mk_as_array, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_as_array)>(Z3Loader::get().loadSymbol("Z3_mk_as_array"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_set_has_size> Z3_API Z3_mk_set_has_size(ArgType<&Z3_mk_set_has_size, 0> _0, ArgType<&Z3_mk_set_has_size, 1> _1, ArgType<&Z3_mk_set_has_size, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_has_size)>(Z3Loader::get().loadSymbol("Z3_mk_set_has_size"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_set_sort> Z3_API Z3_mk_set_sort(ArgType<&Z3_mk_set_sort, 0> _0, ArgType<&Z3_mk_set_sort, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_sort)>(Z3Loader::get().loadSymbol("Z3_mk_set_sort"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_empty_set> Z3_API Z3_mk_empty_set(ArgType<&Z3_mk_empty_set, 0> _0, ArgType<&Z3_mk_empty_set, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_empty_set)>(Z3Loader::get().loadSymbol("Z3_mk_empty_set"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_full_set> Z3_API Z3_mk_full_set(ArgType<&Z3_mk_full_set, 0> _0, ArgType<&Z3_mk_full_set, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_full_set)>(Z3Loader::get().loadSymbol("Z3_mk_full_set"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_set_add> Z3_API Z3_mk_set_add(ArgType<&Z3_mk_set_add, 0> _0, ArgType<&Z3_mk_set_add, 1> _1, ArgType<&Z3_mk_set_add, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_add)>(Z3Loader::get().loadSymbol("Z3_mk_set_add"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_set_del> Z3_API Z3_mk_set_del(ArgType<&Z3_mk_set_del, 0> _0, ArgType<&Z3_mk_set_del, 1> _1, ArgType<&Z3_mk_set_del, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_del)>(Z3Loader::get().loadSymbol("Z3_mk_set_del"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_set_union> Z3_API Z3_mk_set_union(ArgType<&Z3_mk_set_union, 0> _0, ArgType<&Z3_mk_set_union, 1> _1, ArgType<&Z3_mk_set_union, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_union)>(Z3Loader::get().loadSymbol("Z3_mk_set_union"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_set_intersect> Z3_API Z3_mk_set_intersect(ArgType<&Z3_mk_set_intersect, 0> _0, ArgType<&Z3_mk_set_intersect, 1> _1, ArgType<&Z3_mk_set_intersect, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_intersect)>(Z3Loader::get().loadSymbol("Z3_mk_set_intersect"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_set_difference> Z3_API Z3_mk_set_difference(ArgType<&Z3_mk_set_difference, 0> _0, ArgType<&Z3_mk_set_difference, 1> _1, ArgType<&Z3_mk_set_difference, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_difference)>(Z3Loader::get().loadSymbol("Z3_mk_set_difference"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_set_complement> Z3_API Z3_mk_set_complement(ArgType<&Z3_mk_set_complement, 0> _0, ArgType<&Z3_mk_set_complement, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_complement)>(Z3Loader::get().loadSymbol("Z3_mk_set_complement"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_set_member> Z3_API Z3_mk_set_member(ArgType<&Z3_mk_set_member, 0> _0, ArgType<&Z3_mk_set_member, 1> _1, ArgType<&Z3_mk_set_member, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_member)>(Z3Loader::get().loadSymbol("Z3_mk_set_member"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_set_subset> Z3_API Z3_mk_set_subset(ArgType<&Z3_mk_set_subset, 0> _0, ArgType<&Z3_mk_set_subset, 1> _1, ArgType<&Z3_mk_set_subset, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_set_subset)>(Z3Loader::get().loadSymbol("Z3_mk_set_subset"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_array_ext> Z3_API Z3_mk_array_ext(ArgType<&Z3_mk_array_ext, 0> _0, ArgType<&Z3_mk_array_ext, 1> _1, ArgType<&Z3_mk_array_ext, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_array_ext)>(Z3Loader::get().loadSymbol("Z3_mk_array_ext"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_numeral> Z3_API Z3_mk_numeral(ArgType<&Z3_mk_numeral, 0> _0, ArgType<&Z3_mk_numeral, 1> _1, ArgType<&Z3_mk_numeral, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_numeral)>(Z3Loader::get().loadSymbol("Z3_mk_numeral"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_real> Z3_API Z3_mk_real(ArgType<&Z3_mk_real, 0> _0, ArgType<&Z3_mk_real, 1> _1, ArgType<&Z3_mk_real, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_real)>(Z3Loader::get().loadSymbol("Z3_mk_real"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_int> Z3_API Z3_mk_int(ArgType<&Z3_mk_int, 0> _0, ArgType<&Z3_mk_int, 1> _1, ArgType<&Z3_mk_int, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_int)>(Z3Loader::get().loadSymbol("Z3_mk_int"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_unsigned_int> Z3_API Z3_mk_unsigned_int(ArgType<&Z3_mk_unsigned_int, 0> _0, ArgType<&Z3_mk_unsigned_int, 1> _1, ArgType<&Z3_mk_unsigned_int, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_unsigned_int)>(Z3Loader::get().loadSymbol("Z3_mk_unsigned_int"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_int64> Z3_API Z3_mk_int64(ArgType<&Z3_mk_int64, 0> _0, ArgType<&Z3_mk_int64, 1> _1, ArgType<&Z3_mk_int64, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_int64)>(Z3Loader::get().loadSymbol("Z3_mk_int64"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_unsigned_int64> Z3_API Z3_mk_unsigned_int64(ArgType<&Z3_mk_unsigned_int64, 0> _0, ArgType<&Z3_mk_unsigned_int64, 1> _1, ArgType<&Z3_mk_unsigned_int64, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_unsigned_int64)>(Z3Loader::get().loadSymbol("Z3_mk_unsigned_int64"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bv_numeral> Z3_API Z3_mk_bv_numeral(ArgType<&Z3_mk_bv_numeral, 0> _0, ArgType<&Z3_mk_bv_numeral, 1> _1, ArgType<&Z3_mk_bv_numeral, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bv_numeral)>(Z3Loader::get().loadSymbol("Z3_mk_bv_numeral"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_seq_sort> Z3_API Z3_mk_seq_sort(ArgType<&Z3_mk_seq_sort, 0> _0, ArgType<&Z3_mk_seq_sort, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_sort)>(Z3Loader::get().loadSymbol("Z3_mk_seq_sort"));
	return sym(_0, _1);
}
ResultType<&Z3_is_seq_sort> Z3_API Z3_is_seq_sort(ArgType<&Z3_is_seq_sort, 0> _0, ArgType<&Z3_is_seq_sort, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_seq_sort)>(Z3Loader::get().loadSymbol("Z3_is_seq_sort"));
	return sym(_0, _1);
}
ResultType<&Z3_get_seq_sort_basis> Z3_API Z3_get_seq_sort_basis(ArgType<&Z3_get_seq_sort_basis, 0> _0, ArgType<&Z3_get_seq_sort_basis, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_seq_sort_basis)>(Z3Loader::get().loadSymbol("Z3_get_seq_sort_basis"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_re_sort> Z3_API Z3_mk_re_sort(ArgType<&Z3_mk_re_sort, 0> _0, ArgType<&Z3_mk_re_sort, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_sort)>(Z3Loader::get().loadSymbol("Z3_mk_re_sort"));
	return sym(_0, _1);
}
ResultType<&Z3_is_re_sort> Z3_API Z3_is_re_sort(ArgType<&Z3_is_re_sort, 0> _0, ArgType<&Z3_is_re_sort, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_re_sort)>(Z3Loader::get().loadSymbol("Z3_is_re_sort"));
	return sym(_0, _1);
}
ResultType<&Z3_get_re_sort_basis> Z3_API Z3_get_re_sort_basis(ArgType<&Z3_get_re_sort_basis, 0> _0, ArgType<&Z3_get_re_sort_basis, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_re_sort_basis)>(Z3Loader::get().loadSymbol("Z3_get_re_sort_basis"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_string_sort> Z3_API Z3_mk_string_sort(ArgType<&Z3_mk_string_sort, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_string_sort)>(Z3Loader::get().loadSymbol("Z3_mk_string_sort"));
	return sym(_0);
}
ResultType<&Z3_is_string_sort> Z3_API Z3_is_string_sort(ArgType<&Z3_is_string_sort, 0> _0, ArgType<&Z3_is_string_sort, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_string_sort)>(Z3Loader::get().loadSymbol("Z3_is_string_sort"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_string> Z3_API Z3_mk_string(ArgType<&Z3_mk_string, 0> _0, ArgType<&Z3_mk_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_string)>(Z3Loader::get().loadSymbol("Z3_mk_string"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_lstring> Z3_API Z3_mk_lstring(ArgType<&Z3_mk_lstring, 0> _0, ArgType<&Z3_mk_lstring, 1> _1, ArgType<&Z3_mk_lstring, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_lstring)>(Z3Loader::get().loadSymbol("Z3_mk_lstring"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_is_string> Z3_API Z3_is_string(ArgType<&Z3_is_string, 0> _0, ArgType<&Z3_is_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_string)>(Z3Loader::get().loadSymbol("Z3_is_string"));
	return sym(_0, _1);
}
ResultType<&Z3_get_string> Z3_API Z3_get_string(ArgType<&Z3_get_string, 0> _0, ArgType<&Z3_get_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_string)>(Z3Loader::get().loadSymbol("Z3_get_string"));
	return sym(_0, _1);
}
ResultType<&Z3_get_lstring> Z3_API Z3_get_lstring(ArgType<&Z3_get_lstring, 0> _0, ArgType<&Z3_get_lstring, 1> _1, ArgType<&Z3_get_lstring, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_lstring)>(Z3Loader::get().loadSymbol("Z3_get_lstring"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_seq_empty> Z3_API Z3_mk_seq_empty(ArgType<&Z3_mk_seq_empty, 0> _0, ArgType<&Z3_mk_seq_empty, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_empty)>(Z3Loader::get().loadSymbol("Z3_mk_seq_empty"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_seq_unit> Z3_API Z3_mk_seq_unit(ArgType<&Z3_mk_seq_unit, 0> _0, ArgType<&Z3_mk_seq_unit, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_unit)>(Z3Loader::get().loadSymbol("Z3_mk_seq_unit"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_seq_concat> Z3_API Z3_mk_seq_concat(ArgType<&Z3_mk_seq_concat, 0> _0, ArgType<&Z3_mk_seq_concat, 1> _1, ArgType<&Z3_mk_seq_concat, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_concat)>(Z3Loader::get().loadSymbol("Z3_mk_seq_concat"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_seq_prefix> Z3_API Z3_mk_seq_prefix(ArgType<&Z3_mk_seq_prefix, 0> _0, ArgType<&Z3_mk_seq_prefix, 1> _1, ArgType<&Z3_mk_seq_prefix, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_prefix)>(Z3Loader::get().loadSymbol("Z3_mk_seq_prefix"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_seq_suffix> Z3_API Z3_mk_seq_suffix(ArgType<&Z3_mk_seq_suffix, 0> _0, ArgType<&Z3_mk_seq_suffix, 1> _1, ArgType<&Z3_mk_seq_suffix, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_suffix)>(Z3Loader::get().loadSymbol("Z3_mk_seq_suffix"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_seq_contains> Z3_API Z3_mk_seq_contains(ArgType<&Z3_mk_seq_contains, 0> _0, ArgType<&Z3_mk_seq_contains, 1> _1, ArgType<&Z3_mk_seq_contains, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_contains)>(Z3Loader::get().loadSymbol("Z3_mk_seq_contains"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_str_lt> Z3_API Z3_mk_str_lt(ArgType<&Z3_mk_str_lt, 0> _0, ArgType<&Z3_mk_str_lt, 1> _1, ArgType<&Z3_mk_str_lt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_str_lt)>(Z3Loader::get().loadSymbol("Z3_mk_str_lt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_str_le> Z3_API Z3_mk_str_le(ArgType<&Z3_mk_str_le, 0> _0, ArgType<&Z3_mk_str_le, 1> _1, ArgType<&Z3_mk_str_le, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_str_le)>(Z3Loader::get().loadSymbol("Z3_mk_str_le"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_seq_extract> Z3_API Z3_mk_seq_extract(ArgType<&Z3_mk_seq_extract, 0> _0, ArgType<&Z3_mk_seq_extract, 1> _1, ArgType<&Z3_mk_seq_extract, 2> _2, ArgType<&Z3_mk_seq_extract, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_extract)>(Z3Loader::get().loadSymbol("Z3_mk_seq_extract"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_seq_replace> Z3_API Z3_mk_seq_replace(ArgType<&Z3_mk_seq_replace, 0> _0, ArgType<&Z3_mk_seq_replace, 1> _1, ArgType<&Z3_mk_seq_replace, 2> _2, ArgType<&Z3_mk_seq_replace, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_replace)>(Z3Loader::get().loadSymbol("Z3_mk_seq_replace"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_seq_at> Z3_API Z3_mk_seq_at(ArgType<&Z3_mk_seq_at, 0> _0, ArgType<&Z3_mk_seq_at, 1> _1, ArgType<&Z3_mk_seq_at, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_at)>(Z3Loader::get().loadSymbol("Z3_mk_seq_at"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_seq_nth> Z3_API Z3_mk_seq_nth(ArgType<&Z3_mk_seq_nth, 0> _0, ArgType<&Z3_mk_seq_nth, 1> _1, ArgType<&Z3_mk_seq_nth, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_nth)>(Z3Loader::get().loadSymbol("Z3_mk_seq_nth"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_seq_length> Z3_API Z3_mk_seq_length(ArgType<&Z3_mk_seq_length, 0> _0, ArgType<&Z3_mk_seq_length, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_length)>(Z3Loader::get().loadSymbol("Z3_mk_seq_length"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_seq_index> Z3_API Z3_mk_seq_index(ArgType<&Z3_mk_seq_index, 0> _0, ArgType<&Z3_mk_seq_index, 1> _1, ArgType<&Z3_mk_seq_index, 2> _2, ArgType<&Z3_mk_seq_index, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_index)>(Z3Loader::get().loadSymbol("Z3_mk_seq_index"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_seq_last_index> Z3_API Z3_mk_seq_last_index(ArgType<&Z3_mk_seq_last_index, 0> _0, ArgType<&Z3_mk_seq_last_index, 1> _1, ArgType<&Z3_mk_seq_last_index, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_last_index)>(Z3Loader::get().loadSymbol("Z3_mk_seq_last_index"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_str_to_int> Z3_API Z3_mk_str_to_int(ArgType<&Z3_mk_str_to_int, 0> _0, ArgType<&Z3_mk_str_to_int, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_str_to_int)>(Z3Loader::get().loadSymbol("Z3_mk_str_to_int"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_int_to_str> Z3_API Z3_mk_int_to_str(ArgType<&Z3_mk_int_to_str, 0> _0, ArgType<&Z3_mk_int_to_str, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_int_to_str)>(Z3Loader::get().loadSymbol("Z3_mk_int_to_str"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_seq_to_re> Z3_API Z3_mk_seq_to_re(ArgType<&Z3_mk_seq_to_re, 0> _0, ArgType<&Z3_mk_seq_to_re, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_to_re)>(Z3Loader::get().loadSymbol("Z3_mk_seq_to_re"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_seq_in_re> Z3_API Z3_mk_seq_in_re(ArgType<&Z3_mk_seq_in_re, 0> _0, ArgType<&Z3_mk_seq_in_re, 1> _1, ArgType<&Z3_mk_seq_in_re, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_seq_in_re)>(Z3Loader::get().loadSymbol("Z3_mk_seq_in_re"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_re_plus> Z3_API Z3_mk_re_plus(ArgType<&Z3_mk_re_plus, 0> _0, ArgType<&Z3_mk_re_plus, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_plus)>(Z3Loader::get().loadSymbol("Z3_mk_re_plus"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_re_star> Z3_API Z3_mk_re_star(ArgType<&Z3_mk_re_star, 0> _0, ArgType<&Z3_mk_re_star, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_star)>(Z3Loader::get().loadSymbol("Z3_mk_re_star"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_re_option> Z3_API Z3_mk_re_option(ArgType<&Z3_mk_re_option, 0> _0, ArgType<&Z3_mk_re_option, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_option)>(Z3Loader::get().loadSymbol("Z3_mk_re_option"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_re_union> Z3_API Z3_mk_re_union(ArgType<&Z3_mk_re_union, 0> _0, ArgType<&Z3_mk_re_union, 1> _1, ArgType<&Z3_mk_re_union, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_union)>(Z3Loader::get().loadSymbol("Z3_mk_re_union"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_re_concat> Z3_API Z3_mk_re_concat(ArgType<&Z3_mk_re_concat, 0> _0, ArgType<&Z3_mk_re_concat, 1> _1, ArgType<&Z3_mk_re_concat, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_concat)>(Z3Loader::get().loadSymbol("Z3_mk_re_concat"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_re_range> Z3_API Z3_mk_re_range(ArgType<&Z3_mk_re_range, 0> _0, ArgType<&Z3_mk_re_range, 1> _1, ArgType<&Z3_mk_re_range, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_range)>(Z3Loader::get().loadSymbol("Z3_mk_re_range"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_re_loop> Z3_API Z3_mk_re_loop(ArgType<&Z3_mk_re_loop, 0> _0, ArgType<&Z3_mk_re_loop, 1> _1, ArgType<&Z3_mk_re_loop, 2> _2, ArgType<&Z3_mk_re_loop, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_loop)>(Z3Loader::get().loadSymbol("Z3_mk_re_loop"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_re_intersect> Z3_API Z3_mk_re_intersect(ArgType<&Z3_mk_re_intersect, 0> _0, ArgType<&Z3_mk_re_intersect, 1> _1, ArgType<&Z3_mk_re_intersect, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_intersect)>(Z3Loader::get().loadSymbol("Z3_mk_re_intersect"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_re_complement> Z3_API Z3_mk_re_complement(ArgType<&Z3_mk_re_complement, 0> _0, ArgType<&Z3_mk_re_complement, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_complement)>(Z3Loader::get().loadSymbol("Z3_mk_re_complement"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_re_empty> Z3_API Z3_mk_re_empty(ArgType<&Z3_mk_re_empty, 0> _0, ArgType<&Z3_mk_re_empty, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_empty)>(Z3Loader::get().loadSymbol("Z3_mk_re_empty"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_re_full> Z3_API Z3_mk_re_full(ArgType<&Z3_mk_re_full, 0> _0, ArgType<&Z3_mk_re_full, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_re_full)>(Z3Loader::get().loadSymbol("Z3_mk_re_full"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_linear_order> Z3_API Z3_mk_linear_order(ArgType<&Z3_mk_linear_order, 0> _0, ArgType<&Z3_mk_linear_order, 1> _1, ArgType<&Z3_mk_linear_order, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_linear_order)>(Z3Loader::get().loadSymbol("Z3_mk_linear_order"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_partial_order> Z3_API Z3_mk_partial_order(ArgType<&Z3_mk_partial_order, 0> _0, ArgType<&Z3_mk_partial_order, 1> _1, ArgType<&Z3_mk_partial_order, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_partial_order)>(Z3Loader::get().loadSymbol("Z3_mk_partial_order"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_piecewise_linear_order> Z3_API Z3_mk_piecewise_linear_order(ArgType<&Z3_mk_piecewise_linear_order, 0> _0, ArgType<&Z3_mk_piecewise_linear_order, 1> _1, ArgType<&Z3_mk_piecewise_linear_order, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_piecewise_linear_order)>(Z3Loader::get().loadSymbol("Z3_mk_piecewise_linear_order"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_tree_order> Z3_API Z3_mk_tree_order(ArgType<&Z3_mk_tree_order, 0> _0, ArgType<&Z3_mk_tree_order, 1> _1, ArgType<&Z3_mk_tree_order, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_tree_order)>(Z3Loader::get().loadSymbol("Z3_mk_tree_order"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_transitive_closure> Z3_API Z3_mk_transitive_closure(ArgType<&Z3_mk_transitive_closure, 0> _0, ArgType<&Z3_mk_transitive_closure, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_transitive_closure)>(Z3Loader::get().loadSymbol("Z3_mk_transitive_closure"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_pattern> Z3_API Z3_mk_pattern(ArgType<&Z3_mk_pattern, 0> _0, ArgType<&Z3_mk_pattern, 1> _1, ArgType<&Z3_mk_pattern, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_pattern)>(Z3Loader::get().loadSymbol("Z3_mk_pattern"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_bound> Z3_API Z3_mk_bound(ArgType<&Z3_mk_bound, 0> _0, ArgType<&Z3_mk_bound, 1> _1, ArgType<&Z3_mk_bound, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_bound)>(Z3Loader::get().loadSymbol("Z3_mk_bound"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_forall> Z3_API Z3_mk_forall(ArgType<&Z3_mk_forall, 0> _0, ArgType<&Z3_mk_forall, 1> _1, ArgType<&Z3_mk_forall, 2> _2, ArgType<&Z3_mk_forall, 3> _3, ArgType<&Z3_mk_forall, 4> _4, ArgType<&Z3_mk_forall, 5> _5, ArgType<&Z3_mk_forall, 6> _6, ArgType<&Z3_mk_forall, 7> _7)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_forall)>(Z3Loader::get().loadSymbol("Z3_mk_forall"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7);
}
ResultType<&Z3_mk_exists> Z3_API Z3_mk_exists(ArgType<&Z3_mk_exists, 0> _0, ArgType<&Z3_mk_exists, 1> _1, ArgType<&Z3_mk_exists, 2> _2, ArgType<&Z3_mk_exists, 3> _3, ArgType<&Z3_mk_exists, 4> _4, ArgType<&Z3_mk_exists, 5> _5, ArgType<&Z3_mk_exists, 6> _6, ArgType<&Z3_mk_exists, 7> _7)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_exists)>(Z3Loader::get().loadSymbol("Z3_mk_exists"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7);
}
ResultType<&Z3_mk_quantifier> Z3_API Z3_mk_quantifier(ArgType<&Z3_mk_quantifier, 0> _0, ArgType<&Z3_mk_quantifier, 1> _1, ArgType<&Z3_mk_quantifier, 2> _2, ArgType<&Z3_mk_quantifier, 3> _3, ArgType<&Z3_mk_quantifier, 4> _4, ArgType<&Z3_mk_quantifier, 5> _5, ArgType<&Z3_mk_quantifier, 6> _6, ArgType<&Z3_mk_quantifier, 7> _7, ArgType<&Z3_mk_quantifier, 8> _8)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_quantifier)>(Z3Loader::get().loadSymbol("Z3_mk_quantifier"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7, _8);
}
ResultType<&Z3_mk_quantifier_ex> Z3_API Z3_mk_quantifier_ex(ArgType<&Z3_mk_quantifier_ex, 0> _0, ArgType<&Z3_mk_quantifier_ex, 1> _1, ArgType<&Z3_mk_quantifier_ex, 2> _2, ArgType<&Z3_mk_quantifier_ex, 3> _3, ArgType<&Z3_mk_quantifier_ex, 4> _4, ArgType<&Z3_mk_quantifier_ex, 5> _5, ArgType<&Z3_mk_quantifier_ex, 6> _6, ArgType<&Z3_mk_quantifier_ex, 7> _7, ArgType<&Z3_mk_quantifier_ex, 8> _8, ArgType<&Z3_mk_quantifier_ex, 9> _9, ArgType<&Z3_mk_quantifier_ex, 10> _10, ArgType<&Z3_mk_quantifier_ex, 11> _11, ArgType<&Z3_mk_quantifier_ex, 12> _12)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_quantifier_ex)>(Z3Loader::get().loadSymbol("Z3_mk_quantifier_ex"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12);
}
ResultType<&Z3_mk_forall_const> Z3_API Z3_mk_forall_const(ArgType<&Z3_mk_forall_const, 0> _0, ArgType<&Z3_mk_forall_const, 1> _1, ArgType<&Z3_mk_forall_const, 2> _2, ArgType<&Z3_mk_forall_const, 3> _3, ArgType<&Z3_mk_forall_const, 4> _4, ArgType<&Z3_mk_forall_const, 5> _5, ArgType<&Z3_mk_forall_const, 6> _6)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_forall_const)>(Z3Loader::get().loadSymbol("Z3_mk_forall_const"));
	return sym(_0, _1, _2, _3, _4, _5, _6);
}
ResultType<&Z3_mk_exists_const> Z3_API Z3_mk_exists_const(ArgType<&Z3_mk_exists_const, 0> _0, ArgType<&Z3_mk_exists_const, 1> _1, ArgType<&Z3_mk_exists_const, 2> _2, ArgType<&Z3_mk_exists_const, 3> _3, ArgType<&Z3_mk_exists_const, 4> _4, ArgType<&Z3_mk_exists_const, 5> _5, ArgType<&Z3_mk_exists_const, 6> _6)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_exists_const)>(Z3Loader::get().loadSymbol("Z3_mk_exists_const"));
	return sym(_0, _1, _2, _3, _4, _5, _6);
}
ResultType<&Z3_mk_quantifier_const> Z3_API Z3_mk_quantifier_const(ArgType<&Z3_mk_quantifier_const, 0> _0, ArgType<&Z3_mk_quantifier_const, 1> _1, ArgType<&Z3_mk_quantifier_const, 2> _2, ArgType<&Z3_mk_quantifier_const, 3> _3, ArgType<&Z3_mk_quantifier_const, 4> _4, ArgType<&Z3_mk_quantifier_const, 5> _5, ArgType<&Z3_mk_quantifier_const, 6> _6, ArgType<&Z3_mk_quantifier_const, 7> _7)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_quantifier_const)>(Z3Loader::get().loadSymbol("Z3_mk_quantifier_const"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7);
}
ResultType<&Z3_mk_quantifier_const_ex> Z3_API Z3_mk_quantifier_const_ex(ArgType<&Z3_mk_quantifier_const_ex, 0> _0, ArgType<&Z3_mk_quantifier_const_ex, 1> _1, ArgType<&Z3_mk_quantifier_const_ex, 2> _2, ArgType<&Z3_mk_quantifier_const_ex, 3> _3, ArgType<&Z3_mk_quantifier_const_ex, 4> _4, ArgType<&Z3_mk_quantifier_const_ex, 5> _5, ArgType<&Z3_mk_quantifier_const_ex, 6> _6, ArgType<&Z3_mk_quantifier_const_ex, 7> _7, ArgType<&Z3_mk_quantifier_const_ex, 8> _8, ArgType<&Z3_mk_quantifier_const_ex, 9> _9, ArgType<&Z3_mk_quantifier_const_ex, 10> _10, ArgType<&Z3_mk_quantifier_const_ex, 11> _11)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_quantifier_const_ex)>(Z3Loader::get().loadSymbol("Z3_mk_quantifier_const_ex"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11);
}
ResultType<&Z3_mk_lambda> Z3_API Z3_mk_lambda(ArgType<&Z3_mk_lambda, 0> _0, ArgType<&Z3_mk_lambda, 1> _1, ArgType<&Z3_mk_lambda, 2> _2, ArgType<&Z3_mk_lambda, 3> _3, ArgType<&Z3_mk_lambda, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_lambda)>(Z3Loader::get().loadSymbol("Z3_mk_lambda"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_lambda_const> Z3_API Z3_mk_lambda_const(ArgType<&Z3_mk_lambda_const, 0> _0, ArgType<&Z3_mk_lambda_const, 1> _1, ArgType<&Z3_mk_lambda_const, 2> _2, ArgType<&Z3_mk_lambda_const, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_lambda_const)>(Z3Loader::get().loadSymbol("Z3_mk_lambda_const"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_get_symbol_kind> Z3_API Z3_get_symbol_kind(ArgType<&Z3_get_symbol_kind, 0> _0, ArgType<&Z3_get_symbol_kind, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_symbol_kind)>(Z3Loader::get().loadSymbol("Z3_get_symbol_kind"));
	return sym(_0, _1);
}
ResultType<&Z3_get_symbol_int> Z3_API Z3_get_symbol_int(ArgType<&Z3_get_symbol_int, 0> _0, ArgType<&Z3_get_symbol_int, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_symbol_int)>(Z3Loader::get().loadSymbol("Z3_get_symbol_int"));
	return sym(_0, _1);
}
ResultType<&Z3_get_symbol_string> Z3_API Z3_get_symbol_string(ArgType<&Z3_get_symbol_string, 0> _0, ArgType<&Z3_get_symbol_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_symbol_string)>(Z3Loader::get().loadSymbol("Z3_get_symbol_string"));
	return sym(_0, _1);
}
ResultType<&Z3_get_sort_name> Z3_API Z3_get_sort_name(ArgType<&Z3_get_sort_name, 0> _0, ArgType<&Z3_get_sort_name, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_sort_name)>(Z3Loader::get().loadSymbol("Z3_get_sort_name"));
	return sym(_0, _1);
}
ResultType<&Z3_get_sort_id> Z3_API Z3_get_sort_id(ArgType<&Z3_get_sort_id, 0> _0, ArgType<&Z3_get_sort_id, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_sort_id)>(Z3Loader::get().loadSymbol("Z3_get_sort_id"));
	return sym(_0, _1);
}
ResultType<&Z3_sort_to_ast> Z3_API Z3_sort_to_ast(ArgType<&Z3_sort_to_ast, 0> _0, ArgType<&Z3_sort_to_ast, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_sort_to_ast)>(Z3Loader::get().loadSymbol("Z3_sort_to_ast"));
	return sym(_0, _1);
}
ResultType<&Z3_is_eq_sort> Z3_API Z3_is_eq_sort(ArgType<&Z3_is_eq_sort, 0> _0, ArgType<&Z3_is_eq_sort, 1> _1, ArgType<&Z3_is_eq_sort, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_eq_sort)>(Z3Loader::get().loadSymbol("Z3_is_eq_sort"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_sort_kind> Z3_API Z3_get_sort_kind(ArgType<&Z3_get_sort_kind, 0> _0, ArgType<&Z3_get_sort_kind, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_sort_kind)>(Z3Loader::get().loadSymbol("Z3_get_sort_kind"));
	return sym(_0, _1);
}
ResultType<&Z3_get_bv_sort_size> Z3_API Z3_get_bv_sort_size(ArgType<&Z3_get_bv_sort_size, 0> _0, ArgType<&Z3_get_bv_sort_size, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_bv_sort_size)>(Z3Loader::get().loadSymbol("Z3_get_bv_sort_size"));
	return sym(_0, _1);
}
ResultType<&Z3_get_finite_domain_sort_size> Z3_API Z3_get_finite_domain_sort_size(ArgType<&Z3_get_finite_domain_sort_size, 0> _0, ArgType<&Z3_get_finite_domain_sort_size, 1> _1, ArgType<&Z3_get_finite_domain_sort_size, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_finite_domain_sort_size)>(Z3Loader::get().loadSymbol("Z3_get_finite_domain_sort_size"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_array_sort_domain> Z3_API Z3_get_array_sort_domain(ArgType<&Z3_get_array_sort_domain, 0> _0, ArgType<&Z3_get_array_sort_domain, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_array_sort_domain)>(Z3Loader::get().loadSymbol("Z3_get_array_sort_domain"));
	return sym(_0, _1);
}
ResultType<&Z3_get_array_sort_range> Z3_API Z3_get_array_sort_range(ArgType<&Z3_get_array_sort_range, 0> _0, ArgType<&Z3_get_array_sort_range, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_array_sort_range)>(Z3Loader::get().loadSymbol("Z3_get_array_sort_range"));
	return sym(_0, _1);
}
ResultType<&Z3_get_tuple_sort_mk_decl> Z3_API Z3_get_tuple_sort_mk_decl(ArgType<&Z3_get_tuple_sort_mk_decl, 0> _0, ArgType<&Z3_get_tuple_sort_mk_decl, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_tuple_sort_mk_decl)>(Z3Loader::get().loadSymbol("Z3_get_tuple_sort_mk_decl"));
	return sym(_0, _1);
}
ResultType<&Z3_get_tuple_sort_num_fields> Z3_API Z3_get_tuple_sort_num_fields(ArgType<&Z3_get_tuple_sort_num_fields, 0> _0, ArgType<&Z3_get_tuple_sort_num_fields, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_tuple_sort_num_fields)>(Z3Loader::get().loadSymbol("Z3_get_tuple_sort_num_fields"));
	return sym(_0, _1);
}
ResultType<&Z3_get_tuple_sort_field_decl> Z3_API Z3_get_tuple_sort_field_decl(ArgType<&Z3_get_tuple_sort_field_decl, 0> _0, ArgType<&Z3_get_tuple_sort_field_decl, 1> _1, ArgType<&Z3_get_tuple_sort_field_decl, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_tuple_sort_field_decl)>(Z3Loader::get().loadSymbol("Z3_get_tuple_sort_field_decl"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_datatype_sort_num_constructors> Z3_API Z3_get_datatype_sort_num_constructors(ArgType<&Z3_get_datatype_sort_num_constructors, 0> _0, ArgType<&Z3_get_datatype_sort_num_constructors, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_datatype_sort_num_constructors)>(Z3Loader::get().loadSymbol("Z3_get_datatype_sort_num_constructors"));
	return sym(_0, _1);
}
ResultType<&Z3_get_datatype_sort_constructor> Z3_API Z3_get_datatype_sort_constructor(ArgType<&Z3_get_datatype_sort_constructor, 0> _0, ArgType<&Z3_get_datatype_sort_constructor, 1> _1, ArgType<&Z3_get_datatype_sort_constructor, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_datatype_sort_constructor)>(Z3Loader::get().loadSymbol("Z3_get_datatype_sort_constructor"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_datatype_sort_recognizer> Z3_API Z3_get_datatype_sort_recognizer(ArgType<&Z3_get_datatype_sort_recognizer, 0> _0, ArgType<&Z3_get_datatype_sort_recognizer, 1> _1, ArgType<&Z3_get_datatype_sort_recognizer, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_datatype_sort_recognizer)>(Z3Loader::get().loadSymbol("Z3_get_datatype_sort_recognizer"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_datatype_sort_constructor_accessor> Z3_API Z3_get_datatype_sort_constructor_accessor(ArgType<&Z3_get_datatype_sort_constructor_accessor, 0> _0, ArgType<&Z3_get_datatype_sort_constructor_accessor, 1> _1, ArgType<&Z3_get_datatype_sort_constructor_accessor, 2> _2, ArgType<&Z3_get_datatype_sort_constructor_accessor, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_datatype_sort_constructor_accessor)>(Z3Loader::get().loadSymbol("Z3_get_datatype_sort_constructor_accessor"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_datatype_update_field> Z3_API Z3_datatype_update_field(ArgType<&Z3_datatype_update_field, 0> _0, ArgType<&Z3_datatype_update_field, 1> _1, ArgType<&Z3_datatype_update_field, 2> _2, ArgType<&Z3_datatype_update_field, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_datatype_update_field)>(Z3Loader::get().loadSymbol("Z3_datatype_update_field"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_get_relation_arity> Z3_API Z3_get_relation_arity(ArgType<&Z3_get_relation_arity, 0> _0, ArgType<&Z3_get_relation_arity, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_relation_arity)>(Z3Loader::get().loadSymbol("Z3_get_relation_arity"));
	return sym(_0, _1);
}
ResultType<&Z3_get_relation_column> Z3_API Z3_get_relation_column(ArgType<&Z3_get_relation_column, 0> _0, ArgType<&Z3_get_relation_column, 1> _1, ArgType<&Z3_get_relation_column, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_relation_column)>(Z3Loader::get().loadSymbol("Z3_get_relation_column"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_atmost> Z3_API Z3_mk_atmost(ArgType<&Z3_mk_atmost, 0> _0, ArgType<&Z3_mk_atmost, 1> _1, ArgType<&Z3_mk_atmost, 2> _2, ArgType<&Z3_mk_atmost, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_atmost)>(Z3Loader::get().loadSymbol("Z3_mk_atmost"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_atleast> Z3_API Z3_mk_atleast(ArgType<&Z3_mk_atleast, 0> _0, ArgType<&Z3_mk_atleast, 1> _1, ArgType<&Z3_mk_atleast, 2> _2, ArgType<&Z3_mk_atleast, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_atleast)>(Z3Loader::get().loadSymbol("Z3_mk_atleast"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_pble> Z3_API Z3_mk_pble(ArgType<&Z3_mk_pble, 0> _0, ArgType<&Z3_mk_pble, 1> _1, ArgType<&Z3_mk_pble, 2> _2, ArgType<&Z3_mk_pble, 3> _3, ArgType<&Z3_mk_pble, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_pble)>(Z3Loader::get().loadSymbol("Z3_mk_pble"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_pbge> Z3_API Z3_mk_pbge(ArgType<&Z3_mk_pbge, 0> _0, ArgType<&Z3_mk_pbge, 1> _1, ArgType<&Z3_mk_pbge, 2> _2, ArgType<&Z3_mk_pbge, 3> _3, ArgType<&Z3_mk_pbge, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_pbge)>(Z3Loader::get().loadSymbol("Z3_mk_pbge"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_pbeq> Z3_API Z3_mk_pbeq(ArgType<&Z3_mk_pbeq, 0> _0, ArgType<&Z3_mk_pbeq, 1> _1, ArgType<&Z3_mk_pbeq, 2> _2, ArgType<&Z3_mk_pbeq, 3> _3, ArgType<&Z3_mk_pbeq, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_pbeq)>(Z3Loader::get().loadSymbol("Z3_mk_pbeq"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_func_decl_to_ast> Z3_API Z3_func_decl_to_ast(ArgType<&Z3_func_decl_to_ast, 0> _0, ArgType<&Z3_func_decl_to_ast, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_decl_to_ast)>(Z3Loader::get().loadSymbol("Z3_func_decl_to_ast"));
	return sym(_0, _1);
}
ResultType<&Z3_is_eq_func_decl> Z3_API Z3_is_eq_func_decl(ArgType<&Z3_is_eq_func_decl, 0> _0, ArgType<&Z3_is_eq_func_decl, 1> _1, ArgType<&Z3_is_eq_func_decl, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_eq_func_decl)>(Z3Loader::get().loadSymbol("Z3_is_eq_func_decl"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_func_decl_id> Z3_API Z3_get_func_decl_id(ArgType<&Z3_get_func_decl_id, 0> _0, ArgType<&Z3_get_func_decl_id, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_func_decl_id)>(Z3Loader::get().loadSymbol("Z3_get_func_decl_id"));
	return sym(_0, _1);
}
ResultType<&Z3_get_decl_name> Z3_API Z3_get_decl_name(ArgType<&Z3_get_decl_name, 0> _0, ArgType<&Z3_get_decl_name, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_name)>(Z3Loader::get().loadSymbol("Z3_get_decl_name"));
	return sym(_0, _1);
}
ResultType<&Z3_get_decl_kind> Z3_API Z3_get_decl_kind(ArgType<&Z3_get_decl_kind, 0> _0, ArgType<&Z3_get_decl_kind, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_kind)>(Z3Loader::get().loadSymbol("Z3_get_decl_kind"));
	return sym(_0, _1);
}
ResultType<&Z3_get_domain_size> Z3_API Z3_get_domain_size(ArgType<&Z3_get_domain_size, 0> _0, ArgType<&Z3_get_domain_size, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_domain_size)>(Z3Loader::get().loadSymbol("Z3_get_domain_size"));
	return sym(_0, _1);
}
ResultType<&Z3_get_arity> Z3_API Z3_get_arity(ArgType<&Z3_get_arity, 0> _0, ArgType<&Z3_get_arity, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_arity)>(Z3Loader::get().loadSymbol("Z3_get_arity"));
	return sym(_0, _1);
}
ResultType<&Z3_get_domain> Z3_API Z3_get_domain(ArgType<&Z3_get_domain, 0> _0, ArgType<&Z3_get_domain, 1> _1, ArgType<&Z3_get_domain, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_domain)>(Z3Loader::get().loadSymbol("Z3_get_domain"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_range> Z3_API Z3_get_range(ArgType<&Z3_get_range, 0> _0, ArgType<&Z3_get_range, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_range)>(Z3Loader::get().loadSymbol("Z3_get_range"));
	return sym(_0, _1);
}
ResultType<&Z3_get_decl_num_parameters> Z3_API Z3_get_decl_num_parameters(ArgType<&Z3_get_decl_num_parameters, 0> _0, ArgType<&Z3_get_decl_num_parameters, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_num_parameters)>(Z3Loader::get().loadSymbol("Z3_get_decl_num_parameters"));
	return sym(_0, _1);
}
ResultType<&Z3_get_decl_parameter_kind> Z3_API Z3_get_decl_parameter_kind(ArgType<&Z3_get_decl_parameter_kind, 0> _0, ArgType<&Z3_get_decl_parameter_kind, 1> _1, ArgType<&Z3_get_decl_parameter_kind, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_parameter_kind)>(Z3Loader::get().loadSymbol("Z3_get_decl_parameter_kind"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_decl_int_parameter> Z3_API Z3_get_decl_int_parameter(ArgType<&Z3_get_decl_int_parameter, 0> _0, ArgType<&Z3_get_decl_int_parameter, 1> _1, ArgType<&Z3_get_decl_int_parameter, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_int_parameter)>(Z3Loader::get().loadSymbol("Z3_get_decl_int_parameter"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_decl_double_parameter> Z3_API Z3_get_decl_double_parameter(ArgType<&Z3_get_decl_double_parameter, 0> _0, ArgType<&Z3_get_decl_double_parameter, 1> _1, ArgType<&Z3_get_decl_double_parameter, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_double_parameter)>(Z3Loader::get().loadSymbol("Z3_get_decl_double_parameter"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_decl_symbol_parameter> Z3_API Z3_get_decl_symbol_parameter(ArgType<&Z3_get_decl_symbol_parameter, 0> _0, ArgType<&Z3_get_decl_symbol_parameter, 1> _1, ArgType<&Z3_get_decl_symbol_parameter, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_symbol_parameter)>(Z3Loader::get().loadSymbol("Z3_get_decl_symbol_parameter"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_decl_sort_parameter> Z3_API Z3_get_decl_sort_parameter(ArgType<&Z3_get_decl_sort_parameter, 0> _0, ArgType<&Z3_get_decl_sort_parameter, 1> _1, ArgType<&Z3_get_decl_sort_parameter, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_sort_parameter)>(Z3Loader::get().loadSymbol("Z3_get_decl_sort_parameter"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_decl_ast_parameter> Z3_API Z3_get_decl_ast_parameter(ArgType<&Z3_get_decl_ast_parameter, 0> _0, ArgType<&Z3_get_decl_ast_parameter, 1> _1, ArgType<&Z3_get_decl_ast_parameter, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_ast_parameter)>(Z3Loader::get().loadSymbol("Z3_get_decl_ast_parameter"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_decl_func_decl_parameter> Z3_API Z3_get_decl_func_decl_parameter(ArgType<&Z3_get_decl_func_decl_parameter, 0> _0, ArgType<&Z3_get_decl_func_decl_parameter, 1> _1, ArgType<&Z3_get_decl_func_decl_parameter, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_func_decl_parameter)>(Z3Loader::get().loadSymbol("Z3_get_decl_func_decl_parameter"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_decl_rational_parameter> Z3_API Z3_get_decl_rational_parameter(ArgType<&Z3_get_decl_rational_parameter, 0> _0, ArgType<&Z3_get_decl_rational_parameter, 1> _1, ArgType<&Z3_get_decl_rational_parameter, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_decl_rational_parameter)>(Z3Loader::get().loadSymbol("Z3_get_decl_rational_parameter"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_app_to_ast> Z3_API Z3_app_to_ast(ArgType<&Z3_app_to_ast, 0> _0, ArgType<&Z3_app_to_ast, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_app_to_ast)>(Z3Loader::get().loadSymbol("Z3_app_to_ast"));
	return sym(_0, _1);
}
ResultType<&Z3_get_app_decl> Z3_API Z3_get_app_decl(ArgType<&Z3_get_app_decl, 0> _0, ArgType<&Z3_get_app_decl, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_app_decl)>(Z3Loader::get().loadSymbol("Z3_get_app_decl"));
	return sym(_0, _1);
}
ResultType<&Z3_get_app_num_args> Z3_API Z3_get_app_num_args(ArgType<&Z3_get_app_num_args, 0> _0, ArgType<&Z3_get_app_num_args, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_app_num_args)>(Z3Loader::get().loadSymbol("Z3_get_app_num_args"));
	return sym(_0, _1);
}
ResultType<&Z3_get_app_arg> Z3_API Z3_get_app_arg(ArgType<&Z3_get_app_arg, 0> _0, ArgType<&Z3_get_app_arg, 1> _1, ArgType<&Z3_get_app_arg, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_app_arg)>(Z3Loader::get().loadSymbol("Z3_get_app_arg"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_is_eq_ast> Z3_API Z3_is_eq_ast(ArgType<&Z3_is_eq_ast, 0> _0, ArgType<&Z3_is_eq_ast, 1> _1, ArgType<&Z3_is_eq_ast, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_eq_ast)>(Z3Loader::get().loadSymbol("Z3_is_eq_ast"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_ast_id> Z3_API Z3_get_ast_id(ArgType<&Z3_get_ast_id, 0> _0, ArgType<&Z3_get_ast_id, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_ast_id)>(Z3Loader::get().loadSymbol("Z3_get_ast_id"));
	return sym(_0, _1);
}
ResultType<&Z3_get_ast_hash> Z3_API Z3_get_ast_hash(ArgType<&Z3_get_ast_hash, 0> _0, ArgType<&Z3_get_ast_hash, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_ast_hash)>(Z3Loader::get().loadSymbol("Z3_get_ast_hash"));
	return sym(_0, _1);
}
ResultType<&Z3_get_sort> Z3_API Z3_get_sort(ArgType<&Z3_get_sort, 0> _0, ArgType<&Z3_get_sort, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_sort)>(Z3Loader::get().loadSymbol("Z3_get_sort"));
	return sym(_0, _1);
}
ResultType<&Z3_is_well_sorted> Z3_API Z3_is_well_sorted(ArgType<&Z3_is_well_sorted, 0> _0, ArgType<&Z3_is_well_sorted, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_well_sorted)>(Z3Loader::get().loadSymbol("Z3_is_well_sorted"));
	return sym(_0, _1);
}
ResultType<&Z3_get_bool_value> Z3_API Z3_get_bool_value(ArgType<&Z3_get_bool_value, 0> _0, ArgType<&Z3_get_bool_value, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_bool_value)>(Z3Loader::get().loadSymbol("Z3_get_bool_value"));
	return sym(_0, _1);
}
ResultType<&Z3_get_ast_kind> Z3_API Z3_get_ast_kind(ArgType<&Z3_get_ast_kind, 0> _0, ArgType<&Z3_get_ast_kind, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_ast_kind)>(Z3Loader::get().loadSymbol("Z3_get_ast_kind"));
	return sym(_0, _1);
}
ResultType<&Z3_is_app> Z3_API Z3_is_app(ArgType<&Z3_is_app, 0> _0, ArgType<&Z3_is_app, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_app)>(Z3Loader::get().loadSymbol("Z3_is_app"));
	return sym(_0, _1);
}
ResultType<&Z3_is_numeral_ast> Z3_API Z3_is_numeral_ast(ArgType<&Z3_is_numeral_ast, 0> _0, ArgType<&Z3_is_numeral_ast, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_numeral_ast)>(Z3Loader::get().loadSymbol("Z3_is_numeral_ast"));
	return sym(_0, _1);
}
ResultType<&Z3_is_algebraic_number> Z3_API Z3_is_algebraic_number(ArgType<&Z3_is_algebraic_number, 0> _0, ArgType<&Z3_is_algebraic_number, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_algebraic_number)>(Z3Loader::get().loadSymbol("Z3_is_algebraic_number"));
	return sym(_0, _1);
}
ResultType<&Z3_to_app> Z3_API Z3_to_app(ArgType<&Z3_to_app, 0> _0, ArgType<&Z3_to_app, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_to_app)>(Z3Loader::get().loadSymbol("Z3_to_app"));
	return sym(_0, _1);
}
ResultType<&Z3_to_func_decl> Z3_API Z3_to_func_decl(ArgType<&Z3_to_func_decl, 0> _0, ArgType<&Z3_to_func_decl, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_to_func_decl)>(Z3Loader::get().loadSymbol("Z3_to_func_decl"));
	return sym(_0, _1);
}
ResultType<&Z3_get_numeral_string> Z3_API Z3_get_numeral_string(ArgType<&Z3_get_numeral_string, 0> _0, ArgType<&Z3_get_numeral_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_string)>(Z3Loader::get().loadSymbol("Z3_get_numeral_string"));
	return sym(_0, _1);
}
ResultType<&Z3_get_numeral_binary_string> Z3_API Z3_get_numeral_binary_string(ArgType<&Z3_get_numeral_binary_string, 0> _0, ArgType<&Z3_get_numeral_binary_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_binary_string)>(Z3Loader::get().loadSymbol("Z3_get_numeral_binary_string"));
	return sym(_0, _1);
}
ResultType<&Z3_get_numeral_decimal_string> Z3_API Z3_get_numeral_decimal_string(ArgType<&Z3_get_numeral_decimal_string, 0> _0, ArgType<&Z3_get_numeral_decimal_string, 1> _1, ArgType<&Z3_get_numeral_decimal_string, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_decimal_string)>(Z3Loader::get().loadSymbol("Z3_get_numeral_decimal_string"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_numeral_double> Z3_API Z3_get_numeral_double(ArgType<&Z3_get_numeral_double, 0> _0, ArgType<&Z3_get_numeral_double, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_double)>(Z3Loader::get().loadSymbol("Z3_get_numeral_double"));
	return sym(_0, _1);
}
ResultType<&Z3_get_numerator> Z3_API Z3_get_numerator(ArgType<&Z3_get_numerator, 0> _0, ArgType<&Z3_get_numerator, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numerator)>(Z3Loader::get().loadSymbol("Z3_get_numerator"));
	return sym(_0, _1);
}
ResultType<&Z3_get_denominator> Z3_API Z3_get_denominator(ArgType<&Z3_get_denominator, 0> _0, ArgType<&Z3_get_denominator, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_denominator)>(Z3Loader::get().loadSymbol("Z3_get_denominator"));
	return sym(_0, _1);
}
ResultType<&Z3_get_numeral_small> Z3_API Z3_get_numeral_small(ArgType<&Z3_get_numeral_small, 0> _0, ArgType<&Z3_get_numeral_small, 1> _1, ArgType<&Z3_get_numeral_small, 2> _2, ArgType<&Z3_get_numeral_small, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_small)>(Z3Loader::get().loadSymbol("Z3_get_numeral_small"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_get_numeral_int> Z3_API Z3_get_numeral_int(ArgType<&Z3_get_numeral_int, 0> _0, ArgType<&Z3_get_numeral_int, 1> _1, ArgType<&Z3_get_numeral_int, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_int)>(Z3Loader::get().loadSymbol("Z3_get_numeral_int"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_numeral_uint> Z3_API Z3_get_numeral_uint(ArgType<&Z3_get_numeral_uint, 0> _0, ArgType<&Z3_get_numeral_uint, 1> _1, ArgType<&Z3_get_numeral_uint, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_uint)>(Z3Loader::get().loadSymbol("Z3_get_numeral_uint"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_numeral_uint64> Z3_API Z3_get_numeral_uint64(ArgType<&Z3_get_numeral_uint64, 0> _0, ArgType<&Z3_get_numeral_uint64, 1> _1, ArgType<&Z3_get_numeral_uint64, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_uint64)>(Z3Loader::get().loadSymbol("Z3_get_numeral_uint64"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_numeral_int64> Z3_API Z3_get_numeral_int64(ArgType<&Z3_get_numeral_int64, 0> _0, ArgType<&Z3_get_numeral_int64, 1> _1, ArgType<&Z3_get_numeral_int64, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_int64)>(Z3Loader::get().loadSymbol("Z3_get_numeral_int64"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_numeral_rational_int64> Z3_API Z3_get_numeral_rational_int64(ArgType<&Z3_get_numeral_rational_int64, 0> _0, ArgType<&Z3_get_numeral_rational_int64, 1> _1, ArgType<&Z3_get_numeral_rational_int64, 2> _2, ArgType<&Z3_get_numeral_rational_int64, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_numeral_rational_int64)>(Z3Loader::get().loadSymbol("Z3_get_numeral_rational_int64"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_get_algebraic_number_lower> Z3_API Z3_get_algebraic_number_lower(ArgType<&Z3_get_algebraic_number_lower, 0> _0, ArgType<&Z3_get_algebraic_number_lower, 1> _1, ArgType<&Z3_get_algebraic_number_lower, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_algebraic_number_lower)>(Z3Loader::get().loadSymbol("Z3_get_algebraic_number_lower"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_algebraic_number_upper> Z3_API Z3_get_algebraic_number_upper(ArgType<&Z3_get_algebraic_number_upper, 0> _0, ArgType<&Z3_get_algebraic_number_upper, 1> _1, ArgType<&Z3_get_algebraic_number_upper, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_algebraic_number_upper)>(Z3Loader::get().loadSymbol("Z3_get_algebraic_number_upper"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_pattern_to_ast> Z3_API Z3_pattern_to_ast(ArgType<&Z3_pattern_to_ast, 0> _0, ArgType<&Z3_pattern_to_ast, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_pattern_to_ast)>(Z3Loader::get().loadSymbol("Z3_pattern_to_ast"));
	return sym(_0, _1);
}
ResultType<&Z3_get_pattern_num_terms> Z3_API Z3_get_pattern_num_terms(ArgType<&Z3_get_pattern_num_terms, 0> _0, ArgType<&Z3_get_pattern_num_terms, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_pattern_num_terms)>(Z3Loader::get().loadSymbol("Z3_get_pattern_num_terms"));
	return sym(_0, _1);
}
ResultType<&Z3_get_pattern> Z3_API Z3_get_pattern(ArgType<&Z3_get_pattern, 0> _0, ArgType<&Z3_get_pattern, 1> _1, ArgType<&Z3_get_pattern, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_pattern)>(Z3Loader::get().loadSymbol("Z3_get_pattern"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_index_value> Z3_API Z3_get_index_value(ArgType<&Z3_get_index_value, 0> _0, ArgType<&Z3_get_index_value, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_index_value)>(Z3Loader::get().loadSymbol("Z3_get_index_value"));
	return sym(_0, _1);
}
ResultType<&Z3_is_quantifier_forall> Z3_API Z3_is_quantifier_forall(ArgType<&Z3_is_quantifier_forall, 0> _0, ArgType<&Z3_is_quantifier_forall, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_quantifier_forall)>(Z3Loader::get().loadSymbol("Z3_is_quantifier_forall"));
	return sym(_0, _1);
}
ResultType<&Z3_is_quantifier_exists> Z3_API Z3_is_quantifier_exists(ArgType<&Z3_is_quantifier_exists, 0> _0, ArgType<&Z3_is_quantifier_exists, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_quantifier_exists)>(Z3Loader::get().loadSymbol("Z3_is_quantifier_exists"));
	return sym(_0, _1);
}
ResultType<&Z3_is_lambda> Z3_API Z3_is_lambda(ArgType<&Z3_is_lambda, 0> _0, ArgType<&Z3_is_lambda, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_lambda)>(Z3Loader::get().loadSymbol("Z3_is_lambda"));
	return sym(_0, _1);
}
ResultType<&Z3_get_quantifier_weight> Z3_API Z3_get_quantifier_weight(ArgType<&Z3_get_quantifier_weight, 0> _0, ArgType<&Z3_get_quantifier_weight, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_quantifier_weight)>(Z3Loader::get().loadSymbol("Z3_get_quantifier_weight"));
	return sym(_0, _1);
}
ResultType<&Z3_get_quantifier_num_patterns> Z3_API Z3_get_quantifier_num_patterns(ArgType<&Z3_get_quantifier_num_patterns, 0> _0, ArgType<&Z3_get_quantifier_num_patterns, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_quantifier_num_patterns)>(Z3Loader::get().loadSymbol("Z3_get_quantifier_num_patterns"));
	return sym(_0, _1);
}
ResultType<&Z3_get_quantifier_pattern_ast> Z3_API Z3_get_quantifier_pattern_ast(ArgType<&Z3_get_quantifier_pattern_ast, 0> _0, ArgType<&Z3_get_quantifier_pattern_ast, 1> _1, ArgType<&Z3_get_quantifier_pattern_ast, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_quantifier_pattern_ast)>(Z3Loader::get().loadSymbol("Z3_get_quantifier_pattern_ast"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_quantifier_num_no_patterns> Z3_API Z3_get_quantifier_num_no_patterns(ArgType<&Z3_get_quantifier_num_no_patterns, 0> _0, ArgType<&Z3_get_quantifier_num_no_patterns, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_quantifier_num_no_patterns)>(Z3Loader::get().loadSymbol("Z3_get_quantifier_num_no_patterns"));
	return sym(_0, _1);
}
ResultType<&Z3_get_quantifier_no_pattern_ast> Z3_API Z3_get_quantifier_no_pattern_ast(ArgType<&Z3_get_quantifier_no_pattern_ast, 0> _0, ArgType<&Z3_get_quantifier_no_pattern_ast, 1> _1, ArgType<&Z3_get_quantifier_no_pattern_ast, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_quantifier_no_pattern_ast)>(Z3Loader::get().loadSymbol("Z3_get_quantifier_no_pattern_ast"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_quantifier_num_bound> Z3_API Z3_get_quantifier_num_bound(ArgType<&Z3_get_quantifier_num_bound, 0> _0, ArgType<&Z3_get_quantifier_num_bound, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_quantifier_num_bound)>(Z3Loader::get().loadSymbol("Z3_get_quantifier_num_bound"));
	return sym(_0, _1);
}
ResultType<&Z3_get_quantifier_bound_name> Z3_API Z3_get_quantifier_bound_name(ArgType<&Z3_get_quantifier_bound_name, 0> _0, ArgType<&Z3_get_quantifier_bound_name, 1> _1, ArgType<&Z3_get_quantifier_bound_name, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_quantifier_bound_name)>(Z3Loader::get().loadSymbol("Z3_get_quantifier_bound_name"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_quantifier_bound_sort> Z3_API Z3_get_quantifier_bound_sort(ArgType<&Z3_get_quantifier_bound_sort, 0> _0, ArgType<&Z3_get_quantifier_bound_sort, 1> _1, ArgType<&Z3_get_quantifier_bound_sort, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_quantifier_bound_sort)>(Z3Loader::get().loadSymbol("Z3_get_quantifier_bound_sort"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_quantifier_body> Z3_API Z3_get_quantifier_body(ArgType<&Z3_get_quantifier_body, 0> _0, ArgType<&Z3_get_quantifier_body, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_quantifier_body)>(Z3Loader::get().loadSymbol("Z3_get_quantifier_body"));
	return sym(_0, _1);
}
ResultType<&Z3_simplify> Z3_API Z3_simplify(ArgType<&Z3_simplify, 0> _0, ArgType<&Z3_simplify, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_simplify)>(Z3Loader::get().loadSymbol("Z3_simplify"));
	return sym(_0, _1);
}
ResultType<&Z3_simplify_ex> Z3_API Z3_simplify_ex(ArgType<&Z3_simplify_ex, 0> _0, ArgType<&Z3_simplify_ex, 1> _1, ArgType<&Z3_simplify_ex, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_simplify_ex)>(Z3Loader::get().loadSymbol("Z3_simplify_ex"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_simplify_get_help> Z3_API Z3_simplify_get_help(ArgType<&Z3_simplify_get_help, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_simplify_get_help)>(Z3Loader::get().loadSymbol("Z3_simplify_get_help"));
	return sym(_0);
}
ResultType<&Z3_simplify_get_param_descrs> Z3_API Z3_simplify_get_param_descrs(ArgType<&Z3_simplify_get_param_descrs, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_simplify_get_param_descrs)>(Z3Loader::get().loadSymbol("Z3_simplify_get_param_descrs"));
	return sym(_0);
}
ResultType<&Z3_update_term> Z3_API Z3_update_term(ArgType<&Z3_update_term, 0> _0, ArgType<&Z3_update_term, 1> _1, ArgType<&Z3_update_term, 2> _2, ArgType<&Z3_update_term, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_update_term)>(Z3Loader::get().loadSymbol("Z3_update_term"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_substitute> Z3_API Z3_substitute(ArgType<&Z3_substitute, 0> _0, ArgType<&Z3_substitute, 1> _1, ArgType<&Z3_substitute, 2> _2, ArgType<&Z3_substitute, 3> _3, ArgType<&Z3_substitute, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_substitute)>(Z3Loader::get().loadSymbol("Z3_substitute"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_substitute_vars> Z3_API Z3_substitute_vars(ArgType<&Z3_substitute_vars, 0> _0, ArgType<&Z3_substitute_vars, 1> _1, ArgType<&Z3_substitute_vars, 2> _2, ArgType<&Z3_substitute_vars, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_substitute_vars)>(Z3Loader::get().loadSymbol("Z3_substitute_vars"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_translate> Z3_API Z3_translate(ArgType<&Z3_translate, 0> _0, ArgType<&Z3_translate, 1> _1, ArgType<&Z3_translate, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_translate)>(Z3Loader::get().loadSymbol("Z3_translate"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_model> Z3_API Z3_mk_model(ArgType<&Z3_mk_model, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_model)>(Z3Loader::get().loadSymbol("Z3_mk_model"));
	return sym(_0);
}
ResultType<&Z3_model_inc_ref> Z3_API Z3_model_inc_ref(ArgType<&Z3_model_inc_ref, 0> _0, ArgType<&Z3_model_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_inc_ref)>(Z3Loader::get().loadSymbol("Z3_model_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_model_dec_ref> Z3_API Z3_model_dec_ref(ArgType<&Z3_model_dec_ref, 0> _0, ArgType<&Z3_model_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_dec_ref)>(Z3Loader::get().loadSymbol("Z3_model_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_model_eval> Z3_API Z3_model_eval(ArgType<&Z3_model_eval, 0> _0, ArgType<&Z3_model_eval, 1> _1, ArgType<&Z3_model_eval, 2> _2, ArgType<&Z3_model_eval, 3> _3, ArgType<&Z3_model_eval, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_eval)>(Z3Loader::get().loadSymbol("Z3_model_eval"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_model_get_const_interp> Z3_API Z3_model_get_const_interp(ArgType<&Z3_model_get_const_interp, 0> _0, ArgType<&Z3_model_get_const_interp, 1> _1, ArgType<&Z3_model_get_const_interp, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_get_const_interp)>(Z3Loader::get().loadSymbol("Z3_model_get_const_interp"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_model_has_interp> Z3_API Z3_model_has_interp(ArgType<&Z3_model_has_interp, 0> _0, ArgType<&Z3_model_has_interp, 1> _1, ArgType<&Z3_model_has_interp, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_has_interp)>(Z3Loader::get().loadSymbol("Z3_model_has_interp"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_model_get_func_interp> Z3_API Z3_model_get_func_interp(ArgType<&Z3_model_get_func_interp, 0> _0, ArgType<&Z3_model_get_func_interp, 1> _1, ArgType<&Z3_model_get_func_interp, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_get_func_interp)>(Z3Loader::get().loadSymbol("Z3_model_get_func_interp"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_model_get_num_consts> Z3_API Z3_model_get_num_consts(ArgType<&Z3_model_get_num_consts, 0> _0, ArgType<&Z3_model_get_num_consts, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_get_num_consts)>(Z3Loader::get().loadSymbol("Z3_model_get_num_consts"));
	return sym(_0, _1);
}
ResultType<&Z3_model_get_const_decl> Z3_API Z3_model_get_const_decl(ArgType<&Z3_model_get_const_decl, 0> _0, ArgType<&Z3_model_get_const_decl, 1> _1, ArgType<&Z3_model_get_const_decl, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_get_const_decl)>(Z3Loader::get().loadSymbol("Z3_model_get_const_decl"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_model_get_num_funcs> Z3_API Z3_model_get_num_funcs(ArgType<&Z3_model_get_num_funcs, 0> _0, ArgType<&Z3_model_get_num_funcs, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_get_num_funcs)>(Z3Loader::get().loadSymbol("Z3_model_get_num_funcs"));
	return sym(_0, _1);
}
ResultType<&Z3_model_get_func_decl> Z3_API Z3_model_get_func_decl(ArgType<&Z3_model_get_func_decl, 0> _0, ArgType<&Z3_model_get_func_decl, 1> _1, ArgType<&Z3_model_get_func_decl, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_get_func_decl)>(Z3Loader::get().loadSymbol("Z3_model_get_func_decl"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_model_get_num_sorts> Z3_API Z3_model_get_num_sorts(ArgType<&Z3_model_get_num_sorts, 0> _0, ArgType<&Z3_model_get_num_sorts, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_get_num_sorts)>(Z3Loader::get().loadSymbol("Z3_model_get_num_sorts"));
	return sym(_0, _1);
}
ResultType<&Z3_model_get_sort> Z3_API Z3_model_get_sort(ArgType<&Z3_model_get_sort, 0> _0, ArgType<&Z3_model_get_sort, 1> _1, ArgType<&Z3_model_get_sort, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_get_sort)>(Z3Loader::get().loadSymbol("Z3_model_get_sort"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_model_get_sort_universe> Z3_API Z3_model_get_sort_universe(ArgType<&Z3_model_get_sort_universe, 0> _0, ArgType<&Z3_model_get_sort_universe, 1> _1, ArgType<&Z3_model_get_sort_universe, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_get_sort_universe)>(Z3Loader::get().loadSymbol("Z3_model_get_sort_universe"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_model_translate> Z3_API Z3_model_translate(ArgType<&Z3_model_translate, 0> _0, ArgType<&Z3_model_translate, 1> _1, ArgType<&Z3_model_translate, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_translate)>(Z3Loader::get().loadSymbol("Z3_model_translate"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_is_as_array> Z3_API Z3_is_as_array(ArgType<&Z3_is_as_array, 0> _0, ArgType<&Z3_is_as_array, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_is_as_array)>(Z3Loader::get().loadSymbol("Z3_is_as_array"));
	return sym(_0, _1);
}
ResultType<&Z3_get_as_array_func_decl> Z3_API Z3_get_as_array_func_decl(ArgType<&Z3_get_as_array_func_decl, 0> _0, ArgType<&Z3_get_as_array_func_decl, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_as_array_func_decl)>(Z3Loader::get().loadSymbol("Z3_get_as_array_func_decl"));
	return sym(_0, _1);
}
ResultType<&Z3_add_func_interp> Z3_API Z3_add_func_interp(ArgType<&Z3_add_func_interp, 0> _0, ArgType<&Z3_add_func_interp, 1> _1, ArgType<&Z3_add_func_interp, 2> _2, ArgType<&Z3_add_func_interp, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_add_func_interp)>(Z3Loader::get().loadSymbol("Z3_add_func_interp"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_add_const_interp> Z3_API Z3_add_const_interp(ArgType<&Z3_add_const_interp, 0> _0, ArgType<&Z3_add_const_interp, 1> _1, ArgType<&Z3_add_const_interp, 2> _2, ArgType<&Z3_add_const_interp, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_add_const_interp)>(Z3Loader::get().loadSymbol("Z3_add_const_interp"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_func_interp_inc_ref> Z3_API Z3_func_interp_inc_ref(ArgType<&Z3_func_interp_inc_ref, 0> _0, ArgType<&Z3_func_interp_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_interp_inc_ref)>(Z3Loader::get().loadSymbol("Z3_func_interp_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_func_interp_dec_ref> Z3_API Z3_func_interp_dec_ref(ArgType<&Z3_func_interp_dec_ref, 0> _0, ArgType<&Z3_func_interp_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_interp_dec_ref)>(Z3Loader::get().loadSymbol("Z3_func_interp_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_func_interp_get_num_entries> Z3_API Z3_func_interp_get_num_entries(ArgType<&Z3_func_interp_get_num_entries, 0> _0, ArgType<&Z3_func_interp_get_num_entries, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_interp_get_num_entries)>(Z3Loader::get().loadSymbol("Z3_func_interp_get_num_entries"));
	return sym(_0, _1);
}
ResultType<&Z3_func_interp_get_entry> Z3_API Z3_func_interp_get_entry(ArgType<&Z3_func_interp_get_entry, 0> _0, ArgType<&Z3_func_interp_get_entry, 1> _1, ArgType<&Z3_func_interp_get_entry, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_interp_get_entry)>(Z3Loader::get().loadSymbol("Z3_func_interp_get_entry"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_func_interp_get_else> Z3_API Z3_func_interp_get_else(ArgType<&Z3_func_interp_get_else, 0> _0, ArgType<&Z3_func_interp_get_else, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_interp_get_else)>(Z3Loader::get().loadSymbol("Z3_func_interp_get_else"));
	return sym(_0, _1);
}
ResultType<&Z3_func_interp_set_else> Z3_API Z3_func_interp_set_else(ArgType<&Z3_func_interp_set_else, 0> _0, ArgType<&Z3_func_interp_set_else, 1> _1, ArgType<&Z3_func_interp_set_else, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_interp_set_else)>(Z3Loader::get().loadSymbol("Z3_func_interp_set_else"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_func_interp_get_arity> Z3_API Z3_func_interp_get_arity(ArgType<&Z3_func_interp_get_arity, 0> _0, ArgType<&Z3_func_interp_get_arity, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_interp_get_arity)>(Z3Loader::get().loadSymbol("Z3_func_interp_get_arity"));
	return sym(_0, _1);
}
ResultType<&Z3_func_interp_add_entry> Z3_API Z3_func_interp_add_entry(ArgType<&Z3_func_interp_add_entry, 0> _0, ArgType<&Z3_func_interp_add_entry, 1> _1, ArgType<&Z3_func_interp_add_entry, 2> _2, ArgType<&Z3_func_interp_add_entry, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_interp_add_entry)>(Z3Loader::get().loadSymbol("Z3_func_interp_add_entry"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_func_entry_inc_ref> Z3_API Z3_func_entry_inc_ref(ArgType<&Z3_func_entry_inc_ref, 0> _0, ArgType<&Z3_func_entry_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_entry_inc_ref)>(Z3Loader::get().loadSymbol("Z3_func_entry_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_func_entry_dec_ref> Z3_API Z3_func_entry_dec_ref(ArgType<&Z3_func_entry_dec_ref, 0> _0, ArgType<&Z3_func_entry_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_entry_dec_ref)>(Z3Loader::get().loadSymbol("Z3_func_entry_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_func_entry_get_value> Z3_API Z3_func_entry_get_value(ArgType<&Z3_func_entry_get_value, 0> _0, ArgType<&Z3_func_entry_get_value, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_entry_get_value)>(Z3Loader::get().loadSymbol("Z3_func_entry_get_value"));
	return sym(_0, _1);
}
ResultType<&Z3_func_entry_get_num_args> Z3_API Z3_func_entry_get_num_args(ArgType<&Z3_func_entry_get_num_args, 0> _0, ArgType<&Z3_func_entry_get_num_args, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_entry_get_num_args)>(Z3Loader::get().loadSymbol("Z3_func_entry_get_num_args"));
	return sym(_0, _1);
}
ResultType<&Z3_func_entry_get_arg> Z3_API Z3_func_entry_get_arg(ArgType<&Z3_func_entry_get_arg, 0> _0, ArgType<&Z3_func_entry_get_arg, 1> _1, ArgType<&Z3_func_entry_get_arg, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_entry_get_arg)>(Z3Loader::get().loadSymbol("Z3_func_entry_get_arg"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_open_log> Z3_API Z3_open_log(ArgType<&Z3_open_log, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_open_log)>(Z3Loader::get().loadSymbol("Z3_open_log"));
	return sym(_0);
}
ResultType<&Z3_append_log> Z3_API Z3_append_log(ArgType<&Z3_append_log, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_append_log)>(Z3Loader::get().loadSymbol("Z3_append_log"));
	return sym(_0);
}
ResultType<&Z3_close_log> Z3_API Z3_close_log()
{
	static auto sym = reinterpret_cast<decltype(&Z3_close_log)>(Z3Loader::get().loadSymbol("Z3_close_log"));
	return sym();
}
ResultType<&Z3_toggle_warning_messages> Z3_API Z3_toggle_warning_messages(ArgType<&Z3_toggle_warning_messages, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_toggle_warning_messages)>(Z3Loader::get().loadSymbol("Z3_toggle_warning_messages"));
	return sym(_0);
}
ResultType<&Z3_set_ast_print_mode> Z3_API Z3_set_ast_print_mode(ArgType<&Z3_set_ast_print_mode, 0> _0, ArgType<&Z3_set_ast_print_mode, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_set_ast_print_mode)>(Z3Loader::get().loadSymbol("Z3_set_ast_print_mode"));
	return sym(_0, _1);
}
ResultType<&Z3_ast_to_string> Z3_API Z3_ast_to_string(ArgType<&Z3_ast_to_string, 0> _0, ArgType<&Z3_ast_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_to_string)>(Z3Loader::get().loadSymbol("Z3_ast_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_pattern_to_string> Z3_API Z3_pattern_to_string(ArgType<&Z3_pattern_to_string, 0> _0, ArgType<&Z3_pattern_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_pattern_to_string)>(Z3Loader::get().loadSymbol("Z3_pattern_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_sort_to_string> Z3_API Z3_sort_to_string(ArgType<&Z3_sort_to_string, 0> _0, ArgType<&Z3_sort_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_sort_to_string)>(Z3Loader::get().loadSymbol("Z3_sort_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_func_decl_to_string> Z3_API Z3_func_decl_to_string(ArgType<&Z3_func_decl_to_string, 0> _0, ArgType<&Z3_func_decl_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_func_decl_to_string)>(Z3Loader::get().loadSymbol("Z3_func_decl_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_model_to_string> Z3_API Z3_model_to_string(ArgType<&Z3_model_to_string, 0> _0, ArgType<&Z3_model_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_to_string)>(Z3Loader::get().loadSymbol("Z3_model_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_benchmark_to_smtlib_string> Z3_API Z3_benchmark_to_smtlib_string(ArgType<&Z3_benchmark_to_smtlib_string, 0> _0, ArgType<&Z3_benchmark_to_smtlib_string, 1> _1, ArgType<&Z3_benchmark_to_smtlib_string, 2> _2, ArgType<&Z3_benchmark_to_smtlib_string, 3> _3, ArgType<&Z3_benchmark_to_smtlib_string, 4> _4, ArgType<&Z3_benchmark_to_smtlib_string, 5> _5, ArgType<&Z3_benchmark_to_smtlib_string, 6> _6, ArgType<&Z3_benchmark_to_smtlib_string, 7> _7)
{
	static auto sym = reinterpret_cast<decltype(&Z3_benchmark_to_smtlib_string)>(Z3Loader::get().loadSymbol("Z3_benchmark_to_smtlib_string"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7);
}
ResultType<&Z3_parse_smtlib2_string> Z3_API Z3_parse_smtlib2_string(ArgType<&Z3_parse_smtlib2_string, 0> _0, ArgType<&Z3_parse_smtlib2_string, 1> _1, ArgType<&Z3_parse_smtlib2_string, 2> _2, ArgType<&Z3_parse_smtlib2_string, 3> _3, ArgType<&Z3_parse_smtlib2_string, 4> _4, ArgType<&Z3_parse_smtlib2_string, 5> _5, ArgType<&Z3_parse_smtlib2_string, 6> _6, ArgType<&Z3_parse_smtlib2_string, 7> _7)
{
	static auto sym = reinterpret_cast<decltype(&Z3_parse_smtlib2_string)>(Z3Loader::get().loadSymbol("Z3_parse_smtlib2_string"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7);
}
ResultType<&Z3_parse_smtlib2_file> Z3_API Z3_parse_smtlib2_file(ArgType<&Z3_parse_smtlib2_file, 0> _0, ArgType<&Z3_parse_smtlib2_file, 1> _1, ArgType<&Z3_parse_smtlib2_file, 2> _2, ArgType<&Z3_parse_smtlib2_file, 3> _3, ArgType<&Z3_parse_smtlib2_file, 4> _4, ArgType<&Z3_parse_smtlib2_file, 5> _5, ArgType<&Z3_parse_smtlib2_file, 6> _6, ArgType<&Z3_parse_smtlib2_file, 7> _7)
{
	static auto sym = reinterpret_cast<decltype(&Z3_parse_smtlib2_file)>(Z3Loader::get().loadSymbol("Z3_parse_smtlib2_file"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7);
}
ResultType<&Z3_eval_smtlib2_string> Z3_API Z3_eval_smtlib2_string(ArgType<&Z3_eval_smtlib2_string, 0> _0, ArgType<&Z3_eval_smtlib2_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_eval_smtlib2_string)>(Z3Loader::get().loadSymbol("Z3_eval_smtlib2_string"));
	return sym(_0, _1);
}
ResultType<&Z3_get_error_code> Z3_API Z3_get_error_code(ArgType<&Z3_get_error_code, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_error_code)>(Z3Loader::get().loadSymbol("Z3_get_error_code"));
	return sym(_0);
}
ResultType<&Z3_set_error> Z3_API Z3_set_error(ArgType<&Z3_set_error, 0> _0, ArgType<&Z3_set_error, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_set_error)>(Z3Loader::get().loadSymbol("Z3_set_error"));
	return sym(_0, _1);
}
ResultType<&Z3_get_error_msg> Z3_API Z3_get_error_msg(ArgType<&Z3_get_error_msg, 0> _0, ArgType<&Z3_get_error_msg, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_error_msg)>(Z3Loader::get().loadSymbol("Z3_get_error_msg"));
	return sym(_0, _1);
}
ResultType<&Z3_get_version> Z3_API Z3_get_version(ArgType<&Z3_get_version, 0> _0, ArgType<&Z3_get_version, 1> _1, ArgType<&Z3_get_version, 2> _2, ArgType<&Z3_get_version, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_version)>(Z3Loader::get().loadSymbol("Z3_get_version"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_get_full_version> Z3_API Z3_get_full_version()
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_full_version)>(Z3Loader::get().loadSymbol("Z3_get_full_version"));
	return sym();
}
ResultType<&Z3_enable_trace> Z3_API Z3_enable_trace(ArgType<&Z3_enable_trace, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_enable_trace)>(Z3Loader::get().loadSymbol("Z3_enable_trace"));
	return sym(_0);
}
ResultType<&Z3_disable_trace> Z3_API Z3_disable_trace(ArgType<&Z3_disable_trace, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_disable_trace)>(Z3Loader::get().loadSymbol("Z3_disable_trace"));
	return sym(_0);
}
ResultType<&Z3_reset_memory> Z3_API Z3_reset_memory()
{
	static auto sym = reinterpret_cast<decltype(&Z3_reset_memory)>(Z3Loader::get().loadSymbol("Z3_reset_memory"));
	return sym();
}
ResultType<&Z3_finalize_memory> Z3_API Z3_finalize_memory()
{
	static auto sym = reinterpret_cast<decltype(&Z3_finalize_memory)>(Z3Loader::get().loadSymbol("Z3_finalize_memory"));
	return sym();
}
ResultType<&Z3_mk_goal> Z3_API Z3_mk_goal(ArgType<&Z3_mk_goal, 0> _0, ArgType<&Z3_mk_goal, 1> _1, ArgType<&Z3_mk_goal, 2> _2, ArgType<&Z3_mk_goal, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_goal)>(Z3Loader::get().loadSymbol("Z3_mk_goal"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_goal_inc_ref> Z3_API Z3_goal_inc_ref(ArgType<&Z3_goal_inc_ref, 0> _0, ArgType<&Z3_goal_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_inc_ref)>(Z3Loader::get().loadSymbol("Z3_goal_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_dec_ref> Z3_API Z3_goal_dec_ref(ArgType<&Z3_goal_dec_ref, 0> _0, ArgType<&Z3_goal_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_dec_ref)>(Z3Loader::get().loadSymbol("Z3_goal_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_precision> Z3_API Z3_goal_precision(ArgType<&Z3_goal_precision, 0> _0, ArgType<&Z3_goal_precision, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_precision)>(Z3Loader::get().loadSymbol("Z3_goal_precision"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_assert> Z3_API Z3_goal_assert(ArgType<&Z3_goal_assert, 0> _0, ArgType<&Z3_goal_assert, 1> _1, ArgType<&Z3_goal_assert, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_assert)>(Z3Loader::get().loadSymbol("Z3_goal_assert"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_goal_inconsistent> Z3_API Z3_goal_inconsistent(ArgType<&Z3_goal_inconsistent, 0> _0, ArgType<&Z3_goal_inconsistent, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_inconsistent)>(Z3Loader::get().loadSymbol("Z3_goal_inconsistent"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_depth> Z3_API Z3_goal_depth(ArgType<&Z3_goal_depth, 0> _0, ArgType<&Z3_goal_depth, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_depth)>(Z3Loader::get().loadSymbol("Z3_goal_depth"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_reset> Z3_API Z3_goal_reset(ArgType<&Z3_goal_reset, 0> _0, ArgType<&Z3_goal_reset, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_reset)>(Z3Loader::get().loadSymbol("Z3_goal_reset"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_size> Z3_API Z3_goal_size(ArgType<&Z3_goal_size, 0> _0, ArgType<&Z3_goal_size, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_size)>(Z3Loader::get().loadSymbol("Z3_goal_size"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_formula> Z3_API Z3_goal_formula(ArgType<&Z3_goal_formula, 0> _0, ArgType<&Z3_goal_formula, 1> _1, ArgType<&Z3_goal_formula, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_formula)>(Z3Loader::get().loadSymbol("Z3_goal_formula"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_goal_num_exprs> Z3_API Z3_goal_num_exprs(ArgType<&Z3_goal_num_exprs, 0> _0, ArgType<&Z3_goal_num_exprs, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_num_exprs)>(Z3Loader::get().loadSymbol("Z3_goal_num_exprs"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_is_decided_sat> Z3_API Z3_goal_is_decided_sat(ArgType<&Z3_goal_is_decided_sat, 0> _0, ArgType<&Z3_goal_is_decided_sat, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_is_decided_sat)>(Z3Loader::get().loadSymbol("Z3_goal_is_decided_sat"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_is_decided_unsat> Z3_API Z3_goal_is_decided_unsat(ArgType<&Z3_goal_is_decided_unsat, 0> _0, ArgType<&Z3_goal_is_decided_unsat, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_is_decided_unsat)>(Z3Loader::get().loadSymbol("Z3_goal_is_decided_unsat"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_translate> Z3_API Z3_goal_translate(ArgType<&Z3_goal_translate, 0> _0, ArgType<&Z3_goal_translate, 1> _1, ArgType<&Z3_goal_translate, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_translate)>(Z3Loader::get().loadSymbol("Z3_goal_translate"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_goal_convert_model> Z3_API Z3_goal_convert_model(ArgType<&Z3_goal_convert_model, 0> _0, ArgType<&Z3_goal_convert_model, 1> _1, ArgType<&Z3_goal_convert_model, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_convert_model)>(Z3Loader::get().loadSymbol("Z3_goal_convert_model"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_goal_to_string> Z3_API Z3_goal_to_string(ArgType<&Z3_goal_to_string, 0> _0, ArgType<&Z3_goal_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_to_string)>(Z3Loader::get().loadSymbol("Z3_goal_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_goal_to_dimacs_string> Z3_API Z3_goal_to_dimacs_string(ArgType<&Z3_goal_to_dimacs_string, 0> _0, ArgType<&Z3_goal_to_dimacs_string, 1> _1, ArgType<&Z3_goal_to_dimacs_string, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_goal_to_dimacs_string)>(Z3Loader::get().loadSymbol("Z3_goal_to_dimacs_string"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_tactic> Z3_API Z3_mk_tactic(ArgType<&Z3_mk_tactic, 0> _0, ArgType<&Z3_mk_tactic, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_tactic)>(Z3Loader::get().loadSymbol("Z3_mk_tactic"));
	return sym(_0, _1);
}
ResultType<&Z3_tactic_inc_ref> Z3_API Z3_tactic_inc_ref(ArgType<&Z3_tactic_inc_ref, 0> _0, ArgType<&Z3_tactic_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_inc_ref)>(Z3Loader::get().loadSymbol("Z3_tactic_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_tactic_dec_ref> Z3_API Z3_tactic_dec_ref(ArgType<&Z3_tactic_dec_ref, 0> _0, ArgType<&Z3_tactic_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_dec_ref)>(Z3Loader::get().loadSymbol("Z3_tactic_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_probe> Z3_API Z3_mk_probe(ArgType<&Z3_mk_probe, 0> _0, ArgType<&Z3_mk_probe, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_probe)>(Z3Loader::get().loadSymbol("Z3_mk_probe"));
	return sym(_0, _1);
}
ResultType<&Z3_probe_inc_ref> Z3_API Z3_probe_inc_ref(ArgType<&Z3_probe_inc_ref, 0> _0, ArgType<&Z3_probe_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_inc_ref)>(Z3Loader::get().loadSymbol("Z3_probe_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_probe_dec_ref> Z3_API Z3_probe_dec_ref(ArgType<&Z3_probe_dec_ref, 0> _0, ArgType<&Z3_probe_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_dec_ref)>(Z3Loader::get().loadSymbol("Z3_probe_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_tactic_and_then> Z3_API Z3_tactic_and_then(ArgType<&Z3_tactic_and_then, 0> _0, ArgType<&Z3_tactic_and_then, 1> _1, ArgType<&Z3_tactic_and_then, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_and_then)>(Z3Loader::get().loadSymbol("Z3_tactic_and_then"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_tactic_or_else> Z3_API Z3_tactic_or_else(ArgType<&Z3_tactic_or_else, 0> _0, ArgType<&Z3_tactic_or_else, 1> _1, ArgType<&Z3_tactic_or_else, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_or_else)>(Z3Loader::get().loadSymbol("Z3_tactic_or_else"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_tactic_par_or> Z3_API Z3_tactic_par_or(ArgType<&Z3_tactic_par_or, 0> _0, ArgType<&Z3_tactic_par_or, 1> _1, ArgType<&Z3_tactic_par_or, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_par_or)>(Z3Loader::get().loadSymbol("Z3_tactic_par_or"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_tactic_par_and_then> Z3_API Z3_tactic_par_and_then(ArgType<&Z3_tactic_par_and_then, 0> _0, ArgType<&Z3_tactic_par_and_then, 1> _1, ArgType<&Z3_tactic_par_and_then, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_par_and_then)>(Z3Loader::get().loadSymbol("Z3_tactic_par_and_then"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_tactic_try_for> Z3_API Z3_tactic_try_for(ArgType<&Z3_tactic_try_for, 0> _0, ArgType<&Z3_tactic_try_for, 1> _1, ArgType<&Z3_tactic_try_for, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_try_for)>(Z3Loader::get().loadSymbol("Z3_tactic_try_for"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_tactic_when> Z3_API Z3_tactic_when(ArgType<&Z3_tactic_when, 0> _0, ArgType<&Z3_tactic_when, 1> _1, ArgType<&Z3_tactic_when, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_when)>(Z3Loader::get().loadSymbol("Z3_tactic_when"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_tactic_cond> Z3_API Z3_tactic_cond(ArgType<&Z3_tactic_cond, 0> _0, ArgType<&Z3_tactic_cond, 1> _1, ArgType<&Z3_tactic_cond, 2> _2, ArgType<&Z3_tactic_cond, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_cond)>(Z3Loader::get().loadSymbol("Z3_tactic_cond"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_tactic_repeat> Z3_API Z3_tactic_repeat(ArgType<&Z3_tactic_repeat, 0> _0, ArgType<&Z3_tactic_repeat, 1> _1, ArgType<&Z3_tactic_repeat, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_repeat)>(Z3Loader::get().loadSymbol("Z3_tactic_repeat"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_tactic_skip> Z3_API Z3_tactic_skip(ArgType<&Z3_tactic_skip, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_skip)>(Z3Loader::get().loadSymbol("Z3_tactic_skip"));
	return sym(_0);
}
ResultType<&Z3_tactic_fail> Z3_API Z3_tactic_fail(ArgType<&Z3_tactic_fail, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_fail)>(Z3Loader::get().loadSymbol("Z3_tactic_fail"));
	return sym(_0);
}
ResultType<&Z3_tactic_fail_if> Z3_API Z3_tactic_fail_if(ArgType<&Z3_tactic_fail_if, 0> _0, ArgType<&Z3_tactic_fail_if, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_fail_if)>(Z3Loader::get().loadSymbol("Z3_tactic_fail_if"));
	return sym(_0, _1);
}
ResultType<&Z3_tactic_fail_if_not_decided> Z3_API Z3_tactic_fail_if_not_decided(ArgType<&Z3_tactic_fail_if_not_decided, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_fail_if_not_decided)>(Z3Loader::get().loadSymbol("Z3_tactic_fail_if_not_decided"));
	return sym(_0);
}
ResultType<&Z3_tactic_using_params> Z3_API Z3_tactic_using_params(ArgType<&Z3_tactic_using_params, 0> _0, ArgType<&Z3_tactic_using_params, 1> _1, ArgType<&Z3_tactic_using_params, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_using_params)>(Z3Loader::get().loadSymbol("Z3_tactic_using_params"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_probe_const> Z3_API Z3_probe_const(ArgType<&Z3_probe_const, 0> _0, ArgType<&Z3_probe_const, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_const)>(Z3Loader::get().loadSymbol("Z3_probe_const"));
	return sym(_0, _1);
}
ResultType<&Z3_probe_lt> Z3_API Z3_probe_lt(ArgType<&Z3_probe_lt, 0> _0, ArgType<&Z3_probe_lt, 1> _1, ArgType<&Z3_probe_lt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_lt)>(Z3Loader::get().loadSymbol("Z3_probe_lt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_probe_gt> Z3_API Z3_probe_gt(ArgType<&Z3_probe_gt, 0> _0, ArgType<&Z3_probe_gt, 1> _1, ArgType<&Z3_probe_gt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_gt)>(Z3Loader::get().loadSymbol("Z3_probe_gt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_probe_le> Z3_API Z3_probe_le(ArgType<&Z3_probe_le, 0> _0, ArgType<&Z3_probe_le, 1> _1, ArgType<&Z3_probe_le, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_le)>(Z3Loader::get().loadSymbol("Z3_probe_le"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_probe_ge> Z3_API Z3_probe_ge(ArgType<&Z3_probe_ge, 0> _0, ArgType<&Z3_probe_ge, 1> _1, ArgType<&Z3_probe_ge, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_ge)>(Z3Loader::get().loadSymbol("Z3_probe_ge"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_probe_eq> Z3_API Z3_probe_eq(ArgType<&Z3_probe_eq, 0> _0, ArgType<&Z3_probe_eq, 1> _1, ArgType<&Z3_probe_eq, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_eq)>(Z3Loader::get().loadSymbol("Z3_probe_eq"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_probe_and> Z3_API Z3_probe_and(ArgType<&Z3_probe_and, 0> _0, ArgType<&Z3_probe_and, 1> _1, ArgType<&Z3_probe_and, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_and)>(Z3Loader::get().loadSymbol("Z3_probe_and"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_probe_or> Z3_API Z3_probe_or(ArgType<&Z3_probe_or, 0> _0, ArgType<&Z3_probe_or, 1> _1, ArgType<&Z3_probe_or, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_or)>(Z3Loader::get().loadSymbol("Z3_probe_or"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_probe_not> Z3_API Z3_probe_not(ArgType<&Z3_probe_not, 0> _0, ArgType<&Z3_probe_not, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_not)>(Z3Loader::get().loadSymbol("Z3_probe_not"));
	return sym(_0, _1);
}
ResultType<&Z3_get_num_tactics> Z3_API Z3_get_num_tactics(ArgType<&Z3_get_num_tactics, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_num_tactics)>(Z3Loader::get().loadSymbol("Z3_get_num_tactics"));
	return sym(_0);
}
ResultType<&Z3_get_tactic_name> Z3_API Z3_get_tactic_name(ArgType<&Z3_get_tactic_name, 0> _0, ArgType<&Z3_get_tactic_name, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_tactic_name)>(Z3Loader::get().loadSymbol("Z3_get_tactic_name"));
	return sym(_0, _1);
}
ResultType<&Z3_get_num_probes> Z3_API Z3_get_num_probes(ArgType<&Z3_get_num_probes, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_num_probes)>(Z3Loader::get().loadSymbol("Z3_get_num_probes"));
	return sym(_0);
}
ResultType<&Z3_get_probe_name> Z3_API Z3_get_probe_name(ArgType<&Z3_get_probe_name, 0> _0, ArgType<&Z3_get_probe_name, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_probe_name)>(Z3Loader::get().loadSymbol("Z3_get_probe_name"));
	return sym(_0, _1);
}
ResultType<&Z3_tactic_get_help> Z3_API Z3_tactic_get_help(ArgType<&Z3_tactic_get_help, 0> _0, ArgType<&Z3_tactic_get_help, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_get_help)>(Z3Loader::get().loadSymbol("Z3_tactic_get_help"));
	return sym(_0, _1);
}
ResultType<&Z3_tactic_get_param_descrs> Z3_API Z3_tactic_get_param_descrs(ArgType<&Z3_tactic_get_param_descrs, 0> _0, ArgType<&Z3_tactic_get_param_descrs, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_get_param_descrs)>(Z3Loader::get().loadSymbol("Z3_tactic_get_param_descrs"));
	return sym(_0, _1);
}
ResultType<&Z3_tactic_get_descr> Z3_API Z3_tactic_get_descr(ArgType<&Z3_tactic_get_descr, 0> _0, ArgType<&Z3_tactic_get_descr, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_get_descr)>(Z3Loader::get().loadSymbol("Z3_tactic_get_descr"));
	return sym(_0, _1);
}
ResultType<&Z3_probe_get_descr> Z3_API Z3_probe_get_descr(ArgType<&Z3_probe_get_descr, 0> _0, ArgType<&Z3_probe_get_descr, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_get_descr)>(Z3Loader::get().loadSymbol("Z3_probe_get_descr"));
	return sym(_0, _1);
}
ResultType<&Z3_probe_apply> Z3_API Z3_probe_apply(ArgType<&Z3_probe_apply, 0> _0, ArgType<&Z3_probe_apply, 1> _1, ArgType<&Z3_probe_apply, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_probe_apply)>(Z3Loader::get().loadSymbol("Z3_probe_apply"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_tactic_apply> Z3_API Z3_tactic_apply(ArgType<&Z3_tactic_apply, 0> _0, ArgType<&Z3_tactic_apply, 1> _1, ArgType<&Z3_tactic_apply, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_apply)>(Z3Loader::get().loadSymbol("Z3_tactic_apply"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_tactic_apply_ex> Z3_API Z3_tactic_apply_ex(ArgType<&Z3_tactic_apply_ex, 0> _0, ArgType<&Z3_tactic_apply_ex, 1> _1, ArgType<&Z3_tactic_apply_ex, 2> _2, ArgType<&Z3_tactic_apply_ex, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_tactic_apply_ex)>(Z3Loader::get().loadSymbol("Z3_tactic_apply_ex"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_apply_result_inc_ref> Z3_API Z3_apply_result_inc_ref(ArgType<&Z3_apply_result_inc_ref, 0> _0, ArgType<&Z3_apply_result_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_apply_result_inc_ref)>(Z3Loader::get().loadSymbol("Z3_apply_result_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_apply_result_dec_ref> Z3_API Z3_apply_result_dec_ref(ArgType<&Z3_apply_result_dec_ref, 0> _0, ArgType<&Z3_apply_result_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_apply_result_dec_ref)>(Z3Loader::get().loadSymbol("Z3_apply_result_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_apply_result_to_string> Z3_API Z3_apply_result_to_string(ArgType<&Z3_apply_result_to_string, 0> _0, ArgType<&Z3_apply_result_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_apply_result_to_string)>(Z3Loader::get().loadSymbol("Z3_apply_result_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_apply_result_get_num_subgoals> Z3_API Z3_apply_result_get_num_subgoals(ArgType<&Z3_apply_result_get_num_subgoals, 0> _0, ArgType<&Z3_apply_result_get_num_subgoals, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_apply_result_get_num_subgoals)>(Z3Loader::get().loadSymbol("Z3_apply_result_get_num_subgoals"));
	return sym(_0, _1);
}
ResultType<&Z3_apply_result_get_subgoal> Z3_API Z3_apply_result_get_subgoal(ArgType<&Z3_apply_result_get_subgoal, 0> _0, ArgType<&Z3_apply_result_get_subgoal, 1> _1, ArgType<&Z3_apply_result_get_subgoal, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_apply_result_get_subgoal)>(Z3Loader::get().loadSymbol("Z3_apply_result_get_subgoal"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_solver> Z3_API Z3_mk_solver(ArgType<&Z3_mk_solver, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_solver)>(Z3Loader::get().loadSymbol("Z3_mk_solver"));
	return sym(_0);
}
ResultType<&Z3_mk_simple_solver> Z3_API Z3_mk_simple_solver(ArgType<&Z3_mk_simple_solver, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_simple_solver)>(Z3Loader::get().loadSymbol("Z3_mk_simple_solver"));
	return sym(_0);
}
ResultType<&Z3_mk_solver_for_logic> Z3_API Z3_mk_solver_for_logic(ArgType<&Z3_mk_solver_for_logic, 0> _0, ArgType<&Z3_mk_solver_for_logic, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_solver_for_logic)>(Z3Loader::get().loadSymbol("Z3_mk_solver_for_logic"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_solver_from_tactic> Z3_API Z3_mk_solver_from_tactic(ArgType<&Z3_mk_solver_from_tactic, 0> _0, ArgType<&Z3_mk_solver_from_tactic, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_solver_from_tactic)>(Z3Loader::get().loadSymbol("Z3_mk_solver_from_tactic"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_translate> Z3_API Z3_solver_translate(ArgType<&Z3_solver_translate, 0> _0, ArgType<&Z3_solver_translate, 1> _1, ArgType<&Z3_solver_translate, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_translate)>(Z3Loader::get().loadSymbol("Z3_solver_translate"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_import_model_converter> Z3_API Z3_solver_import_model_converter(ArgType<&Z3_solver_import_model_converter, 0> _0, ArgType<&Z3_solver_import_model_converter, 1> _1, ArgType<&Z3_solver_import_model_converter, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_import_model_converter)>(Z3Loader::get().loadSymbol("Z3_solver_import_model_converter"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_get_help> Z3_API Z3_solver_get_help(ArgType<&Z3_solver_get_help, 0> _0, ArgType<&Z3_solver_get_help, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_help)>(Z3Loader::get().loadSymbol("Z3_solver_get_help"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_param_descrs> Z3_API Z3_solver_get_param_descrs(ArgType<&Z3_solver_get_param_descrs, 0> _0, ArgType<&Z3_solver_get_param_descrs, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_param_descrs)>(Z3Loader::get().loadSymbol("Z3_solver_get_param_descrs"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_set_params> Z3_API Z3_solver_set_params(ArgType<&Z3_solver_set_params, 0> _0, ArgType<&Z3_solver_set_params, 1> _1, ArgType<&Z3_solver_set_params, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_set_params)>(Z3Loader::get().loadSymbol("Z3_solver_set_params"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_inc_ref> Z3_API Z3_solver_inc_ref(ArgType<&Z3_solver_inc_ref, 0> _0, ArgType<&Z3_solver_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_inc_ref)>(Z3Loader::get().loadSymbol("Z3_solver_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_dec_ref> Z3_API Z3_solver_dec_ref(ArgType<&Z3_solver_dec_ref, 0> _0, ArgType<&Z3_solver_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_dec_ref)>(Z3Loader::get().loadSymbol("Z3_solver_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_interrupt> Z3_API Z3_solver_interrupt(ArgType<&Z3_solver_interrupt, 0> _0, ArgType<&Z3_solver_interrupt, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_interrupt)>(Z3Loader::get().loadSymbol("Z3_solver_interrupt"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_push> Z3_API Z3_solver_push(ArgType<&Z3_solver_push, 0> _0, ArgType<&Z3_solver_push, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_push)>(Z3Loader::get().loadSymbol("Z3_solver_push"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_pop> Z3_API Z3_solver_pop(ArgType<&Z3_solver_pop, 0> _0, ArgType<&Z3_solver_pop, 1> _1, ArgType<&Z3_solver_pop, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_pop)>(Z3Loader::get().loadSymbol("Z3_solver_pop"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_reset> Z3_API Z3_solver_reset(ArgType<&Z3_solver_reset, 0> _0, ArgType<&Z3_solver_reset, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_reset)>(Z3Loader::get().loadSymbol("Z3_solver_reset"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_num_scopes> Z3_API Z3_solver_get_num_scopes(ArgType<&Z3_solver_get_num_scopes, 0> _0, ArgType<&Z3_solver_get_num_scopes, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_num_scopes)>(Z3Loader::get().loadSymbol("Z3_solver_get_num_scopes"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_assert> Z3_API Z3_solver_assert(ArgType<&Z3_solver_assert, 0> _0, ArgType<&Z3_solver_assert, 1> _1, ArgType<&Z3_solver_assert, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_assert)>(Z3Loader::get().loadSymbol("Z3_solver_assert"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_assert_and_track> Z3_API Z3_solver_assert_and_track(ArgType<&Z3_solver_assert_and_track, 0> _0, ArgType<&Z3_solver_assert_and_track, 1> _1, ArgType<&Z3_solver_assert_and_track, 2> _2, ArgType<&Z3_solver_assert_and_track, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_assert_and_track)>(Z3Loader::get().loadSymbol("Z3_solver_assert_and_track"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_solver_from_file> Z3_API Z3_solver_from_file(ArgType<&Z3_solver_from_file, 0> _0, ArgType<&Z3_solver_from_file, 1> _1, ArgType<&Z3_solver_from_file, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_from_file)>(Z3Loader::get().loadSymbol("Z3_solver_from_file"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_from_string> Z3_API Z3_solver_from_string(ArgType<&Z3_solver_from_string, 0> _0, ArgType<&Z3_solver_from_string, 1> _1, ArgType<&Z3_solver_from_string, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_from_string)>(Z3Loader::get().loadSymbol("Z3_solver_from_string"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_get_assertions> Z3_API Z3_solver_get_assertions(ArgType<&Z3_solver_get_assertions, 0> _0, ArgType<&Z3_solver_get_assertions, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_assertions)>(Z3Loader::get().loadSymbol("Z3_solver_get_assertions"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_units> Z3_API Z3_solver_get_units(ArgType<&Z3_solver_get_units, 0> _0, ArgType<&Z3_solver_get_units, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_units)>(Z3Loader::get().loadSymbol("Z3_solver_get_units"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_trail> Z3_API Z3_solver_get_trail(ArgType<&Z3_solver_get_trail, 0> _0, ArgType<&Z3_solver_get_trail, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_trail)>(Z3Loader::get().loadSymbol("Z3_solver_get_trail"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_non_units> Z3_API Z3_solver_get_non_units(ArgType<&Z3_solver_get_non_units, 0> _0, ArgType<&Z3_solver_get_non_units, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_non_units)>(Z3Loader::get().loadSymbol("Z3_solver_get_non_units"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_levels> Z3_API Z3_solver_get_levels(ArgType<&Z3_solver_get_levels, 0> _0, ArgType<&Z3_solver_get_levels, 1> _1, ArgType<&Z3_solver_get_levels, 2> _2, ArgType<&Z3_solver_get_levels, 3> _3, ArgType<&Z3_solver_get_levels, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_levels)>(Z3Loader::get().loadSymbol("Z3_solver_get_levels"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_solver_get_implied_value> Z3_API Z3_solver_get_implied_value(ArgType<&Z3_solver_get_implied_value, 0> _0, ArgType<&Z3_solver_get_implied_value, 1> _1, ArgType<&Z3_solver_get_implied_value, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_implied_value)>(Z3Loader::get().loadSymbol("Z3_solver_get_implied_value"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_get_implied_lower> Z3_API Z3_solver_get_implied_lower(ArgType<&Z3_solver_get_implied_lower, 0> _0, ArgType<&Z3_solver_get_implied_lower, 1> _1, ArgType<&Z3_solver_get_implied_lower, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_implied_lower)>(Z3Loader::get().loadSymbol("Z3_solver_get_implied_lower"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_get_implied_upper> Z3_API Z3_solver_get_implied_upper(ArgType<&Z3_solver_get_implied_upper, 0> _0, ArgType<&Z3_solver_get_implied_upper, 1> _1, ArgType<&Z3_solver_get_implied_upper, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_implied_upper)>(Z3Loader::get().loadSymbol("Z3_solver_get_implied_upper"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_propagate_register> Z3_API Z3_solver_propagate_register(ArgType<&Z3_solver_propagate_register, 0> _0, ArgType<&Z3_solver_propagate_register, 1> _1, ArgType<&Z3_solver_propagate_register, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_propagate_register)>(Z3Loader::get().loadSymbol("Z3_solver_propagate_register"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_solver_propagate_consequence> Z3_API Z3_solver_propagate_consequence(ArgType<&Z3_solver_propagate_consequence, 0> _0, ArgType<&Z3_solver_propagate_consequence, 1> _1, ArgType<&Z3_solver_propagate_consequence, 2> _2, ArgType<&Z3_solver_propagate_consequence, 3> _3, ArgType<&Z3_solver_propagate_consequence, 4> _4, ArgType<&Z3_solver_propagate_consequence, 5> _5, ArgType<&Z3_solver_propagate_consequence, 6> _6, ArgType<&Z3_solver_propagate_consequence, 7> _7)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_propagate_consequence)>(Z3Loader::get().loadSymbol("Z3_solver_propagate_consequence"));
	return sym(_0, _1, _2, _3, _4, _5, _6, _7);
}
ResultType<&Z3_solver_check> Z3_API Z3_solver_check(ArgType<&Z3_solver_check, 0> _0, ArgType<&Z3_solver_check, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_check)>(Z3Loader::get().loadSymbol("Z3_solver_check"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_check_assumptions> Z3_API Z3_solver_check_assumptions(ArgType<&Z3_solver_check_assumptions, 0> _0, ArgType<&Z3_solver_check_assumptions, 1> _1, ArgType<&Z3_solver_check_assumptions, 2> _2, ArgType<&Z3_solver_check_assumptions, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_check_assumptions)>(Z3Loader::get().loadSymbol("Z3_solver_check_assumptions"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_get_implied_equalities> Z3_API Z3_get_implied_equalities(ArgType<&Z3_get_implied_equalities, 0> _0, ArgType<&Z3_get_implied_equalities, 1> _1, ArgType<&Z3_get_implied_equalities, 2> _2, ArgType<&Z3_get_implied_equalities, 3> _3, ArgType<&Z3_get_implied_equalities, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_implied_equalities)>(Z3Loader::get().loadSymbol("Z3_get_implied_equalities"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_solver_get_consequences> Z3_API Z3_solver_get_consequences(ArgType<&Z3_solver_get_consequences, 0> _0, ArgType<&Z3_solver_get_consequences, 1> _1, ArgType<&Z3_solver_get_consequences, 2> _2, ArgType<&Z3_solver_get_consequences, 3> _3, ArgType<&Z3_solver_get_consequences, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_consequences)>(Z3Loader::get().loadSymbol("Z3_solver_get_consequences"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_solver_cube> Z3_API Z3_solver_cube(ArgType<&Z3_solver_cube, 0> _0, ArgType<&Z3_solver_cube, 1> _1, ArgType<&Z3_solver_cube, 2> _2, ArgType<&Z3_solver_cube, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_cube)>(Z3Loader::get().loadSymbol("Z3_solver_cube"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_solver_get_model> Z3_API Z3_solver_get_model(ArgType<&Z3_solver_get_model, 0> _0, ArgType<&Z3_solver_get_model, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_model)>(Z3Loader::get().loadSymbol("Z3_solver_get_model"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_proof> Z3_API Z3_solver_get_proof(ArgType<&Z3_solver_get_proof, 0> _0, ArgType<&Z3_solver_get_proof, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_proof)>(Z3Loader::get().loadSymbol("Z3_solver_get_proof"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_unsat_core> Z3_API Z3_solver_get_unsat_core(ArgType<&Z3_solver_get_unsat_core, 0> _0, ArgType<&Z3_solver_get_unsat_core, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_unsat_core)>(Z3Loader::get().loadSymbol("Z3_solver_get_unsat_core"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_reason_unknown> Z3_API Z3_solver_get_reason_unknown(ArgType<&Z3_solver_get_reason_unknown, 0> _0, ArgType<&Z3_solver_get_reason_unknown, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_reason_unknown)>(Z3Loader::get().loadSymbol("Z3_solver_get_reason_unknown"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_get_statistics> Z3_API Z3_solver_get_statistics(ArgType<&Z3_solver_get_statistics, 0> _0, ArgType<&Z3_solver_get_statistics, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_get_statistics)>(Z3Loader::get().loadSymbol("Z3_solver_get_statistics"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_to_string> Z3_API Z3_solver_to_string(ArgType<&Z3_solver_to_string, 0> _0, ArgType<&Z3_solver_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_to_string)>(Z3Loader::get().loadSymbol("Z3_solver_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_solver_to_dimacs_string> Z3_API Z3_solver_to_dimacs_string(ArgType<&Z3_solver_to_dimacs_string, 0> _0, ArgType<&Z3_solver_to_dimacs_string, 1> _1, ArgType<&Z3_solver_to_dimacs_string, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_solver_to_dimacs_string)>(Z3Loader::get().loadSymbol("Z3_solver_to_dimacs_string"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_stats_to_string> Z3_API Z3_stats_to_string(ArgType<&Z3_stats_to_string, 0> _0, ArgType<&Z3_stats_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_stats_to_string)>(Z3Loader::get().loadSymbol("Z3_stats_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_stats_inc_ref> Z3_API Z3_stats_inc_ref(ArgType<&Z3_stats_inc_ref, 0> _0, ArgType<&Z3_stats_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_stats_inc_ref)>(Z3Loader::get().loadSymbol("Z3_stats_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_stats_dec_ref> Z3_API Z3_stats_dec_ref(ArgType<&Z3_stats_dec_ref, 0> _0, ArgType<&Z3_stats_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_stats_dec_ref)>(Z3Loader::get().loadSymbol("Z3_stats_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_stats_size> Z3_API Z3_stats_size(ArgType<&Z3_stats_size, 0> _0, ArgType<&Z3_stats_size, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_stats_size)>(Z3Loader::get().loadSymbol("Z3_stats_size"));
	return sym(_0, _1);
}
ResultType<&Z3_stats_get_key> Z3_API Z3_stats_get_key(ArgType<&Z3_stats_get_key, 0> _0, ArgType<&Z3_stats_get_key, 1> _1, ArgType<&Z3_stats_get_key, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_stats_get_key)>(Z3Loader::get().loadSymbol("Z3_stats_get_key"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_stats_is_uint> Z3_API Z3_stats_is_uint(ArgType<&Z3_stats_is_uint, 0> _0, ArgType<&Z3_stats_is_uint, 1> _1, ArgType<&Z3_stats_is_uint, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_stats_is_uint)>(Z3Loader::get().loadSymbol("Z3_stats_is_uint"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_stats_is_double> Z3_API Z3_stats_is_double(ArgType<&Z3_stats_is_double, 0> _0, ArgType<&Z3_stats_is_double, 1> _1, ArgType<&Z3_stats_is_double, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_stats_is_double)>(Z3Loader::get().loadSymbol("Z3_stats_is_double"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_stats_get_uint_value> Z3_API Z3_stats_get_uint_value(ArgType<&Z3_stats_get_uint_value, 0> _0, ArgType<&Z3_stats_get_uint_value, 1> _1, ArgType<&Z3_stats_get_uint_value, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_stats_get_uint_value)>(Z3Loader::get().loadSymbol("Z3_stats_get_uint_value"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_stats_get_double_value> Z3_API Z3_stats_get_double_value(ArgType<&Z3_stats_get_double_value, 0> _0, ArgType<&Z3_stats_get_double_value, 1> _1, ArgType<&Z3_stats_get_double_value, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_stats_get_double_value)>(Z3Loader::get().loadSymbol("Z3_stats_get_double_value"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_get_estimated_alloc_size> Z3_API Z3_get_estimated_alloc_size()
{
	static auto sym = reinterpret_cast<decltype(&Z3_get_estimated_alloc_size)>(Z3Loader::get().loadSymbol("Z3_get_estimated_alloc_size"));
	return sym();
}
ResultType<&Z3_mk_ast_vector> Z3_API Z3_mk_ast_vector(ArgType<&Z3_mk_ast_vector, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_ast_vector)>(Z3Loader::get().loadSymbol("Z3_mk_ast_vector"));
	return sym(_0);
}
ResultType<&Z3_ast_vector_inc_ref> Z3_API Z3_ast_vector_inc_ref(ArgType<&Z3_ast_vector_inc_ref, 0> _0, ArgType<&Z3_ast_vector_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_vector_inc_ref)>(Z3Loader::get().loadSymbol("Z3_ast_vector_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_ast_vector_dec_ref> Z3_API Z3_ast_vector_dec_ref(ArgType<&Z3_ast_vector_dec_ref, 0> _0, ArgType<&Z3_ast_vector_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_vector_dec_ref)>(Z3Loader::get().loadSymbol("Z3_ast_vector_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_ast_vector_size> Z3_API Z3_ast_vector_size(ArgType<&Z3_ast_vector_size, 0> _0, ArgType<&Z3_ast_vector_size, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_vector_size)>(Z3Loader::get().loadSymbol("Z3_ast_vector_size"));
	return sym(_0, _1);
}
ResultType<&Z3_ast_vector_get> Z3_API Z3_ast_vector_get(ArgType<&Z3_ast_vector_get, 0> _0, ArgType<&Z3_ast_vector_get, 1> _1, ArgType<&Z3_ast_vector_get, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_vector_get)>(Z3Loader::get().loadSymbol("Z3_ast_vector_get"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_ast_vector_set> Z3_API Z3_ast_vector_set(ArgType<&Z3_ast_vector_set, 0> _0, ArgType<&Z3_ast_vector_set, 1> _1, ArgType<&Z3_ast_vector_set, 2> _2, ArgType<&Z3_ast_vector_set, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_vector_set)>(Z3Loader::get().loadSymbol("Z3_ast_vector_set"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_ast_vector_resize> Z3_API Z3_ast_vector_resize(ArgType<&Z3_ast_vector_resize, 0> _0, ArgType<&Z3_ast_vector_resize, 1> _1, ArgType<&Z3_ast_vector_resize, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_vector_resize)>(Z3Loader::get().loadSymbol("Z3_ast_vector_resize"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_ast_vector_push> Z3_API Z3_ast_vector_push(ArgType<&Z3_ast_vector_push, 0> _0, ArgType<&Z3_ast_vector_push, 1> _1, ArgType<&Z3_ast_vector_push, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_vector_push)>(Z3Loader::get().loadSymbol("Z3_ast_vector_push"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_ast_vector_translate> Z3_API Z3_ast_vector_translate(ArgType<&Z3_ast_vector_translate, 0> _0, ArgType<&Z3_ast_vector_translate, 1> _1, ArgType<&Z3_ast_vector_translate, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_vector_translate)>(Z3Loader::get().loadSymbol("Z3_ast_vector_translate"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_ast_vector_to_string> Z3_API Z3_ast_vector_to_string(ArgType<&Z3_ast_vector_to_string, 0> _0, ArgType<&Z3_ast_vector_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_vector_to_string)>(Z3Loader::get().loadSymbol("Z3_ast_vector_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_ast_map> Z3_API Z3_mk_ast_map(ArgType<&Z3_mk_ast_map, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_ast_map)>(Z3Loader::get().loadSymbol("Z3_mk_ast_map"));
	return sym(_0);
}
ResultType<&Z3_ast_map_inc_ref> Z3_API Z3_ast_map_inc_ref(ArgType<&Z3_ast_map_inc_ref, 0> _0, ArgType<&Z3_ast_map_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_inc_ref)>(Z3Loader::get().loadSymbol("Z3_ast_map_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_ast_map_dec_ref> Z3_API Z3_ast_map_dec_ref(ArgType<&Z3_ast_map_dec_ref, 0> _0, ArgType<&Z3_ast_map_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_dec_ref)>(Z3Loader::get().loadSymbol("Z3_ast_map_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_ast_map_contains> Z3_API Z3_ast_map_contains(ArgType<&Z3_ast_map_contains, 0> _0, ArgType<&Z3_ast_map_contains, 1> _1, ArgType<&Z3_ast_map_contains, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_contains)>(Z3Loader::get().loadSymbol("Z3_ast_map_contains"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_ast_map_find> Z3_API Z3_ast_map_find(ArgType<&Z3_ast_map_find, 0> _0, ArgType<&Z3_ast_map_find, 1> _1, ArgType<&Z3_ast_map_find, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_find)>(Z3Loader::get().loadSymbol("Z3_ast_map_find"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_ast_map_insert> Z3_API Z3_ast_map_insert(ArgType<&Z3_ast_map_insert, 0> _0, ArgType<&Z3_ast_map_insert, 1> _1, ArgType<&Z3_ast_map_insert, 2> _2, ArgType<&Z3_ast_map_insert, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_insert)>(Z3Loader::get().loadSymbol("Z3_ast_map_insert"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_ast_map_erase> Z3_API Z3_ast_map_erase(ArgType<&Z3_ast_map_erase, 0> _0, ArgType<&Z3_ast_map_erase, 1> _1, ArgType<&Z3_ast_map_erase, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_erase)>(Z3Loader::get().loadSymbol("Z3_ast_map_erase"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_ast_map_reset> Z3_API Z3_ast_map_reset(ArgType<&Z3_ast_map_reset, 0> _0, ArgType<&Z3_ast_map_reset, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_reset)>(Z3Loader::get().loadSymbol("Z3_ast_map_reset"));
	return sym(_0, _1);
}
ResultType<&Z3_ast_map_size> Z3_API Z3_ast_map_size(ArgType<&Z3_ast_map_size, 0> _0, ArgType<&Z3_ast_map_size, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_size)>(Z3Loader::get().loadSymbol("Z3_ast_map_size"));
	return sym(_0, _1);
}
ResultType<&Z3_ast_map_keys> Z3_API Z3_ast_map_keys(ArgType<&Z3_ast_map_keys, 0> _0, ArgType<&Z3_ast_map_keys, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_keys)>(Z3Loader::get().loadSymbol("Z3_ast_map_keys"));
	return sym(_0, _1);
}
ResultType<&Z3_ast_map_to_string> Z3_API Z3_ast_map_to_string(ArgType<&Z3_ast_map_to_string, 0> _0, ArgType<&Z3_ast_map_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_ast_map_to_string)>(Z3Loader::get().loadSymbol("Z3_ast_map_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fixedpoint> Z3_API Z3_mk_fixedpoint(ArgType<&Z3_mk_fixedpoint, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fixedpoint)>(Z3Loader::get().loadSymbol("Z3_mk_fixedpoint"));
	return sym(_0);
}
ResultType<&Z3_fixedpoint_inc_ref> Z3_API Z3_fixedpoint_inc_ref(ArgType<&Z3_fixedpoint_inc_ref, 0> _0, ArgType<&Z3_fixedpoint_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_inc_ref)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_dec_ref> Z3_API Z3_fixedpoint_dec_ref(ArgType<&Z3_fixedpoint_dec_ref, 0> _0, ArgType<&Z3_fixedpoint_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_dec_ref)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_add_rule> Z3_API Z3_fixedpoint_add_rule(ArgType<&Z3_fixedpoint_add_rule, 0> _0, ArgType<&Z3_fixedpoint_add_rule, 1> _1, ArgType<&Z3_fixedpoint_add_rule, 2> _2, ArgType<&Z3_fixedpoint_add_rule, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_add_rule)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_add_rule"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_fixedpoint_add_fact> Z3_API Z3_fixedpoint_add_fact(ArgType<&Z3_fixedpoint_add_fact, 0> _0, ArgType<&Z3_fixedpoint_add_fact, 1> _1, ArgType<&Z3_fixedpoint_add_fact, 2> _2, ArgType<&Z3_fixedpoint_add_fact, 3> _3, ArgType<&Z3_fixedpoint_add_fact, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_add_fact)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_add_fact"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_fixedpoint_assert> Z3_API Z3_fixedpoint_assert(ArgType<&Z3_fixedpoint_assert, 0> _0, ArgType<&Z3_fixedpoint_assert, 1> _1, ArgType<&Z3_fixedpoint_assert, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_assert)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_assert"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_fixedpoint_query> Z3_API Z3_fixedpoint_query(ArgType<&Z3_fixedpoint_query, 0> _0, ArgType<&Z3_fixedpoint_query, 1> _1, ArgType<&Z3_fixedpoint_query, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_query)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_query"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_fixedpoint_query_relations> Z3_API Z3_fixedpoint_query_relations(ArgType<&Z3_fixedpoint_query_relations, 0> _0, ArgType<&Z3_fixedpoint_query_relations, 1> _1, ArgType<&Z3_fixedpoint_query_relations, 2> _2, ArgType<&Z3_fixedpoint_query_relations, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_query_relations)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_query_relations"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_fixedpoint_get_answer> Z3_API Z3_fixedpoint_get_answer(ArgType<&Z3_fixedpoint_get_answer, 0> _0, ArgType<&Z3_fixedpoint_get_answer, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_answer)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_answer"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_get_reason_unknown> Z3_API Z3_fixedpoint_get_reason_unknown(ArgType<&Z3_fixedpoint_get_reason_unknown, 0> _0, ArgType<&Z3_fixedpoint_get_reason_unknown, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_reason_unknown)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_reason_unknown"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_update_rule> Z3_API Z3_fixedpoint_update_rule(ArgType<&Z3_fixedpoint_update_rule, 0> _0, ArgType<&Z3_fixedpoint_update_rule, 1> _1, ArgType<&Z3_fixedpoint_update_rule, 2> _2, ArgType<&Z3_fixedpoint_update_rule, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_update_rule)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_update_rule"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_fixedpoint_get_num_levels> Z3_API Z3_fixedpoint_get_num_levels(ArgType<&Z3_fixedpoint_get_num_levels, 0> _0, ArgType<&Z3_fixedpoint_get_num_levels, 1> _1, ArgType<&Z3_fixedpoint_get_num_levels, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_num_levels)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_num_levels"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_fixedpoint_get_cover_delta> Z3_API Z3_fixedpoint_get_cover_delta(ArgType<&Z3_fixedpoint_get_cover_delta, 0> _0, ArgType<&Z3_fixedpoint_get_cover_delta, 1> _1, ArgType<&Z3_fixedpoint_get_cover_delta, 2> _2, ArgType<&Z3_fixedpoint_get_cover_delta, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_cover_delta)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_cover_delta"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_fixedpoint_add_cover> Z3_API Z3_fixedpoint_add_cover(ArgType<&Z3_fixedpoint_add_cover, 0> _0, ArgType<&Z3_fixedpoint_add_cover, 1> _1, ArgType<&Z3_fixedpoint_add_cover, 2> _2, ArgType<&Z3_fixedpoint_add_cover, 3> _3, ArgType<&Z3_fixedpoint_add_cover, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_add_cover)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_add_cover"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_fixedpoint_get_statistics> Z3_API Z3_fixedpoint_get_statistics(ArgType<&Z3_fixedpoint_get_statistics, 0> _0, ArgType<&Z3_fixedpoint_get_statistics, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_statistics)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_statistics"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_register_relation> Z3_API Z3_fixedpoint_register_relation(ArgType<&Z3_fixedpoint_register_relation, 0> _0, ArgType<&Z3_fixedpoint_register_relation, 1> _1, ArgType<&Z3_fixedpoint_register_relation, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_register_relation)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_register_relation"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_fixedpoint_set_predicate_representation> Z3_API Z3_fixedpoint_set_predicate_representation(ArgType<&Z3_fixedpoint_set_predicate_representation, 0> _0, ArgType<&Z3_fixedpoint_set_predicate_representation, 1> _1, ArgType<&Z3_fixedpoint_set_predicate_representation, 2> _2, ArgType<&Z3_fixedpoint_set_predicate_representation, 3> _3, ArgType<&Z3_fixedpoint_set_predicate_representation, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_set_predicate_representation)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_set_predicate_representation"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_fixedpoint_get_rules> Z3_API Z3_fixedpoint_get_rules(ArgType<&Z3_fixedpoint_get_rules, 0> _0, ArgType<&Z3_fixedpoint_get_rules, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_rules)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_rules"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_get_assertions> Z3_API Z3_fixedpoint_get_assertions(ArgType<&Z3_fixedpoint_get_assertions, 0> _0, ArgType<&Z3_fixedpoint_get_assertions, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_assertions)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_assertions"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_set_params> Z3_API Z3_fixedpoint_set_params(ArgType<&Z3_fixedpoint_set_params, 0> _0, ArgType<&Z3_fixedpoint_set_params, 1> _1, ArgType<&Z3_fixedpoint_set_params, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_set_params)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_set_params"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_fixedpoint_get_help> Z3_API Z3_fixedpoint_get_help(ArgType<&Z3_fixedpoint_get_help, 0> _0, ArgType<&Z3_fixedpoint_get_help, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_help)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_help"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_get_param_descrs> Z3_API Z3_fixedpoint_get_param_descrs(ArgType<&Z3_fixedpoint_get_param_descrs, 0> _0, ArgType<&Z3_fixedpoint_get_param_descrs, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_param_descrs)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_param_descrs"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_to_string> Z3_API Z3_fixedpoint_to_string(ArgType<&Z3_fixedpoint_to_string, 0> _0, ArgType<&Z3_fixedpoint_to_string, 1> _1, ArgType<&Z3_fixedpoint_to_string, 2> _2, ArgType<&Z3_fixedpoint_to_string, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_to_string)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_to_string"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_fixedpoint_from_string> Z3_API Z3_fixedpoint_from_string(ArgType<&Z3_fixedpoint_from_string, 0> _0, ArgType<&Z3_fixedpoint_from_string, 1> _1, ArgType<&Z3_fixedpoint_from_string, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_from_string)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_from_string"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_fixedpoint_from_file> Z3_API Z3_fixedpoint_from_file(ArgType<&Z3_fixedpoint_from_file, 0> _0, ArgType<&Z3_fixedpoint_from_file, 1> _1, ArgType<&Z3_fixedpoint_from_file, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_from_file)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_from_file"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_rounding_mode_sort> Z3_API Z3_mk_fpa_rounding_mode_sort(ArgType<&Z3_mk_fpa_rounding_mode_sort, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_rounding_mode_sort)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_rounding_mode_sort"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_round_nearest_ties_to_even> Z3_API Z3_mk_fpa_round_nearest_ties_to_even(ArgType<&Z3_mk_fpa_round_nearest_ties_to_even, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_round_nearest_ties_to_even)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_round_nearest_ties_to_even"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_rne> Z3_API Z3_mk_fpa_rne(ArgType<&Z3_mk_fpa_rne, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_rne)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_rne"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_round_nearest_ties_to_away> Z3_API Z3_mk_fpa_round_nearest_ties_to_away(ArgType<&Z3_mk_fpa_round_nearest_ties_to_away, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_round_nearest_ties_to_away)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_round_nearest_ties_to_away"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_rna> Z3_API Z3_mk_fpa_rna(ArgType<&Z3_mk_fpa_rna, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_rna)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_rna"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_round_toward_positive> Z3_API Z3_mk_fpa_round_toward_positive(ArgType<&Z3_mk_fpa_round_toward_positive, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_round_toward_positive)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_round_toward_positive"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_rtp> Z3_API Z3_mk_fpa_rtp(ArgType<&Z3_mk_fpa_rtp, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_rtp)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_rtp"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_round_toward_negative> Z3_API Z3_mk_fpa_round_toward_negative(ArgType<&Z3_mk_fpa_round_toward_negative, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_round_toward_negative)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_round_toward_negative"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_rtn> Z3_API Z3_mk_fpa_rtn(ArgType<&Z3_mk_fpa_rtn, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_rtn)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_rtn"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_round_toward_zero> Z3_API Z3_mk_fpa_round_toward_zero(ArgType<&Z3_mk_fpa_round_toward_zero, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_round_toward_zero)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_round_toward_zero"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_rtz> Z3_API Z3_mk_fpa_rtz(ArgType<&Z3_mk_fpa_rtz, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_rtz)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_rtz"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_sort> Z3_API Z3_mk_fpa_sort(ArgType<&Z3_mk_fpa_sort, 0> _0, ArgType<&Z3_mk_fpa_sort, 1> _1, ArgType<&Z3_mk_fpa_sort, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sort)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sort"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_sort_half> Z3_API Z3_mk_fpa_sort_half(ArgType<&Z3_mk_fpa_sort_half, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sort_half)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sort_half"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_sort_16> Z3_API Z3_mk_fpa_sort_16(ArgType<&Z3_mk_fpa_sort_16, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sort_16)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sort_16"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_sort_single> Z3_API Z3_mk_fpa_sort_single(ArgType<&Z3_mk_fpa_sort_single, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sort_single)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sort_single"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_sort_32> Z3_API Z3_mk_fpa_sort_32(ArgType<&Z3_mk_fpa_sort_32, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sort_32)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sort_32"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_sort_double> Z3_API Z3_mk_fpa_sort_double(ArgType<&Z3_mk_fpa_sort_double, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sort_double)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sort_double"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_sort_64> Z3_API Z3_mk_fpa_sort_64(ArgType<&Z3_mk_fpa_sort_64, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sort_64)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sort_64"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_sort_quadruple> Z3_API Z3_mk_fpa_sort_quadruple(ArgType<&Z3_mk_fpa_sort_quadruple, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sort_quadruple)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sort_quadruple"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_sort_128> Z3_API Z3_mk_fpa_sort_128(ArgType<&Z3_mk_fpa_sort_128, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sort_128)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sort_128"));
	return sym(_0);
}
ResultType<&Z3_mk_fpa_nan> Z3_API Z3_mk_fpa_nan(ArgType<&Z3_mk_fpa_nan, 0> _0, ArgType<&Z3_mk_fpa_nan, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_nan)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_nan"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_inf> Z3_API Z3_mk_fpa_inf(ArgType<&Z3_mk_fpa_inf, 0> _0, ArgType<&Z3_mk_fpa_inf, 1> _1, ArgType<&Z3_mk_fpa_inf, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_inf)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_inf"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_zero> Z3_API Z3_mk_fpa_zero(ArgType<&Z3_mk_fpa_zero, 0> _0, ArgType<&Z3_mk_fpa_zero, 1> _1, ArgType<&Z3_mk_fpa_zero, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_zero)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_zero"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_fp> Z3_API Z3_mk_fpa_fp(ArgType<&Z3_mk_fpa_fp, 0> _0, ArgType<&Z3_mk_fpa_fp, 1> _1, ArgType<&Z3_mk_fpa_fp, 2> _2, ArgType<&Z3_mk_fpa_fp, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_fp)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_fp"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_numeral_float> Z3_API Z3_mk_fpa_numeral_float(ArgType<&Z3_mk_fpa_numeral_float, 0> _0, ArgType<&Z3_mk_fpa_numeral_float, 1> _1, ArgType<&Z3_mk_fpa_numeral_float, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_numeral_float)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_numeral_float"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_numeral_double> Z3_API Z3_mk_fpa_numeral_double(ArgType<&Z3_mk_fpa_numeral_double, 0> _0, ArgType<&Z3_mk_fpa_numeral_double, 1> _1, ArgType<&Z3_mk_fpa_numeral_double, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_numeral_double)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_numeral_double"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_numeral_int> Z3_API Z3_mk_fpa_numeral_int(ArgType<&Z3_mk_fpa_numeral_int, 0> _0, ArgType<&Z3_mk_fpa_numeral_int, 1> _1, ArgType<&Z3_mk_fpa_numeral_int, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_numeral_int)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_numeral_int"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_numeral_int_uint> Z3_API Z3_mk_fpa_numeral_int_uint(ArgType<&Z3_mk_fpa_numeral_int_uint, 0> _0, ArgType<&Z3_mk_fpa_numeral_int_uint, 1> _1, ArgType<&Z3_mk_fpa_numeral_int_uint, 2> _2, ArgType<&Z3_mk_fpa_numeral_int_uint, 3> _3, ArgType<&Z3_mk_fpa_numeral_int_uint, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_numeral_int_uint)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_numeral_int_uint"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_fpa_numeral_int64_uint64> Z3_API Z3_mk_fpa_numeral_int64_uint64(ArgType<&Z3_mk_fpa_numeral_int64_uint64, 0> _0, ArgType<&Z3_mk_fpa_numeral_int64_uint64, 1> _1, ArgType<&Z3_mk_fpa_numeral_int64_uint64, 2> _2, ArgType<&Z3_mk_fpa_numeral_int64_uint64, 3> _3, ArgType<&Z3_mk_fpa_numeral_int64_uint64, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_numeral_int64_uint64)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_numeral_int64_uint64"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_fpa_abs> Z3_API Z3_mk_fpa_abs(ArgType<&Z3_mk_fpa_abs, 0> _0, ArgType<&Z3_mk_fpa_abs, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_abs)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_abs"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_neg> Z3_API Z3_mk_fpa_neg(ArgType<&Z3_mk_fpa_neg, 0> _0, ArgType<&Z3_mk_fpa_neg, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_neg)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_neg"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_add> Z3_API Z3_mk_fpa_add(ArgType<&Z3_mk_fpa_add, 0> _0, ArgType<&Z3_mk_fpa_add, 1> _1, ArgType<&Z3_mk_fpa_add, 2> _2, ArgType<&Z3_mk_fpa_add, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_add)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_add"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_sub> Z3_API Z3_mk_fpa_sub(ArgType<&Z3_mk_fpa_sub, 0> _0, ArgType<&Z3_mk_fpa_sub, 1> _1, ArgType<&Z3_mk_fpa_sub, 2> _2, ArgType<&Z3_mk_fpa_sub, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sub)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sub"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_mul> Z3_API Z3_mk_fpa_mul(ArgType<&Z3_mk_fpa_mul, 0> _0, ArgType<&Z3_mk_fpa_mul, 1> _1, ArgType<&Z3_mk_fpa_mul, 2> _2, ArgType<&Z3_mk_fpa_mul, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_mul)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_mul"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_div> Z3_API Z3_mk_fpa_div(ArgType<&Z3_mk_fpa_div, 0> _0, ArgType<&Z3_mk_fpa_div, 1> _1, ArgType<&Z3_mk_fpa_div, 2> _2, ArgType<&Z3_mk_fpa_div, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_div)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_div"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_fma> Z3_API Z3_mk_fpa_fma(ArgType<&Z3_mk_fpa_fma, 0> _0, ArgType<&Z3_mk_fpa_fma, 1> _1, ArgType<&Z3_mk_fpa_fma, 2> _2, ArgType<&Z3_mk_fpa_fma, 3> _3, ArgType<&Z3_mk_fpa_fma, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_fma)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_fma"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_fpa_sqrt> Z3_API Z3_mk_fpa_sqrt(ArgType<&Z3_mk_fpa_sqrt, 0> _0, ArgType<&Z3_mk_fpa_sqrt, 1> _1, ArgType<&Z3_mk_fpa_sqrt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_sqrt)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_sqrt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_rem> Z3_API Z3_mk_fpa_rem(ArgType<&Z3_mk_fpa_rem, 0> _0, ArgType<&Z3_mk_fpa_rem, 1> _1, ArgType<&Z3_mk_fpa_rem, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_rem)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_rem"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_round_to_integral> Z3_API Z3_mk_fpa_round_to_integral(ArgType<&Z3_mk_fpa_round_to_integral, 0> _0, ArgType<&Z3_mk_fpa_round_to_integral, 1> _1, ArgType<&Z3_mk_fpa_round_to_integral, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_round_to_integral)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_round_to_integral"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_min> Z3_API Z3_mk_fpa_min(ArgType<&Z3_mk_fpa_min, 0> _0, ArgType<&Z3_mk_fpa_min, 1> _1, ArgType<&Z3_mk_fpa_min, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_min)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_min"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_max> Z3_API Z3_mk_fpa_max(ArgType<&Z3_mk_fpa_max, 0> _0, ArgType<&Z3_mk_fpa_max, 1> _1, ArgType<&Z3_mk_fpa_max, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_max)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_max"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_leq> Z3_API Z3_mk_fpa_leq(ArgType<&Z3_mk_fpa_leq, 0> _0, ArgType<&Z3_mk_fpa_leq, 1> _1, ArgType<&Z3_mk_fpa_leq, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_leq)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_leq"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_lt> Z3_API Z3_mk_fpa_lt(ArgType<&Z3_mk_fpa_lt, 0> _0, ArgType<&Z3_mk_fpa_lt, 1> _1, ArgType<&Z3_mk_fpa_lt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_lt)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_lt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_geq> Z3_API Z3_mk_fpa_geq(ArgType<&Z3_mk_fpa_geq, 0> _0, ArgType<&Z3_mk_fpa_geq, 1> _1, ArgType<&Z3_mk_fpa_geq, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_geq)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_geq"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_gt> Z3_API Z3_mk_fpa_gt(ArgType<&Z3_mk_fpa_gt, 0> _0, ArgType<&Z3_mk_fpa_gt, 1> _1, ArgType<&Z3_mk_fpa_gt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_gt)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_gt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_eq> Z3_API Z3_mk_fpa_eq(ArgType<&Z3_mk_fpa_eq, 0> _0, ArgType<&Z3_mk_fpa_eq, 1> _1, ArgType<&Z3_mk_fpa_eq, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_eq)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_eq"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_is_normal> Z3_API Z3_mk_fpa_is_normal(ArgType<&Z3_mk_fpa_is_normal, 0> _0, ArgType<&Z3_mk_fpa_is_normal, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_is_normal)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_is_normal"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_is_subnormal> Z3_API Z3_mk_fpa_is_subnormal(ArgType<&Z3_mk_fpa_is_subnormal, 0> _0, ArgType<&Z3_mk_fpa_is_subnormal, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_is_subnormal)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_is_subnormal"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_is_zero> Z3_API Z3_mk_fpa_is_zero(ArgType<&Z3_mk_fpa_is_zero, 0> _0, ArgType<&Z3_mk_fpa_is_zero, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_is_zero)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_is_zero"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_is_infinite> Z3_API Z3_mk_fpa_is_infinite(ArgType<&Z3_mk_fpa_is_infinite, 0> _0, ArgType<&Z3_mk_fpa_is_infinite, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_is_infinite)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_is_infinite"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_is_nan> Z3_API Z3_mk_fpa_is_nan(ArgType<&Z3_mk_fpa_is_nan, 0> _0, ArgType<&Z3_mk_fpa_is_nan, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_is_nan)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_is_nan"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_is_negative> Z3_API Z3_mk_fpa_is_negative(ArgType<&Z3_mk_fpa_is_negative, 0> _0, ArgType<&Z3_mk_fpa_is_negative, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_is_negative)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_is_negative"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_is_positive> Z3_API Z3_mk_fpa_is_positive(ArgType<&Z3_mk_fpa_is_positive, 0> _0, ArgType<&Z3_mk_fpa_is_positive, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_is_positive)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_is_positive"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_to_fp_bv> Z3_API Z3_mk_fpa_to_fp_bv(ArgType<&Z3_mk_fpa_to_fp_bv, 0> _0, ArgType<&Z3_mk_fpa_to_fp_bv, 1> _1, ArgType<&Z3_mk_fpa_to_fp_bv, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_fp_bv)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_fp_bv"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_to_fp_float> Z3_API Z3_mk_fpa_to_fp_float(ArgType<&Z3_mk_fpa_to_fp_float, 0> _0, ArgType<&Z3_mk_fpa_to_fp_float, 1> _1, ArgType<&Z3_mk_fpa_to_fp_float, 2> _2, ArgType<&Z3_mk_fpa_to_fp_float, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_fp_float)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_fp_float"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_to_fp_real> Z3_API Z3_mk_fpa_to_fp_real(ArgType<&Z3_mk_fpa_to_fp_real, 0> _0, ArgType<&Z3_mk_fpa_to_fp_real, 1> _1, ArgType<&Z3_mk_fpa_to_fp_real, 2> _2, ArgType<&Z3_mk_fpa_to_fp_real, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_fp_real)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_fp_real"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_to_fp_signed> Z3_API Z3_mk_fpa_to_fp_signed(ArgType<&Z3_mk_fpa_to_fp_signed, 0> _0, ArgType<&Z3_mk_fpa_to_fp_signed, 1> _1, ArgType<&Z3_mk_fpa_to_fp_signed, 2> _2, ArgType<&Z3_mk_fpa_to_fp_signed, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_fp_signed)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_fp_signed"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_to_fp_unsigned> Z3_API Z3_mk_fpa_to_fp_unsigned(ArgType<&Z3_mk_fpa_to_fp_unsigned, 0> _0, ArgType<&Z3_mk_fpa_to_fp_unsigned, 1> _1, ArgType<&Z3_mk_fpa_to_fp_unsigned, 2> _2, ArgType<&Z3_mk_fpa_to_fp_unsigned, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_fp_unsigned)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_fp_unsigned"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_to_ubv> Z3_API Z3_mk_fpa_to_ubv(ArgType<&Z3_mk_fpa_to_ubv, 0> _0, ArgType<&Z3_mk_fpa_to_ubv, 1> _1, ArgType<&Z3_mk_fpa_to_ubv, 2> _2, ArgType<&Z3_mk_fpa_to_ubv, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_ubv)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_ubv"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_to_sbv> Z3_API Z3_mk_fpa_to_sbv(ArgType<&Z3_mk_fpa_to_sbv, 0> _0, ArgType<&Z3_mk_fpa_to_sbv, 1> _1, ArgType<&Z3_mk_fpa_to_sbv, 2> _2, ArgType<&Z3_mk_fpa_to_sbv, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_sbv)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_sbv"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_mk_fpa_to_real> Z3_API Z3_mk_fpa_to_real(ArgType<&Z3_mk_fpa_to_real, 0> _0, ArgType<&Z3_mk_fpa_to_real, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_real)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_real"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_get_ebits> Z3_API Z3_fpa_get_ebits(ArgType<&Z3_fpa_get_ebits, 0> _0, ArgType<&Z3_fpa_get_ebits, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_ebits)>(Z3Loader::get().loadSymbol("Z3_fpa_get_ebits"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_get_sbits> Z3_API Z3_fpa_get_sbits(ArgType<&Z3_fpa_get_sbits, 0> _0, ArgType<&Z3_fpa_get_sbits, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_sbits)>(Z3Loader::get().loadSymbol("Z3_fpa_get_sbits"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_is_numeral_nan> Z3_API Z3_fpa_is_numeral_nan(ArgType<&Z3_fpa_is_numeral_nan, 0> _0, ArgType<&Z3_fpa_is_numeral_nan, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_is_numeral_nan)>(Z3Loader::get().loadSymbol("Z3_fpa_is_numeral_nan"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_is_numeral_inf> Z3_API Z3_fpa_is_numeral_inf(ArgType<&Z3_fpa_is_numeral_inf, 0> _0, ArgType<&Z3_fpa_is_numeral_inf, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_is_numeral_inf)>(Z3Loader::get().loadSymbol("Z3_fpa_is_numeral_inf"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_is_numeral_zero> Z3_API Z3_fpa_is_numeral_zero(ArgType<&Z3_fpa_is_numeral_zero, 0> _0, ArgType<&Z3_fpa_is_numeral_zero, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_is_numeral_zero)>(Z3Loader::get().loadSymbol("Z3_fpa_is_numeral_zero"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_is_numeral_normal> Z3_API Z3_fpa_is_numeral_normal(ArgType<&Z3_fpa_is_numeral_normal, 0> _0, ArgType<&Z3_fpa_is_numeral_normal, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_is_numeral_normal)>(Z3Loader::get().loadSymbol("Z3_fpa_is_numeral_normal"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_is_numeral_subnormal> Z3_API Z3_fpa_is_numeral_subnormal(ArgType<&Z3_fpa_is_numeral_subnormal, 0> _0, ArgType<&Z3_fpa_is_numeral_subnormal, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_is_numeral_subnormal)>(Z3Loader::get().loadSymbol("Z3_fpa_is_numeral_subnormal"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_is_numeral_positive> Z3_API Z3_fpa_is_numeral_positive(ArgType<&Z3_fpa_is_numeral_positive, 0> _0, ArgType<&Z3_fpa_is_numeral_positive, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_is_numeral_positive)>(Z3Loader::get().loadSymbol("Z3_fpa_is_numeral_positive"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_is_numeral_negative> Z3_API Z3_fpa_is_numeral_negative(ArgType<&Z3_fpa_is_numeral_negative, 0> _0, ArgType<&Z3_fpa_is_numeral_negative, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_is_numeral_negative)>(Z3Loader::get().loadSymbol("Z3_fpa_is_numeral_negative"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_get_numeral_sign_bv> Z3_API Z3_fpa_get_numeral_sign_bv(ArgType<&Z3_fpa_get_numeral_sign_bv, 0> _0, ArgType<&Z3_fpa_get_numeral_sign_bv, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_numeral_sign_bv)>(Z3Loader::get().loadSymbol("Z3_fpa_get_numeral_sign_bv"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_get_numeral_significand_bv> Z3_API Z3_fpa_get_numeral_significand_bv(ArgType<&Z3_fpa_get_numeral_significand_bv, 0> _0, ArgType<&Z3_fpa_get_numeral_significand_bv, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_numeral_significand_bv)>(Z3Loader::get().loadSymbol("Z3_fpa_get_numeral_significand_bv"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_get_numeral_sign> Z3_API Z3_fpa_get_numeral_sign(ArgType<&Z3_fpa_get_numeral_sign, 0> _0, ArgType<&Z3_fpa_get_numeral_sign, 1> _1, ArgType<&Z3_fpa_get_numeral_sign, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_numeral_sign)>(Z3Loader::get().loadSymbol("Z3_fpa_get_numeral_sign"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_fpa_get_numeral_significand_string> Z3_API Z3_fpa_get_numeral_significand_string(ArgType<&Z3_fpa_get_numeral_significand_string, 0> _0, ArgType<&Z3_fpa_get_numeral_significand_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_numeral_significand_string)>(Z3Loader::get().loadSymbol("Z3_fpa_get_numeral_significand_string"));
	return sym(_0, _1);
}
ResultType<&Z3_fpa_get_numeral_significand_uint64> Z3_API Z3_fpa_get_numeral_significand_uint64(ArgType<&Z3_fpa_get_numeral_significand_uint64, 0> _0, ArgType<&Z3_fpa_get_numeral_significand_uint64, 1> _1, ArgType<&Z3_fpa_get_numeral_significand_uint64, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_numeral_significand_uint64)>(Z3Loader::get().loadSymbol("Z3_fpa_get_numeral_significand_uint64"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_fpa_get_numeral_exponent_string> Z3_API Z3_fpa_get_numeral_exponent_string(ArgType<&Z3_fpa_get_numeral_exponent_string, 0> _0, ArgType<&Z3_fpa_get_numeral_exponent_string, 1> _1, ArgType<&Z3_fpa_get_numeral_exponent_string, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_numeral_exponent_string)>(Z3Loader::get().loadSymbol("Z3_fpa_get_numeral_exponent_string"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_fpa_get_numeral_exponent_int64> Z3_API Z3_fpa_get_numeral_exponent_int64(ArgType<&Z3_fpa_get_numeral_exponent_int64, 0> _0, ArgType<&Z3_fpa_get_numeral_exponent_int64, 1> _1, ArgType<&Z3_fpa_get_numeral_exponent_int64, 2> _2, ArgType<&Z3_fpa_get_numeral_exponent_int64, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_numeral_exponent_int64)>(Z3Loader::get().loadSymbol("Z3_fpa_get_numeral_exponent_int64"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_fpa_get_numeral_exponent_bv> Z3_API Z3_fpa_get_numeral_exponent_bv(ArgType<&Z3_fpa_get_numeral_exponent_bv, 0> _0, ArgType<&Z3_fpa_get_numeral_exponent_bv, 1> _1, ArgType<&Z3_fpa_get_numeral_exponent_bv, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fpa_get_numeral_exponent_bv)>(Z3Loader::get().loadSymbol("Z3_fpa_get_numeral_exponent_bv"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_mk_fpa_to_ieee_bv> Z3_API Z3_mk_fpa_to_ieee_bv(ArgType<&Z3_mk_fpa_to_ieee_bv, 0> _0, ArgType<&Z3_mk_fpa_to_ieee_bv, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_ieee_bv)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_ieee_bv"));
	return sym(_0, _1);
}
ResultType<&Z3_mk_fpa_to_fp_int_real> Z3_API Z3_mk_fpa_to_fp_int_real(ArgType<&Z3_mk_fpa_to_fp_int_real, 0> _0, ArgType<&Z3_mk_fpa_to_fp_int_real, 1> _1, ArgType<&Z3_mk_fpa_to_fp_int_real, 2> _2, ArgType<&Z3_mk_fpa_to_fp_int_real, 3> _3, ArgType<&Z3_mk_fpa_to_fp_int_real, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_fpa_to_fp_int_real)>(Z3Loader::get().loadSymbol("Z3_mk_fpa_to_fp_int_real"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_mk_optimize> Z3_API Z3_mk_optimize(ArgType<&Z3_mk_optimize, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_mk_optimize)>(Z3Loader::get().loadSymbol("Z3_mk_optimize"));
	return sym(_0);
}
ResultType<&Z3_optimize_inc_ref> Z3_API Z3_optimize_inc_ref(ArgType<&Z3_optimize_inc_ref, 0> _0, ArgType<&Z3_optimize_inc_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_inc_ref)>(Z3Loader::get().loadSymbol("Z3_optimize_inc_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_dec_ref> Z3_API Z3_optimize_dec_ref(ArgType<&Z3_optimize_dec_ref, 0> _0, ArgType<&Z3_optimize_dec_ref, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_dec_ref)>(Z3Loader::get().loadSymbol("Z3_optimize_dec_ref"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_assert> Z3_API Z3_optimize_assert(ArgType<&Z3_optimize_assert, 0> _0, ArgType<&Z3_optimize_assert, 1> _1, ArgType<&Z3_optimize_assert, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_assert)>(Z3Loader::get().loadSymbol("Z3_optimize_assert"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_assert_and_track> Z3_API Z3_optimize_assert_and_track(ArgType<&Z3_optimize_assert_and_track, 0> _0, ArgType<&Z3_optimize_assert_and_track, 1> _1, ArgType<&Z3_optimize_assert_and_track, 2> _2, ArgType<&Z3_optimize_assert_and_track, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_assert_and_track)>(Z3Loader::get().loadSymbol("Z3_optimize_assert_and_track"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_optimize_assert_soft> Z3_API Z3_optimize_assert_soft(ArgType<&Z3_optimize_assert_soft, 0> _0, ArgType<&Z3_optimize_assert_soft, 1> _1, ArgType<&Z3_optimize_assert_soft, 2> _2, ArgType<&Z3_optimize_assert_soft, 3> _3, ArgType<&Z3_optimize_assert_soft, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_assert_soft)>(Z3Loader::get().loadSymbol("Z3_optimize_assert_soft"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_optimize_maximize> Z3_API Z3_optimize_maximize(ArgType<&Z3_optimize_maximize, 0> _0, ArgType<&Z3_optimize_maximize, 1> _1, ArgType<&Z3_optimize_maximize, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_maximize)>(Z3Loader::get().loadSymbol("Z3_optimize_maximize"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_minimize> Z3_API Z3_optimize_minimize(ArgType<&Z3_optimize_minimize, 0> _0, ArgType<&Z3_optimize_minimize, 1> _1, ArgType<&Z3_optimize_minimize, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_minimize)>(Z3Loader::get().loadSymbol("Z3_optimize_minimize"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_push> Z3_API Z3_optimize_push(ArgType<&Z3_optimize_push, 0> _0, ArgType<&Z3_optimize_push, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_push)>(Z3Loader::get().loadSymbol("Z3_optimize_push"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_pop> Z3_API Z3_optimize_pop(ArgType<&Z3_optimize_pop, 0> _0, ArgType<&Z3_optimize_pop, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_pop)>(Z3Loader::get().loadSymbol("Z3_optimize_pop"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_check> Z3_API Z3_optimize_check(ArgType<&Z3_optimize_check, 0> _0, ArgType<&Z3_optimize_check, 1> _1, ArgType<&Z3_optimize_check, 2> _2, ArgType<&Z3_optimize_check, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_check)>(Z3Loader::get().loadSymbol("Z3_optimize_check"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_optimize_get_reason_unknown> Z3_API Z3_optimize_get_reason_unknown(ArgType<&Z3_optimize_get_reason_unknown, 0> _0, ArgType<&Z3_optimize_get_reason_unknown, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_reason_unknown)>(Z3Loader::get().loadSymbol("Z3_optimize_get_reason_unknown"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_get_model> Z3_API Z3_optimize_get_model(ArgType<&Z3_optimize_get_model, 0> _0, ArgType<&Z3_optimize_get_model, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_model)>(Z3Loader::get().loadSymbol("Z3_optimize_get_model"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_get_unsat_core> Z3_API Z3_optimize_get_unsat_core(ArgType<&Z3_optimize_get_unsat_core, 0> _0, ArgType<&Z3_optimize_get_unsat_core, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_unsat_core)>(Z3Loader::get().loadSymbol("Z3_optimize_get_unsat_core"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_set_params> Z3_API Z3_optimize_set_params(ArgType<&Z3_optimize_set_params, 0> _0, ArgType<&Z3_optimize_set_params, 1> _1, ArgType<&Z3_optimize_set_params, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_set_params)>(Z3Loader::get().loadSymbol("Z3_optimize_set_params"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_get_param_descrs> Z3_API Z3_optimize_get_param_descrs(ArgType<&Z3_optimize_get_param_descrs, 0> _0, ArgType<&Z3_optimize_get_param_descrs, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_param_descrs)>(Z3Loader::get().loadSymbol("Z3_optimize_get_param_descrs"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_get_lower> Z3_API Z3_optimize_get_lower(ArgType<&Z3_optimize_get_lower, 0> _0, ArgType<&Z3_optimize_get_lower, 1> _1, ArgType<&Z3_optimize_get_lower, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_lower)>(Z3Loader::get().loadSymbol("Z3_optimize_get_lower"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_get_upper> Z3_API Z3_optimize_get_upper(ArgType<&Z3_optimize_get_upper, 0> _0, ArgType<&Z3_optimize_get_upper, 1> _1, ArgType<&Z3_optimize_get_upper, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_upper)>(Z3Loader::get().loadSymbol("Z3_optimize_get_upper"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_get_lower_as_vector> Z3_API Z3_optimize_get_lower_as_vector(ArgType<&Z3_optimize_get_lower_as_vector, 0> _0, ArgType<&Z3_optimize_get_lower_as_vector, 1> _1, ArgType<&Z3_optimize_get_lower_as_vector, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_lower_as_vector)>(Z3Loader::get().loadSymbol("Z3_optimize_get_lower_as_vector"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_get_upper_as_vector> Z3_API Z3_optimize_get_upper_as_vector(ArgType<&Z3_optimize_get_upper_as_vector, 0> _0, ArgType<&Z3_optimize_get_upper_as_vector, 1> _1, ArgType<&Z3_optimize_get_upper_as_vector, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_upper_as_vector)>(Z3Loader::get().loadSymbol("Z3_optimize_get_upper_as_vector"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_to_string> Z3_API Z3_optimize_to_string(ArgType<&Z3_optimize_to_string, 0> _0, ArgType<&Z3_optimize_to_string, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_to_string)>(Z3Loader::get().loadSymbol("Z3_optimize_to_string"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_from_string> Z3_API Z3_optimize_from_string(ArgType<&Z3_optimize_from_string, 0> _0, ArgType<&Z3_optimize_from_string, 1> _1, ArgType<&Z3_optimize_from_string, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_from_string)>(Z3Loader::get().loadSymbol("Z3_optimize_from_string"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_from_file> Z3_API Z3_optimize_from_file(ArgType<&Z3_optimize_from_file, 0> _0, ArgType<&Z3_optimize_from_file, 1> _1, ArgType<&Z3_optimize_from_file, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_from_file)>(Z3Loader::get().loadSymbol("Z3_optimize_from_file"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_optimize_get_help> Z3_API Z3_optimize_get_help(ArgType<&Z3_optimize_get_help, 0> _0, ArgType<&Z3_optimize_get_help, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_help)>(Z3Loader::get().loadSymbol("Z3_optimize_get_help"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_get_statistics> Z3_API Z3_optimize_get_statistics(ArgType<&Z3_optimize_get_statistics, 0> _0, ArgType<&Z3_optimize_get_statistics, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_statistics)>(Z3Loader::get().loadSymbol("Z3_optimize_get_statistics"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_get_assertions> Z3_API Z3_optimize_get_assertions(ArgType<&Z3_optimize_get_assertions, 0> _0, ArgType<&Z3_optimize_get_assertions, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_assertions)>(Z3Loader::get().loadSymbol("Z3_optimize_get_assertions"));
	return sym(_0, _1);
}
ResultType<&Z3_optimize_get_objectives> Z3_API Z3_optimize_get_objectives(ArgType<&Z3_optimize_get_objectives, 0> _0, ArgType<&Z3_optimize_get_objectives, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_optimize_get_objectives)>(Z3Loader::get().loadSymbol("Z3_optimize_get_objectives"));
	return sym(_0, _1);
}
ResultType<&Z3_polynomial_subresultants> Z3_API Z3_polynomial_subresultants(ArgType<&Z3_polynomial_subresultants, 0> _0, ArgType<&Z3_polynomial_subresultants, 1> _1, ArgType<&Z3_polynomial_subresultants, 2> _2, ArgType<&Z3_polynomial_subresultants, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_polynomial_subresultants)>(Z3Loader::get().loadSymbol("Z3_polynomial_subresultants"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_rcf_del> Z3_API Z3_rcf_del(ArgType<&Z3_rcf_del, 0> _0, ArgType<&Z3_rcf_del, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_del)>(Z3Loader::get().loadSymbol("Z3_rcf_del"));
	return sym(_0, _1);
}
ResultType<&Z3_rcf_mk_rational> Z3_API Z3_rcf_mk_rational(ArgType<&Z3_rcf_mk_rational, 0> _0, ArgType<&Z3_rcf_mk_rational, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_mk_rational)>(Z3Loader::get().loadSymbol("Z3_rcf_mk_rational"));
	return sym(_0, _1);
}
ResultType<&Z3_rcf_mk_small_int> Z3_API Z3_rcf_mk_small_int(ArgType<&Z3_rcf_mk_small_int, 0> _0, ArgType<&Z3_rcf_mk_small_int, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_mk_small_int)>(Z3Loader::get().loadSymbol("Z3_rcf_mk_small_int"));
	return sym(_0, _1);
}
ResultType<&Z3_rcf_mk_pi> Z3_API Z3_rcf_mk_pi(ArgType<&Z3_rcf_mk_pi, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_mk_pi)>(Z3Loader::get().loadSymbol("Z3_rcf_mk_pi"));
	return sym(_0);
}
ResultType<&Z3_rcf_mk_e> Z3_API Z3_rcf_mk_e(ArgType<&Z3_rcf_mk_e, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_mk_e)>(Z3Loader::get().loadSymbol("Z3_rcf_mk_e"));
	return sym(_0);
}
ResultType<&Z3_rcf_mk_infinitesimal> Z3_API Z3_rcf_mk_infinitesimal(ArgType<&Z3_rcf_mk_infinitesimal, 0> _0)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_mk_infinitesimal)>(Z3Loader::get().loadSymbol("Z3_rcf_mk_infinitesimal"));
	return sym(_0);
}
ResultType<&Z3_rcf_mk_roots> Z3_API Z3_rcf_mk_roots(ArgType<&Z3_rcf_mk_roots, 0> _0, ArgType<&Z3_rcf_mk_roots, 1> _1, ArgType<&Z3_rcf_mk_roots, 2> _2, ArgType<&Z3_rcf_mk_roots, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_mk_roots)>(Z3Loader::get().loadSymbol("Z3_rcf_mk_roots"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_rcf_add> Z3_API Z3_rcf_add(ArgType<&Z3_rcf_add, 0> _0, ArgType<&Z3_rcf_add, 1> _1, ArgType<&Z3_rcf_add, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_add)>(Z3Loader::get().loadSymbol("Z3_rcf_add"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_sub> Z3_API Z3_rcf_sub(ArgType<&Z3_rcf_sub, 0> _0, ArgType<&Z3_rcf_sub, 1> _1, ArgType<&Z3_rcf_sub, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_sub)>(Z3Loader::get().loadSymbol("Z3_rcf_sub"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_mul> Z3_API Z3_rcf_mul(ArgType<&Z3_rcf_mul, 0> _0, ArgType<&Z3_rcf_mul, 1> _1, ArgType<&Z3_rcf_mul, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_mul)>(Z3Loader::get().loadSymbol("Z3_rcf_mul"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_div> Z3_API Z3_rcf_div(ArgType<&Z3_rcf_div, 0> _0, ArgType<&Z3_rcf_div, 1> _1, ArgType<&Z3_rcf_div, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_div)>(Z3Loader::get().loadSymbol("Z3_rcf_div"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_neg> Z3_API Z3_rcf_neg(ArgType<&Z3_rcf_neg, 0> _0, ArgType<&Z3_rcf_neg, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_neg)>(Z3Loader::get().loadSymbol("Z3_rcf_neg"));
	return sym(_0, _1);
}
ResultType<&Z3_rcf_inv> Z3_API Z3_rcf_inv(ArgType<&Z3_rcf_inv, 0> _0, ArgType<&Z3_rcf_inv, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_inv)>(Z3Loader::get().loadSymbol("Z3_rcf_inv"));
	return sym(_0, _1);
}
ResultType<&Z3_rcf_power> Z3_API Z3_rcf_power(ArgType<&Z3_rcf_power, 0> _0, ArgType<&Z3_rcf_power, 1> _1, ArgType<&Z3_rcf_power, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_power)>(Z3Loader::get().loadSymbol("Z3_rcf_power"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_lt> Z3_API Z3_rcf_lt(ArgType<&Z3_rcf_lt, 0> _0, ArgType<&Z3_rcf_lt, 1> _1, ArgType<&Z3_rcf_lt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_lt)>(Z3Loader::get().loadSymbol("Z3_rcf_lt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_gt> Z3_API Z3_rcf_gt(ArgType<&Z3_rcf_gt, 0> _0, ArgType<&Z3_rcf_gt, 1> _1, ArgType<&Z3_rcf_gt, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_gt)>(Z3Loader::get().loadSymbol("Z3_rcf_gt"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_le> Z3_API Z3_rcf_le(ArgType<&Z3_rcf_le, 0> _0, ArgType<&Z3_rcf_le, 1> _1, ArgType<&Z3_rcf_le, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_le)>(Z3Loader::get().loadSymbol("Z3_rcf_le"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_ge> Z3_API Z3_rcf_ge(ArgType<&Z3_rcf_ge, 0> _0, ArgType<&Z3_rcf_ge, 1> _1, ArgType<&Z3_rcf_ge, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_ge)>(Z3Loader::get().loadSymbol("Z3_rcf_ge"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_eq> Z3_API Z3_rcf_eq(ArgType<&Z3_rcf_eq, 0> _0, ArgType<&Z3_rcf_eq, 1> _1, ArgType<&Z3_rcf_eq, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_eq)>(Z3Loader::get().loadSymbol("Z3_rcf_eq"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_neq> Z3_API Z3_rcf_neq(ArgType<&Z3_rcf_neq, 0> _0, ArgType<&Z3_rcf_neq, 1> _1, ArgType<&Z3_rcf_neq, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_neq)>(Z3Loader::get().loadSymbol("Z3_rcf_neq"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_num_to_string> Z3_API Z3_rcf_num_to_string(ArgType<&Z3_rcf_num_to_string, 0> _0, ArgType<&Z3_rcf_num_to_string, 1> _1, ArgType<&Z3_rcf_num_to_string, 2> _2, ArgType<&Z3_rcf_num_to_string, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_num_to_string)>(Z3Loader::get().loadSymbol("Z3_rcf_num_to_string"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_rcf_num_to_decimal_string> Z3_API Z3_rcf_num_to_decimal_string(ArgType<&Z3_rcf_num_to_decimal_string, 0> _0, ArgType<&Z3_rcf_num_to_decimal_string, 1> _1, ArgType<&Z3_rcf_num_to_decimal_string, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_num_to_decimal_string)>(Z3Loader::get().loadSymbol("Z3_rcf_num_to_decimal_string"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_rcf_get_numerator_denominator> Z3_API Z3_rcf_get_numerator_denominator(ArgType<&Z3_rcf_get_numerator_denominator, 0> _0, ArgType<&Z3_rcf_get_numerator_denominator, 1> _1, ArgType<&Z3_rcf_get_numerator_denominator, 2> _2, ArgType<&Z3_rcf_get_numerator_denominator, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_rcf_get_numerator_denominator)>(Z3Loader::get().loadSymbol("Z3_rcf_get_numerator_denominator"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_fixedpoint_query_from_lvl> Z3_API Z3_fixedpoint_query_from_lvl(ArgType<&Z3_fixedpoint_query_from_lvl, 0> _0, ArgType<&Z3_fixedpoint_query_from_lvl, 1> _1, ArgType<&Z3_fixedpoint_query_from_lvl, 2> _2, ArgType<&Z3_fixedpoint_query_from_lvl, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_query_from_lvl)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_query_from_lvl"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_fixedpoint_get_ground_sat_answer> Z3_API Z3_fixedpoint_get_ground_sat_answer(ArgType<&Z3_fixedpoint_get_ground_sat_answer, 0> _0, ArgType<&Z3_fixedpoint_get_ground_sat_answer, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_ground_sat_answer)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_ground_sat_answer"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_get_rules_along_trace> Z3_API Z3_fixedpoint_get_rules_along_trace(ArgType<&Z3_fixedpoint_get_rules_along_trace, 0> _0, ArgType<&Z3_fixedpoint_get_rules_along_trace, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_rules_along_trace)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_rules_along_trace"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_get_rule_names_along_trace> Z3_API Z3_fixedpoint_get_rule_names_along_trace(ArgType<&Z3_fixedpoint_get_rule_names_along_trace, 0> _0, ArgType<&Z3_fixedpoint_get_rule_names_along_trace, 1> _1)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_rule_names_along_trace)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_rule_names_along_trace"));
	return sym(_0, _1);
}
ResultType<&Z3_fixedpoint_add_invariant> Z3_API Z3_fixedpoint_add_invariant(ArgType<&Z3_fixedpoint_add_invariant, 0> _0, ArgType<&Z3_fixedpoint_add_invariant, 1> _1, ArgType<&Z3_fixedpoint_add_invariant, 2> _2, ArgType<&Z3_fixedpoint_add_invariant, 3> _3)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_add_invariant)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_add_invariant"));
	return sym(_0, _1, _2, _3);
}
ResultType<&Z3_fixedpoint_get_reachable> Z3_API Z3_fixedpoint_get_reachable(ArgType<&Z3_fixedpoint_get_reachable, 0> _0, ArgType<&Z3_fixedpoint_get_reachable, 1> _1, ArgType<&Z3_fixedpoint_get_reachable, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_fixedpoint_get_reachable)>(Z3Loader::get().loadSymbol("Z3_fixedpoint_get_reachable"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_qe_model_project> Z3_API Z3_qe_model_project(ArgType<&Z3_qe_model_project, 0> _0, ArgType<&Z3_qe_model_project, 1> _1, ArgType<&Z3_qe_model_project, 2> _2, ArgType<&Z3_qe_model_project, 3> _3, ArgType<&Z3_qe_model_project, 4> _4)
{
	static auto sym = reinterpret_cast<decltype(&Z3_qe_model_project)>(Z3Loader::get().loadSymbol("Z3_qe_model_project"));
	return sym(_0, _1, _2, _3, _4);
}
ResultType<&Z3_qe_model_project_skolem> Z3_API Z3_qe_model_project_skolem(ArgType<&Z3_qe_model_project_skolem, 0> _0, ArgType<&Z3_qe_model_project_skolem, 1> _1, ArgType<&Z3_qe_model_project_skolem, 2> _2, ArgType<&Z3_qe_model_project_skolem, 3> _3, ArgType<&Z3_qe_model_project_skolem, 4> _4, ArgType<&Z3_qe_model_project_skolem, 5> _5)
{
	static auto sym = reinterpret_cast<decltype(&Z3_qe_model_project_skolem)>(Z3Loader::get().loadSymbol("Z3_qe_model_project_skolem"));
	return sym(_0, _1, _2, _3, _4, _5);
}
ResultType<&Z3_model_extrapolate> Z3_API Z3_model_extrapolate(ArgType<&Z3_model_extrapolate, 0> _0, ArgType<&Z3_model_extrapolate, 1> _1, ArgType<&Z3_model_extrapolate, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_model_extrapolate)>(Z3Loader::get().loadSymbol("Z3_model_extrapolate"));
	return sym(_0, _1, _2);
}
ResultType<&Z3_qe_lite> Z3_API Z3_qe_lite(ArgType<&Z3_qe_lite, 0> _0, ArgType<&Z3_qe_lite, 1> _1, ArgType<&Z3_qe_lite, 2> _2)
{
	static auto sym = reinterpret_cast<decltype(&Z3_qe_lite)>(Z3Loader::get().loadSymbol("Z3_qe_lite"));
	return sym(_0, _1, _2);
}
}

