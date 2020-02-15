int iguaisAB (ABin a, ABin b) {
    if (a == b) return 1;
    if (a && b && a-> valor == b -> valor) return iguaisAB(a->dir,b->dir) && iguaisAB(a->esq,b->esq);
    else return 0;
} //Try to perceber