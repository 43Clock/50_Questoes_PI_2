LInt parteAmeio (LInt *l){
    LInt y = NULL, res = NULL,aux;
    int tamanho = 0;
    for (aux = *l;aux != NULL;aux = aux->prox,tamanho++);
    tamanho = tamanho /2;
    while (tamanho > 0) {
        if (y == NULL) {
            y = (*l);
            (*l) = (*l)-> prox;
            res = y;
        }
        else {
            y -> prox = (*l);
            (*l) = (*l)-> prox;
            y = y-> prox;
        }
        y -> prox = NULL;
        tamanho--;
    }
    return res;
} //Tentar perceber.