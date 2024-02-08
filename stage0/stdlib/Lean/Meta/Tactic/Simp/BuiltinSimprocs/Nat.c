// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.BuiltinSimprocs.Nat
// Imports: Init Lean.Meta.Offset Lean.Meta.Tactic.Simp.Simproc Lean.Meta.Tactic.Simp.BuiltinSimprocs.Util
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_nat_gcd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__12;
static lean_object* l_Nat_reducePow___closed__3;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__2;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_582_(lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGE___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__4;
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__5;
static lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__2;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Nat_reduceSub___closed__2;
LEAN_EXPORT lean_object* l_Nat_reduceSucc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__9;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_848_(lean_object*);
static lean_object* l_Nat_reduceSub___closed__1;
static lean_object* l_Nat_reduceDiv___closed__3;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_766_(lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLT___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__6;
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__8;
static lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__7;
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__5;
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__8;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__13;
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__9;
static lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__1;
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__10;
static lean_object* l_Nat_reduceMod___closed__2;
LEAN_EXPORT lean_object* l_Nat_reduceUnary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_961_(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_Nat_reduceDiv___closed__2;
static lean_object* l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__3;
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_764_(lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_702_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__3;
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__7;
static lean_object* l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__1;
static lean_object* l_Nat_reduceMul___closed__2;
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__2;
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__4;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_664_(lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803_(lean_object*);
static lean_object* l_Nat_reduceDiv___closed__1;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__7;
lean_object* l_Lean_Meta_Simp_evalPropStep(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__6;
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__1;
lean_object* l_Lean_Meta_evalNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__1;
LEAN_EXPORT lean_object* l_Nat_reduceDiv___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__7;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500_(lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__8;
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__3;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_846_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__11;
static lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__7;
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__7;
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__11;
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__8;
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__10;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_704_(lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceAdd___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
static lean_object* l_Nat_isValue___closed__3;
static lean_object* l_Nat_isValue___closed__1;
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__10;
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__3;
LEAN_EXPORT lean_object* l_Nat_reduceSucc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__6;
static lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__1;
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__8;
static lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__4;
static lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__3;
static lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__9;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_502_(lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceUnary___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceGE___closed__2;
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__11;
static lean_object* l_Nat_reduceGcd___closed__1;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_504_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__2;
extern lean_object* l_Lean_Meta_Simp_builtinSimprocsRef;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_542_(lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464_(lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBin___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceLE___closed__1;
static lean_object* l_Nat_reduceSub___closed__3;
LEAN_EXPORT lean_object* l_Nat_reduceLE___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_807_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__1;
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__8;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_805_(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__6;
LEAN_EXPORT lean_object* l_Nat_isValue___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGT___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__5;
LEAN_EXPORT lean_object* l_Nat_reduceSucc___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__7;
LEAN_EXPORT lean_object* l_Nat_fromExpr_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceGT___closed__3;
static lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__4;
LEAN_EXPORT lean_object* l_Nat_reduceSub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__6;
static lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__2;
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__10;
LEAN_EXPORT lean_object* l_Nat_reduceMod___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__6;
static lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__8;
LEAN_EXPORT lean_object* l_Nat_reduceLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMul___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__11;
LEAN_EXPORT lean_object* l_Nat_reduceDiv___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reducePow___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceGT___closed__1;
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__3;
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__1;
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__10;
LEAN_EXPORT lean_object* l_Nat_reduceGcd___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceUnary___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_isValue___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__1;
static lean_object* l_Nat_reduceLT___closed__3;
static lean_object* l_Nat_reduceLT___closed__1;
LEAN_EXPORT lean_object* l_Nat_reduceGT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_887_(lean_object*);
static lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__8;
LEAN_EXPORT lean_object* l_Nat_reduceAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLT___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__2;
static lean_object* l_Nat_reduceLE___closed__3;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_624_(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Nat_reduceMod___closed__1;
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__7;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_889_(lean_object*);
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__7;
static lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__2;
LEAN_EXPORT lean_object* l_Nat_reduceSub___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMul___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__2;
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__5;
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460_(lean_object*);
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__3;
LEAN_EXPORT lean_object* l_Nat_reduceBinPred___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceAdd___closed__2;
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__6;
static lean_object* l_Nat_reduceGE___closed__3;
static lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__8;
static lean_object* l_Nat_reduceSucc___closed__2;
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__10;
static lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__5;
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__10;
static lean_object* l_Nat_reduceUnary___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Nat_reduceDiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__4;
LEAN_EXPORT lean_object* l_Nat_reduceBinPred___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__6;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762_(lean_object*);
static lean_object* l_Nat_reducePow___closed__1;
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__5;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__3;
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__2;
static lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__1;
LEAN_EXPORT lean_object* l_Nat_reduceMod___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceMul___closed__1;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_584_(lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_544_(lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_723_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
LEAN_EXPORT lean_object* l_Nat_reduceSucc___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reducePow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__9;
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__4;
LEAN_EXPORT lean_object* l_Nat_reduceGE___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__4;
static lean_object* l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__1;
lean_object* lean_nat_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceLE___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reducePow___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGcd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGT___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__5;
lean_object* lean_nat_mod(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__3;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__3;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__5;
lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l_Nat_reduceGcd___closed__2;
static lean_object* l_Nat_reduceGT___closed__2;
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__1;
static lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__4;
static lean_object* l_Nat_reduceMod___closed__3;
LEAN_EXPORT lean_object* l_Nat_reduceDiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceGcd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__2;
static lean_object* l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__2;
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959_(lean_object*);
static lean_object* l_Nat_isValue___closed__2;
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__9;
static lean_object* l_Nat_reduceSucc___closed__3;
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__14;
static lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__1;
static lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__9;
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__3;
LEAN_EXPORT lean_object* l_Nat_reduceSub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
LEAN_EXPORT lean_object* l_Nat_reduceBinPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBin___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceMul___closed__3;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__9;
LEAN_EXPORT lean_object* l_Nat_isValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceGE___closed__1;
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__6;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_725_(lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__5;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_662_(lean_object*);
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__7;
LEAN_EXPORT lean_object* l_Nat_reducePow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__1;
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__2;
static lean_object* l_Nat_reduceLE___closed__2;
static lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__5;
LEAN_EXPORT lean_object* l_Nat_reduceGcd___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceAdd___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_fromExpr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__11;
static lean_object* l_Nat_reducePow___closed__2;
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_622_(lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceSub___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__11;
extern lean_object* l_Lean_Meta_Simp_builtinSEvalprocsRef;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_reduceBin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceAdd___closed__3;
LEAN_EXPORT lean_object* l_Nat_reduceMod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721_(lean_object*);
static lean_object* l_Nat_reduceLT___closed__2;
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__4;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__4;
static lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__6;
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__8;
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__7;
LEAN_EXPORT lean_object* l_Nat_reduceMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_reduceAdd___closed__1;
static lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__9;
static lean_object* l_Nat_reduceSucc___closed__1;
static lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__2;
static lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__9;
static lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__3;
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__3;
static lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__4;
LEAN_EXPORT lean_object* l_Nat_fromExpr_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_evalNat(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_10, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_11, 0);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_10, 0, x_22);
return x_10;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_dec(x_10);
x_24 = lean_ctor_get(x_11, 0);
lean_inc(x_24);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_25 = x_11;
} else {
 lean_dec_ref(x_11);
 x_25 = lean_box(0);
}
if (lean_is_scalar(x_25)) {
 x_26 = lean_alloc_ctor(1, 1, 0);
} else {
 x_26 = x_25;
}
lean_ctor_set(x_26, 0, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_10);
if (x_28 == 0)
{
return x_10;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_10, 0);
x_30 = lean_ctor_get(x_10, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_10);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_fromExpr_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_fromExpr_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l_Nat_reduceUnary___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceUnary___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Lean_Expr_appArg_x21(x_1);
x_13 = l_Nat_fromExpr_x3f(x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint32_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_22 = lean_ctor_get(x_13, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
lean_dec(x_14);
x_24 = lean_apply_1(x_2, x_23);
x_25 = l_Lean_mkNatLit(x_24);
x_26 = lean_box(0);
x_27 = 0;
x_28 = 1;
x_29 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_29, 0, x_25);
lean_ctor_set(x_29, 1, x_26);
lean_ctor_set_uint32(x_29, sizeof(void*)*2, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*2 + 4, x_28);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_13, 0, x_30);
return x_13;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint32_t x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_31 = lean_ctor_get(x_13, 1);
lean_inc(x_31);
lean_dec(x_13);
x_32 = lean_ctor_get(x_14, 0);
lean_inc(x_32);
lean_dec(x_14);
x_33 = lean_apply_1(x_2, x_32);
x_34 = l_Lean_mkNatLit(x_33);
x_35 = lean_box(0);
x_36 = 0;
x_37 = 1;
x_38 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_38, 0, x_34);
lean_ctor_set(x_38, 1, x_35);
lean_ctor_set_uint32(x_38, sizeof(void*)*2, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 4, x_37);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_31);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_13);
if (x_41 == 0)
{
return x_13;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_13, 0);
x_43 = lean_ctor_get(x_13, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_13);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceUnary(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = l_Lean_Expr_isAppOfArity(x_4, x_1, x_2);
lean_dec(x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = l_Nat_reduceUnary___lambda__1___closed__1;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l_Nat_reduceUnary___lambda__1(x_4, x_3, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceUnary___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Nat_reduceUnary___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBin___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_Expr_appFn_x21(x_1);
x_13 = l_Lean_Expr_appArg_x21(x_12);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = l_Nat_fromExpr_x3f(x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
x_18 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = l_Nat_reduceUnary___lambda__1___closed__1;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
lean_dec(x_15);
x_24 = l_Lean_Expr_appArg_x21(x_1);
x_25 = l_Nat_fromExpr_x3f(x_24, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
lean_dec(x_23);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 0);
lean_dec(x_28);
x_29 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_25, 0, x_29);
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_dec(x_25);
x_31 = l_Nat_reduceUnary___lambda__1___closed__1;
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_25);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint32_t x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_34 = lean_ctor_get(x_25, 0);
lean_dec(x_34);
x_35 = lean_ctor_get(x_26, 0);
lean_inc(x_35);
lean_dec(x_26);
x_36 = lean_apply_2(x_2, x_23, x_35);
x_37 = l_Lean_mkNatLit(x_36);
x_38 = lean_box(0);
x_39 = 0;
x_40 = 1;
x_41 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_41, 0, x_37);
lean_ctor_set(x_41, 1, x_38);
lean_ctor_set_uint32(x_41, sizeof(void*)*2, x_39);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 4, x_40);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_25, 0, x_42);
return x_25;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint32_t x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_43 = lean_ctor_get(x_25, 1);
lean_inc(x_43);
lean_dec(x_25);
x_44 = lean_ctor_get(x_26, 0);
lean_inc(x_44);
lean_dec(x_26);
x_45 = lean_apply_2(x_2, x_23, x_44);
x_46 = l_Lean_mkNatLit(x_45);
x_47 = lean_box(0);
x_48 = 0;
x_49 = 1;
x_50 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_47);
lean_ctor_set_uint32(x_50, sizeof(void*)*2, x_48);
lean_ctor_set_uint8(x_50, sizeof(void*)*2 + 4, x_49);
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_43);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_23);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_25);
if (x_53 == 0)
{
return x_25;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_25, 0);
x_55 = lean_ctor_get(x_25, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_25);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_14);
if (x_57 == 0)
{
return x_14;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_14, 0);
x_59 = lean_ctor_get(x_14, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_14);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBin(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = l_Lean_Expr_isAppOfArity(x_4, x_1, x_2);
lean_dec(x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = l_Nat_reduceUnary___lambda__1___closed__1;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l_Nat_reduceBin___lambda__1(x_4, x_3, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBin___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Nat_reduceBin___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBinPred___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_Expr_appFn_x21(x_1);
x_13 = l_Lean_Expr_appArg_x21(x_12);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_14 = l_Nat_fromExpr_x3f(x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
x_18 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = l_Nat_reduceUnary___lambda__1___closed__1;
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
lean_dec(x_15);
x_24 = l_Lean_Expr_appArg_x21(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_25 = l_Nat_fromExpr_x3f(x_24, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 0);
lean_dec(x_28);
x_29 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_25, 0, x_29);
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_dec(x_25);
x_31 = l_Nat_reduceUnary___lambda__1___closed__1;
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_25, 1);
lean_inc(x_33);
lean_dec(x_25);
x_34 = lean_ctor_get(x_26, 0);
lean_inc(x_34);
lean_dec(x_26);
x_35 = lean_apply_2(x_2, x_23, x_34);
x_36 = lean_unbox(x_35);
lean_dec(x_35);
x_37 = l_Lean_Meta_Simp_evalPropStep(x_1, x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_33);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_25);
if (x_38 == 0)
{
return x_25;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_25, 0);
x_40 = lean_ctor_get(x_25, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_25);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_14);
if (x_42 == 0)
{
return x_14;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_14, 0);
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_14);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBinPred(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = l_Lean_Expr_isAppOfArity(x_4, x_1, x_2);
lean_dec(x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = l_Nat_reduceUnary___lambda__1___closed__1;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l_Nat_reduceBinPred___lambda__1(x_4, x_3, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceBinPred___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Nat_reduceBinPred___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSucc___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Expr_appArg_x21(x_1);
x_12 = l_Nat_fromExpr_x3f(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = l_Nat_reduceUnary___lambda__1___closed__1;
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint32_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_12, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_13, 0);
lean_inc(x_22);
lean_dec(x_13);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_22, x_23);
lean_dec(x_22);
x_25 = l_Lean_mkNatLit(x_24);
x_26 = lean_box(0);
x_27 = 0;
x_28 = 1;
x_29 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_29, 0, x_25);
lean_ctor_set(x_29, 1, x_26);
lean_ctor_set_uint32(x_29, sizeof(void*)*2, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*2 + 4, x_28);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_12, 0, x_30);
return x_12;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint32_t x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_dec(x_12);
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
lean_dec(x_13);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_32, x_33);
lean_dec(x_32);
x_35 = l_Lean_mkNatLit(x_34);
x_36 = lean_box(0);
x_37 = 0;
x_38 = 1;
x_39 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_39, 0, x_35);
lean_ctor_set(x_39, 1, x_36);
lean_ctor_set_uint32(x_39, sizeof(void*)*2, x_37);
lean_ctor_set_uint8(x_39, sizeof(void*)*2 + 4, x_38);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_31);
return x_41;
}
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_12);
if (x_42 == 0)
{
return x_12;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_12, 0);
x_44 = lean_ctor_get(x_12, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_12);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
static lean_object* _init_l_Nat_reduceSucc___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Nat", 3);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceSucc___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("succ", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceSucc___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l_Nat_reduceSucc___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSucc(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceSucc___closed__3;
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceSucc___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSucc___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceSucc___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSucc___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_reduceSucc(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceSucc", 10);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__3;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__4;
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__5;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceSucc___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__2;
x_3 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__6;
x_4 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__7;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Simp_builtinSimprocsRef;
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__7;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Simp_builtinSEvalprocsRef;
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__7;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAdd___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint32_t x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_24, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_nat_add(x_22, x_34);
lean_dec(x_34);
lean_dec(x_22);
x_36 = l_Lean_mkNatLit(x_35);
x_37 = lean_box(0);
x_38 = 0;
x_39 = 1;
x_40 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set_uint32(x_40, sizeof(void*)*2, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*2 + 4, x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_24, 0, x_41);
return x_24;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint32_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_ctor_get(x_24, 1);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_ctor_get(x_25, 0);
lean_inc(x_43);
lean_dec(x_25);
x_44 = lean_nat_add(x_22, x_43);
lean_dec(x_43);
lean_dec(x_22);
x_45 = l_Lean_mkNatLit(x_44);
x_46 = lean_box(0);
x_47 = 0;
x_48 = 1;
x_49 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set_uint32(x_49, sizeof(void*)*2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*2 + 4, x_48);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_42);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
x_52 = !lean_is_exclusive(x_24);
if (x_52 == 0)
{
return x_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_24, 0);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_24);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_56 = !lean_is_exclusive(x_13);
if (x_56 == 0)
{
return x_13;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_13, 0);
x_58 = lean_ctor_get(x_13, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_13);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
static lean_object* _init_l_Nat_reduceAdd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("HAdd", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceAdd___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("hAdd", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceAdd___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceAdd___closed__1;
x_2 = l_Nat_reduceAdd___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceAdd___closed__3;
x_11 = lean_unsigned_to_nat(6u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceAdd___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAdd___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceAdd___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceAdd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_reduceAdd(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceAdd", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceAdd___closed__3;
x_2 = lean_unsigned_to_nat(6u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Nat_reduceSucc___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__4;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__7;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__8;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__9;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__10;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__11;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__12;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceAdd___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__2;
x_3 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__13;
x_4 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__14;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_502_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__14;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_504_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__14;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMul___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint32_t x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_24, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_nat_mul(x_22, x_34);
lean_dec(x_34);
lean_dec(x_22);
x_36 = l_Lean_mkNatLit(x_35);
x_37 = lean_box(0);
x_38 = 0;
x_39 = 1;
x_40 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set_uint32(x_40, sizeof(void*)*2, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*2 + 4, x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_24, 0, x_41);
return x_24;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint32_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_ctor_get(x_24, 1);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_ctor_get(x_25, 0);
lean_inc(x_43);
lean_dec(x_25);
x_44 = lean_nat_mul(x_22, x_43);
lean_dec(x_43);
lean_dec(x_22);
x_45 = l_Lean_mkNatLit(x_44);
x_46 = lean_box(0);
x_47 = 0;
x_48 = 1;
x_49 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set_uint32(x_49, sizeof(void*)*2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*2 + 4, x_48);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_42);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
x_52 = !lean_is_exclusive(x_24);
if (x_52 == 0)
{
return x_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_24, 0);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_24);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_56 = !lean_is_exclusive(x_13);
if (x_56 == 0)
{
return x_13;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_13, 0);
x_58 = lean_ctor_get(x_13, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_13);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
static lean_object* _init_l_Nat_reduceMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("HMul", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceMul___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("hMul", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceMul___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceMul___closed__1;
x_2 = l_Nat_reduceMul___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceMul___closed__3;
x_11 = lean_unsigned_to_nat(6u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceMul___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMul___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceMul___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_reduceMul(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceMul", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceMul___closed__3;
x_2 = lean_unsigned_to_nat(6u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6;
x_2 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__4;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__5;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__6;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__7;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__8;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__9;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceMul___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__2;
x_3 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__10;
x_4 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__11;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_542_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_544_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSub___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint32_t x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_24, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_nat_sub(x_22, x_34);
lean_dec(x_34);
lean_dec(x_22);
x_36 = l_Lean_mkNatLit(x_35);
x_37 = lean_box(0);
x_38 = 0;
x_39 = 1;
x_40 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set_uint32(x_40, sizeof(void*)*2, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*2 + 4, x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_24, 0, x_41);
return x_24;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint32_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_ctor_get(x_24, 1);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_ctor_get(x_25, 0);
lean_inc(x_43);
lean_dec(x_25);
x_44 = lean_nat_sub(x_22, x_43);
lean_dec(x_43);
lean_dec(x_22);
x_45 = l_Lean_mkNatLit(x_44);
x_46 = lean_box(0);
x_47 = 0;
x_48 = 1;
x_49 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set_uint32(x_49, sizeof(void*)*2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*2 + 4, x_48);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_42);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
x_52 = !lean_is_exclusive(x_24);
if (x_52 == 0)
{
return x_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_24, 0);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_24);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_56 = !lean_is_exclusive(x_13);
if (x_56 == 0)
{
return x_13;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_13, 0);
x_58 = lean_ctor_get(x_13, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_13);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
static lean_object* _init_l_Nat_reduceSub___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("HSub", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceSub___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("hSub", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceSub___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSub___closed__1;
x_2 = l_Nat_reduceSub___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSub(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceSub___closed__3;
x_11 = lean_unsigned_to_nat(6u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceSub___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSub___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceSub___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceSub___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_reduceSub(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceSub", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSub___closed__3;
x_2 = lean_unsigned_to_nat(6u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6;
x_2 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__4;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__5;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__6;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__7;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__8;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__9;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceSub___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__2;
x_3 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__10;
x_4 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__11;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_582_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_584_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDiv___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint32_t x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_24, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_nat_div(x_22, x_34);
lean_dec(x_34);
lean_dec(x_22);
x_36 = l_Lean_mkNatLit(x_35);
x_37 = lean_box(0);
x_38 = 0;
x_39 = 1;
x_40 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set_uint32(x_40, sizeof(void*)*2, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*2 + 4, x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_24, 0, x_41);
return x_24;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint32_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_ctor_get(x_24, 1);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_ctor_get(x_25, 0);
lean_inc(x_43);
lean_dec(x_25);
x_44 = lean_nat_div(x_22, x_43);
lean_dec(x_43);
lean_dec(x_22);
x_45 = l_Lean_mkNatLit(x_44);
x_46 = lean_box(0);
x_47 = 0;
x_48 = 1;
x_49 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set_uint32(x_49, sizeof(void*)*2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*2 + 4, x_48);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_42);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
x_52 = !lean_is_exclusive(x_24);
if (x_52 == 0)
{
return x_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_24, 0);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_24);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_56 = !lean_is_exclusive(x_13);
if (x_56 == 0)
{
return x_13;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_13, 0);
x_58 = lean_ctor_get(x_13, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_13);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
static lean_object* _init_l_Nat_reduceDiv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("HDiv", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceDiv___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("hDiv", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceDiv___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceDiv___closed__1;
x_2 = l_Nat_reduceDiv___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDiv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceDiv___closed__3;
x_11 = lean_unsigned_to_nat(6u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceDiv___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDiv___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceDiv___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceDiv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_reduceDiv(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceDiv", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceDiv___closed__3;
x_2 = lean_unsigned_to_nat(6u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6;
x_2 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__4;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__5;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__6;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__7;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__8;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__9;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceDiv___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__2;
x_3 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__10;
x_4 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__11;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_622_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_624_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMod___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint32_t x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_24, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_nat_mod(x_22, x_34);
lean_dec(x_34);
lean_dec(x_22);
x_36 = l_Lean_mkNatLit(x_35);
x_37 = lean_box(0);
x_38 = 0;
x_39 = 1;
x_40 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set_uint32(x_40, sizeof(void*)*2, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*2 + 4, x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_24, 0, x_41);
return x_24;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint32_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_ctor_get(x_24, 1);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_ctor_get(x_25, 0);
lean_inc(x_43);
lean_dec(x_25);
x_44 = lean_nat_mod(x_22, x_43);
lean_dec(x_43);
lean_dec(x_22);
x_45 = l_Lean_mkNatLit(x_44);
x_46 = lean_box(0);
x_47 = 0;
x_48 = 1;
x_49 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set_uint32(x_49, sizeof(void*)*2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*2 + 4, x_48);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_42);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
x_52 = !lean_is_exclusive(x_24);
if (x_52 == 0)
{
return x_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_24, 0);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_24);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_56 = !lean_is_exclusive(x_13);
if (x_56 == 0)
{
return x_13;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_13, 0);
x_58 = lean_ctor_get(x_13, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_13);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
static lean_object* _init_l_Nat_reduceMod___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("HMod", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceMod___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("hMod", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceMod___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceMod___closed__1;
x_2 = l_Nat_reduceMod___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMod(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceMod___closed__3;
x_11 = lean_unsigned_to_nat(6u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceMod___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMod___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceMod___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceMod___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_reduceMod(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceMod", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceMod___closed__3;
x_2 = lean_unsigned_to_nat(6u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6;
x_2 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__4;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__5;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__6;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__7;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__8;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__9;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceMod___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__2;
x_3 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__10;
x_4 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__11;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_662_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_664_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reducePow___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint32_t x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_24, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_nat_pow(x_22, x_34);
lean_dec(x_34);
lean_dec(x_22);
x_36 = l_Lean_mkNatLit(x_35);
x_37 = lean_box(0);
x_38 = 0;
x_39 = 1;
x_40 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set_uint32(x_40, sizeof(void*)*2, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*2 + 4, x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_24, 0, x_41);
return x_24;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint32_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_ctor_get(x_24, 1);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_ctor_get(x_25, 0);
lean_inc(x_43);
lean_dec(x_25);
x_44 = lean_nat_pow(x_22, x_43);
lean_dec(x_43);
lean_dec(x_22);
x_45 = l_Lean_mkNatLit(x_44);
x_46 = lean_box(0);
x_47 = 0;
x_48 = 1;
x_49 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set_uint32(x_49, sizeof(void*)*2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*2 + 4, x_48);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_42);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
x_52 = !lean_is_exclusive(x_24);
if (x_52 == 0)
{
return x_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_24, 0);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_24);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_56 = !lean_is_exclusive(x_13);
if (x_56 == 0)
{
return x_13;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_13, 0);
x_58 = lean_ctor_get(x_13, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_13);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
static lean_object* _init_l_Nat_reducePow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("HPow", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reducePow___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("hPow", 4);
return x_1;
}
}
static lean_object* _init_l_Nat_reducePow___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reducePow___closed__1;
x_2 = l_Nat_reducePow___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reducePow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reducePow___closed__3;
x_11 = lean_unsigned_to_nat(6u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reducePow___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reducePow___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reducePow___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Nat_reducePow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_reducePow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reducePow", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reducePow___closed__3;
x_2 = lean_unsigned_to_nat(6u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6;
x_2 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__4;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__5;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__6;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__7;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__8;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__9;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reducePow___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__2;
x_3 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__10;
x_4 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__11;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_702_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_704_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__11;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGcd___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint32_t x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_24, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_nat_gcd(x_22, x_34);
lean_dec(x_34);
lean_dec(x_22);
x_36 = l_Lean_mkNatLit(x_35);
x_37 = lean_box(0);
x_38 = 0;
x_39 = 1;
x_40 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set_uint32(x_40, sizeof(void*)*2, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*2 + 4, x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_24, 0, x_41);
return x_24;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint32_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_ctor_get(x_24, 1);
lean_inc(x_42);
lean_dec(x_24);
x_43 = lean_ctor_get(x_25, 0);
lean_inc(x_43);
lean_dec(x_25);
x_44 = lean_nat_gcd(x_22, x_43);
lean_dec(x_43);
lean_dec(x_22);
x_45 = l_Lean_mkNatLit(x_44);
x_46 = lean_box(0);
x_47 = 0;
x_48 = 1;
x_49 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set_uint32(x_49, sizeof(void*)*2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*2 + 4, x_48);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_42);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_22);
x_52 = !lean_is_exclusive(x_24);
if (x_52 == 0)
{
return x_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_24, 0);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_24);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_56 = !lean_is_exclusive(x_13);
if (x_56 == 0)
{
return x_13;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_13, 0);
x_58 = lean_ctor_get(x_13, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_13);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
static lean_object* _init_l_Nat_reduceGcd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("gcd", 3);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceGcd___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l_Nat_reduceGcd___closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGcd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceGcd___closed__2;
x_11 = lean_unsigned_to_nat(2u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceGcd___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGcd___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceGcd___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGcd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Nat_reduceGcd(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceGcd", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceGcd___closed__2;
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__4;
x_2 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__5;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__6;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceGcd___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__2;
x_3 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__7;
x_4 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__8;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_723_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__8;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_725_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__8;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLT___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_24, 1);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
x_34 = lean_nat_dec_lt(x_22, x_33);
lean_dec(x_33);
lean_dec(x_22);
x_35 = l_Lean_Meta_Simp_evalPropStep(x_1, x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_24);
if (x_36 == 0)
{
return x_24;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_24, 0);
x_38 = lean_ctor_get(x_24, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_24);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_13);
if (x_40 == 0)
{
return x_13;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_13, 0);
x_42 = lean_ctor_get(x_13, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_13);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l_Nat_reduceLT___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("LT", 2);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceLT___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("lt", 2);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceLT___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceLT___closed__1;
x_2 = l_Nat_reduceLT___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLT(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceLT___closed__3;
x_11 = lean_unsigned_to_nat(4u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceLT___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLT___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceLT___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceLT", 8);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceLT___closed__3;
x_2 = lean_unsigned_to_nat(4u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__4;
x_2 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__5;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__6;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__7;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__8;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceLT), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__2;
x_3 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__9;
x_4 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__10;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_764_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__10;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_766_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__10;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLE___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_24, 1);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
x_34 = lean_nat_dec_le(x_22, x_33);
lean_dec(x_33);
lean_dec(x_22);
x_35 = l_Lean_Meta_Simp_evalPropStep(x_1, x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_24);
if (x_36 == 0)
{
return x_24;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_24, 0);
x_38 = lean_ctor_get(x_24, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_24);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_13);
if (x_40 == 0)
{
return x_13;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_13, 0);
x_42 = lean_ctor_get(x_13, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_13);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l_Nat_reduceLE___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("LE", 2);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceLE___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("le", 2);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceLE___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceLE___closed__1;
x_2 = l_Nat_reduceLE___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLE(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceLE___closed__3;
x_11 = lean_unsigned_to_nat(4u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceLE___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceLE___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceLE___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceLE", 8);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceLE___closed__3;
x_2 = lean_unsigned_to_nat(4u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__4;
x_2 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__4;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__5;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__6;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__7;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceLE), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__2;
x_3 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__8;
x_4 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__9;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_805_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__9;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_807_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__9;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGT___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_24, 1);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
x_34 = lean_nat_dec_lt(x_33, x_22);
lean_dec(x_22);
lean_dec(x_33);
x_35 = l_Lean_Meta_Simp_evalPropStep(x_1, x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_24);
if (x_36 == 0)
{
return x_24;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_24, 0);
x_38 = lean_ctor_get(x_24, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_24);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_13);
if (x_40 == 0)
{
return x_13;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_13, 0);
x_42 = lean_ctor_get(x_13, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_13);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l_Nat_reduceGT___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("GT", 2);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceGT___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("gt", 2);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceGT___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceGT___closed__1;
x_2 = l_Nat_reduceGT___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGT(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceGT___closed__3;
x_11 = lean_unsigned_to_nat(4u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceGT___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGT___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceGT___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceGT", 8);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceGT), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__2;
x_3 = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__9;
x_4 = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__3;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_846_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__3;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_848_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__3;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGE___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Expr_appFn_x21(x_1);
x_12 = l_Lean_Expr_appArg_x21(x_11);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Nat_fromExpr_x3f(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Nat_reduceUnary___lambda__1___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l_Lean_Expr_appArg_x21(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_24 = l_Nat_fromExpr_x3f(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = l_Nat_reduceUnary___lambda__1___closed__1;
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = l_Nat_reduceUnary___lambda__1___closed__1;
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_24, 1);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
x_34 = lean_nat_dec_le(x_33, x_22);
lean_dec(x_22);
lean_dec(x_33);
x_35 = l_Lean_Meta_Simp_evalPropStep(x_1, x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_24);
if (x_36 == 0)
{
return x_24;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_24, 0);
x_38 = lean_ctor_get(x_24, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_24);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_13);
if (x_40 == 0)
{
return x_13;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_13, 0);
x_42 = lean_ctor_get(x_13, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_13);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l_Nat_reduceGE___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("GE", 2);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceGE___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ge", 2);
return x_1;
}
}
static lean_object* _init_l_Nat_reduceGE___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceGE___closed__1;
x_2 = l_Nat_reduceGE___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGE(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_reduceGE___closed__3;
x_11 = lean_unsigned_to_nat(4u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_reduceGE___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_reduceGE___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_reduceGE___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("reduceGE", 8);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_reduceGE), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__2;
x_3 = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__8;
x_4 = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__3;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_887_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1;
x_3 = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__3;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_889_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__3;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_isValue___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint32_t x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_box(0);
x_12 = 0;
x_13 = 1;
x_14 = lean_alloc_ctor(0, 2, 5);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set_uint32(x_14, sizeof(void*)*2, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 4, x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_10);
return x_16;
}
}
static lean_object* _init_l_Nat_isValue___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("OfNat", 5);
return x_1;
}
}
static lean_object* _init_l_Nat_isValue___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ofNat", 5);
return x_1;
}
}
static lean_object* _init_l_Nat_isValue___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_isValue___closed__1;
x_2 = l_Nat_isValue___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_isValue(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Nat_isValue___closed__3;
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Expr_isAppOfArity(x_1, x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Nat_reduceUnary___lambda__1___closed__1;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Nat_isValue___lambda__1(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Nat_isValue___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_isValue___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("isValue", 7);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_reduceSucc___closed__1;
x_2 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__1;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_isValue___closed__3;
x_2 = lean_unsigned_to_nat(3u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__4;
x_2 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__5;
x_2 = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__6;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__7;
x_2 = lean_box(3);
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_isValue), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__2;
x_3 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__8;
x_4 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__9;
x_5 = l_Lean_Meta_Simp_registerBuiltinSimproc(x_2, x_3, x_4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_961_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1;
x_3 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__2;
x_4 = 1;
x_5 = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__9;
x_6 = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Offset(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Offset(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Simproc(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_reduceUnary___lambda__1___closed__1 = _init_l_Nat_reduceUnary___lambda__1___closed__1();
lean_mark_persistent(l_Nat_reduceUnary___lambda__1___closed__1);
l_Nat_reduceSucc___closed__1 = _init_l_Nat_reduceSucc___closed__1();
lean_mark_persistent(l_Nat_reduceSucc___closed__1);
l_Nat_reduceSucc___closed__2 = _init_l_Nat_reduceSucc___closed__2();
lean_mark_persistent(l_Nat_reduceSucc___closed__2);
l_Nat_reduceSucc___closed__3 = _init_l_Nat_reduceSucc___closed__3();
lean_mark_persistent(l_Nat_reduceSucc___closed__3);
l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__1 = _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__1);
l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__2 = _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__2);
l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__3 = _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__3);
l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__4 = _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__4);
l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__5 = _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__5);
l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__6 = _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__6);
l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__7 = _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460____closed__7);
if (builtin) {res = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_460_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1 = _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462____closed__1);
if (builtin) {res = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_462_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1 = _init_l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464____closed__1);
if (builtin) {res = l___regBuiltin_Nat_reduceSucc_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_464_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceAdd___closed__1 = _init_l_Nat_reduceAdd___closed__1();
lean_mark_persistent(l_Nat_reduceAdd___closed__1);
l_Nat_reduceAdd___closed__2 = _init_l_Nat_reduceAdd___closed__2();
lean_mark_persistent(l_Nat_reduceAdd___closed__2);
l_Nat_reduceAdd___closed__3 = _init_l_Nat_reduceAdd___closed__3();
lean_mark_persistent(l_Nat_reduceAdd___closed__3);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__1 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__1);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__2 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__2);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__3 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__3);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__4 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__4);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__5);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__6);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__7 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__7);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__8 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__8);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__9 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__9();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__9);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__10 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__10();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__10);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__11 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__11();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__11);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__12 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__12();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__12);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__13 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__13();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__13);
l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__14 = _init_l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__14();
lean_mark_persistent(l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500____closed__14);
if (builtin) {res = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_500_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_502_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceAdd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_504_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceMul___closed__1 = _init_l_Nat_reduceMul___closed__1();
lean_mark_persistent(l_Nat_reduceMul___closed__1);
l_Nat_reduceMul___closed__2 = _init_l_Nat_reduceMul___closed__2();
lean_mark_persistent(l_Nat_reduceMul___closed__2);
l_Nat_reduceMul___closed__3 = _init_l_Nat_reduceMul___closed__3();
lean_mark_persistent(l_Nat_reduceMul___closed__3);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__1 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__1);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__2 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__2);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__3 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__3);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__4 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__4);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__5 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__5);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__6 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__6);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__7 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__7);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__8 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__8);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__9 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__9();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__9);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__10 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__10();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__10);
l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__11 = _init_l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__11();
lean_mark_persistent(l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540____closed__11);
if (builtin) {res = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_540_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_542_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceMul_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_544_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceSub___closed__1 = _init_l_Nat_reduceSub___closed__1();
lean_mark_persistent(l_Nat_reduceSub___closed__1);
l_Nat_reduceSub___closed__2 = _init_l_Nat_reduceSub___closed__2();
lean_mark_persistent(l_Nat_reduceSub___closed__2);
l_Nat_reduceSub___closed__3 = _init_l_Nat_reduceSub___closed__3();
lean_mark_persistent(l_Nat_reduceSub___closed__3);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__1 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__1);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__2 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__2);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__3 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__3);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__4 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__4);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__5 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__5);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__6 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__6);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__7 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__7);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__8 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__8);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__9 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__9();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__9);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__10 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__10();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__10);
l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__11 = _init_l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__11();
lean_mark_persistent(l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580____closed__11);
if (builtin) {res = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_580_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_582_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceSub_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_584_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceDiv___closed__1 = _init_l_Nat_reduceDiv___closed__1();
lean_mark_persistent(l_Nat_reduceDiv___closed__1);
l_Nat_reduceDiv___closed__2 = _init_l_Nat_reduceDiv___closed__2();
lean_mark_persistent(l_Nat_reduceDiv___closed__2);
l_Nat_reduceDiv___closed__3 = _init_l_Nat_reduceDiv___closed__3();
lean_mark_persistent(l_Nat_reduceDiv___closed__3);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__1 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__1);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__2 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__2);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__3 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__3);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__4 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__4);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__5 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__5);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__6 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__6);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__7 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__7);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__8 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__8);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__9 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__9();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__9);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__10 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__10();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__10);
l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__11 = _init_l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__11();
lean_mark_persistent(l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620____closed__11);
if (builtin) {res = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_620_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_622_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceDiv_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_624_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceMod___closed__1 = _init_l_Nat_reduceMod___closed__1();
lean_mark_persistent(l_Nat_reduceMod___closed__1);
l_Nat_reduceMod___closed__2 = _init_l_Nat_reduceMod___closed__2();
lean_mark_persistent(l_Nat_reduceMod___closed__2);
l_Nat_reduceMod___closed__3 = _init_l_Nat_reduceMod___closed__3();
lean_mark_persistent(l_Nat_reduceMod___closed__3);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__1 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__1);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__2 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__2);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__3 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__3);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__4 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__4);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__5 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__5);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__6 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__6);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__7 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__7);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__8 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__8);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__9 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__9();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__9);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__10 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__10();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__10);
l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__11 = _init_l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__11();
lean_mark_persistent(l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660____closed__11);
if (builtin) {res = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_660_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_662_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceMod_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_664_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reducePow___closed__1 = _init_l_Nat_reducePow___closed__1();
lean_mark_persistent(l_Nat_reducePow___closed__1);
l_Nat_reducePow___closed__2 = _init_l_Nat_reducePow___closed__2();
lean_mark_persistent(l_Nat_reducePow___closed__2);
l_Nat_reducePow___closed__3 = _init_l_Nat_reducePow___closed__3();
lean_mark_persistent(l_Nat_reducePow___closed__3);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__1 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__1);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__2 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__2);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__3 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__3);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__4 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__4);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__5 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__5);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__6 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__6);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__7 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__7);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__8 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__8);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__9 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__9();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__9);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__10 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__10();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__10);
l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__11 = _init_l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__11();
lean_mark_persistent(l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700____closed__11);
if (builtin) {res = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_700_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_702_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reducePow_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_704_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceGcd___closed__1 = _init_l_Nat_reduceGcd___closed__1();
lean_mark_persistent(l_Nat_reduceGcd___closed__1);
l_Nat_reduceGcd___closed__2 = _init_l_Nat_reduceGcd___closed__2();
lean_mark_persistent(l_Nat_reduceGcd___closed__2);
l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__1 = _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__1);
l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__2 = _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__2);
l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__3 = _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__3);
l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__4 = _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__4);
l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__5 = _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__5);
l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__6 = _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__6);
l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__7 = _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__7);
l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__8 = _init_l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721____closed__8);
if (builtin) {res = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_721_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_723_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceGcd_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_725_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceLT___closed__1 = _init_l_Nat_reduceLT___closed__1();
lean_mark_persistent(l_Nat_reduceLT___closed__1);
l_Nat_reduceLT___closed__2 = _init_l_Nat_reduceLT___closed__2();
lean_mark_persistent(l_Nat_reduceLT___closed__2);
l_Nat_reduceLT___closed__3 = _init_l_Nat_reduceLT___closed__3();
lean_mark_persistent(l_Nat_reduceLT___closed__3);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__1 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__1);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__2 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__2);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__3 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__3);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__4 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__4);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__5 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__5);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__6 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__6);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__7 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__7);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__8 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__8);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__9 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__9();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__9);
l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__10 = _init_l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__10();
lean_mark_persistent(l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762____closed__10);
if (builtin) {res = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_762_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_764_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceLT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_766_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceLE___closed__1 = _init_l_Nat_reduceLE___closed__1();
lean_mark_persistent(l_Nat_reduceLE___closed__1);
l_Nat_reduceLE___closed__2 = _init_l_Nat_reduceLE___closed__2();
lean_mark_persistent(l_Nat_reduceLE___closed__2);
l_Nat_reduceLE___closed__3 = _init_l_Nat_reduceLE___closed__3();
lean_mark_persistent(l_Nat_reduceLE___closed__3);
l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__1 = _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__1);
l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__2 = _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__2);
l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__3 = _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__3);
l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__4 = _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__4);
l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__5 = _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__5);
l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__6 = _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__6);
l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__7 = _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__7);
l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__8 = _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__8);
l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__9 = _init_l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__9();
lean_mark_persistent(l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803____closed__9);
if (builtin) {res = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_803_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_805_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceLE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_807_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceGT___closed__1 = _init_l_Nat_reduceGT___closed__1();
lean_mark_persistent(l_Nat_reduceGT___closed__1);
l_Nat_reduceGT___closed__2 = _init_l_Nat_reduceGT___closed__2();
lean_mark_persistent(l_Nat_reduceGT___closed__2);
l_Nat_reduceGT___closed__3 = _init_l_Nat_reduceGT___closed__3();
lean_mark_persistent(l_Nat_reduceGT___closed__3);
l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__1 = _init_l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__1);
l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__2 = _init_l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__2);
l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__3 = _init_l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844____closed__3);
if (builtin) {res = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_844_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_846_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceGT_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_848_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_reduceGE___closed__1 = _init_l_Nat_reduceGE___closed__1();
lean_mark_persistent(l_Nat_reduceGE___closed__1);
l_Nat_reduceGE___closed__2 = _init_l_Nat_reduceGE___closed__2();
lean_mark_persistent(l_Nat_reduceGE___closed__2);
l_Nat_reduceGE___closed__3 = _init_l_Nat_reduceGE___closed__3();
lean_mark_persistent(l_Nat_reduceGE___closed__3);
l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__1 = _init_l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__1);
l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__2 = _init_l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__2);
l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__3 = _init_l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885____closed__3);
if (builtin) {res = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_885_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_887_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_reduceGE_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_889_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Nat_isValue___closed__1 = _init_l_Nat_isValue___closed__1();
lean_mark_persistent(l_Nat_isValue___closed__1);
l_Nat_isValue___closed__2 = _init_l_Nat_isValue___closed__2();
lean_mark_persistent(l_Nat_isValue___closed__2);
l_Nat_isValue___closed__3 = _init_l_Nat_isValue___closed__3();
lean_mark_persistent(l_Nat_isValue___closed__3);
l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__1 = _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__1();
lean_mark_persistent(l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__1);
l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__2 = _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__2();
lean_mark_persistent(l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__2);
l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__3 = _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__3();
lean_mark_persistent(l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__3);
l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__4 = _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__4();
lean_mark_persistent(l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__4);
l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__5 = _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__5();
lean_mark_persistent(l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__5);
l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__6 = _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__6();
lean_mark_persistent(l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__6);
l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__7 = _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__7();
lean_mark_persistent(l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__7);
l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__8 = _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__8();
lean_mark_persistent(l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__8);
l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__9 = _init_l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__9();
lean_mark_persistent(l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959____closed__9);
if (builtin) {res = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_959_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}if (builtin) {res = l___regBuiltin_Nat_isValue_declare____x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Nat___hyg_961_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
