LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

LInt reverseL (LInt l){
    if (l == NULL || l -> prox == NULL) return l;
    LInt act = l->prox;
    LInt ant = l;
    ant ->prox = NULL; 
    LInt prx = l->prox;
    while (act ->prox != NULL) {
        prx = act->prox;
        act ->prox = ant;
        ant = act;
        act = prx;
    }
    act ->prox = ant;
    return act;
}