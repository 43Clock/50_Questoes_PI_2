int maximo (LInt l){
    int r = l -> valor;
    while (l != NULL){
        if (l->valor >r) r = l->valor;
        l = l->prox;
    }
    return r;
}