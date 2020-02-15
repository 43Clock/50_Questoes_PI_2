void init (LInt *l){
    LInt ant = NULL;
    LInt aux = *l;
    if (aux -> prox == NULL) {
        *l = NULL;
        free(*l);
    }
    else {
        while (aux -> prox != NULL) {
        ant = aux;
        aux = aux -> prox;
    }
    free (aux);
    ant -> prox = NULL;
    }
}