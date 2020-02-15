int addOrd (ABin *a, int x) {
    ABin i, novo,ant = NULL;
    i = *a;
    novo = malloc(sizeof(ABin));
    novo -> valor = x;
    novo -> esq = novo -> dir = NULL;
    while (i) {
        if (i-> valor == x) return 1;
        ant = i;
        if (x<i->valor) i = i->esq;
        else i = i ->dir;
    }
    if (ant == NULL) *a = novo;
    else if (x>ant -> valor) ant -> dir = novo;
    else ant -> esq = novo;
    return 0;
}