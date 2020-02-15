int drop (int n, LInt *l){
    LInt aux = *l,ant = NULL;
    int length,res;
    for (length = 0; aux!=NULL; aux = aux->prox,length++);
    aux = *l;
    if (n>length) res = length;
    else res = n;
    while (*l != NULL && n != 0) {
        ant = *l;
        (*l) = (*l) ->prox;
        free(ant);
        n--;
    }
    return res;
}