int freeAB (ABin a) {
    int r = 0;
    if (!a) return 0;
    r = 1 + freeAB(a->esq) + freeAB(a->dir);
    free(a);
    return r;
}
