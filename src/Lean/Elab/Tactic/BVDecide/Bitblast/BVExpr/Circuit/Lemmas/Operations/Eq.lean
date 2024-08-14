/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
prelude
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Basic
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Eq

/-!
This module contains the verification of the `BitVec` equality bitblaster from `Impl.Operations.Eq`.
-/

namespace Lean.Elab.Tactic.BVDecide

open Std.Sat
open Std.Sat.AIG

namespace BVPred

variable [Hashable α] [DecidableEq α]

theorem mkEq_denote_eq (aig : AIG α) (pair : AIG.BinaryRefVec aig w) (assign : α → Bool)
    (lhs rhs : BitVec w)
    (hleft : ∀ (idx : Nat) (hidx : idx < w), ⟦aig, pair.lhs.get idx hidx, assign⟧ = lhs.getLsb idx)
    (hright : ∀ (idx : Nat) (hidx : idx < w), ⟦aig, pair.rhs.get idx hidx, assign⟧ = rhs.getLsb idx) :
    ⟦mkEq aig pair, assign⟧ = (lhs == rhs) := by
  unfold mkEq
  rw [Bool.eq_iff_iff]
  simp only [RefVec.denote_fold_and, RefVec.denote_zip, denote_mkBEqCached, beq_iff_eq]
  constructor
  · intro h
    ext
    rw [← hleft, ← hright]
    · simp [h]
    · omega
    · omega
  · intro h idx hidx
    rw [hleft, hright]
    simp [h]

end BVPred

end Lean.Elab.Tactic.BVDecide
