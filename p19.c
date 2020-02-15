int take (int n, LInt *l){
    LInt aux = *l,ant = NULL;
    int length,res;
    for (length = 0; aux!=NULL; aux = aux->prox,length++);
    aux = *l;
    if (length > n) {
        res = n;
        while (n>0) {
            ant = aux;
            aux = aux-> prox;
            n--;
        }
        while (aux != NULL) {
            ant ->prox = NULL;
            ant = aux;
            aux = aux->prox;
            free(ant);
            }
        }
    else res = length;
    return res;
}