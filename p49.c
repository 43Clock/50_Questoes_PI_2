int quantosMaiores (ABin a, int x) {
    int r = 0;
    if (a == NULL) return 0;
    if (x<a-> valor) r += 1+ quantosMaiores(a->esq,x) + quantosMaiores(a->dir,x);
    else r += quantosMaiores(a->dir,x);
    return r;
}