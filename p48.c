void removeMaiorA (ABin *a) {
    ABin i = *a, ant = NULL;
    while (i->dir != NULL) {
        ant = i;
        i = i -> dir;
    }
    if (ant == NULL) *a = i-> esq;
    else ant -> dir = i -> esq;
}