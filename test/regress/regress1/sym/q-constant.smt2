; COMMAND-LINE: --symmetry-breaker-exp
(set-logic ALL)
(set-info :status unsat)
(declare-fun f (Int) Int)
(declare-fun g (Int) Int)
(declare-fun a () Int)
(declare-fun b () Int)
(declare-fun c () Int)
(declare-fun P (Int) Bool)
(declare-fun Q (Int) Bool)
(declare-fun R (Int Int) Bool)

(assert (or (forall ((x Int)) (R x a)) (forall ((x Int)) (R x b))))
(assert (not (R c a)))
(assert (not (R c b)))

(check-sat)
