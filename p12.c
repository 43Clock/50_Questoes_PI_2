int removeMaiorL (LInt *l){
    LInt aux = *l;
    LInt ant = NULL;
    int r = -1;
    int a = 0;
    while (aux != NULL) {
        if (aux  -> valor > r) r = aux -> valor;
        aux = aux->prox;
    }
    aux = *l;
    while (aux != NULL && a == 0) {
        if (aux -> valor == r ) {
            if (ant == NULL) {
                *l = (*l) -> prox;
                aux = *l;
            }
            else {
                ant -> prox = aux -> prox;
                aux = aux -> prox;
            }
            a++;
        }
        else {
            ant = aux;
            aux = aux -> prox;
        }
    }
    return r;
}