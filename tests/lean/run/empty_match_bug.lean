open nat

inductive fin : nat → Type :=
| fz : Π n, fin (succ n)
| fs : Π {n}, fin n → fin (succ n)

open fin

definition case0 {C : fin zero → Type} (f : fin zero) : C f :=
match f with
end
