int removeAll (LInt *l, int x){
    int r = 0;
    if (*l == NULL ) return 0;
    LInt aux = *l;
    LInt ant = NULL;
    while (aux != NULL) {
        if (aux -> valor == x ) {
            if (ant == NULL) {
                *l = (*l) -> prox;
                aux = *l;
            }
            else {
                ant -> prox = aux -> prox;
                aux = aux -> prox;
            }
            r++;
        }
        else {
            ant = aux;
            aux = aux -> prox;
        }
    }
    //ant -> prox = NULL;
    return r;
} 