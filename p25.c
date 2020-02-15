void remreps (LInt l){
    LInt percorre = l,aux = l,ant = NULL;
    int comp  = 0;
    while (aux != NULL) {
        percorre = aux;
        ant = percorre;
        percorre = percorre -> prox;
        while (percorre != NULL) {
        if (percorre -> valor != aux -> valor) {
            ant = percorre;
            percorre = percorre -> prox;
        }
        else {
            ant -> prox = percorre -> prox;
            free(percorre);
            percorre = percorre -> prox;
        }
    }
    aux = aux -> prox;
    }
}