LInt rotateL (LInt l){
    if (l == NULL || l -> prox == NULL) return l;
    
    LInt start = l;
    LInt segundo = l->prox;
    while (l->prox != NULL) {
        l = l-> prox;
    }
    l -> prox = start;
    start -> prox = NULL;
    return segundo;
}