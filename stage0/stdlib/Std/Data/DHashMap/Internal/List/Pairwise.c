// Lean compiler output
// Module: Std.Data.DHashMap.Internal.List.Pairwise
// Imports: Init.Data.List.Perm Std.Data.DHashMap.Internal.List.Defs Std.Data.DHashMap.Internal.List.Sublist
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
lean_object* initialize_Init_Data_List_Perm(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Data_DHashMap_Internal_List_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Data_DHashMap_Internal_List_Sublist(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Data_DHashMap_Internal_List_Pairwise(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_List_Perm(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_DHashMap_Internal_List_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_DHashMap_Internal_List_Sublist(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
