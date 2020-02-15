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

LInt clone (LInt l) {
	LInt r = NULL,ultimo;
	if (l!= NULL) {
		ultimo = r = malloc(sizeof(LInt));
		r -> valor = l->valor;
		l = l-> prox;
	while (l != NULL) {
		ultimo -> prox = malloc(sizeof(LInt));
		ultimo = ultimo -> prox;
		ultimo -> valor = l -> valor;
		l = l-> prox;
	}
	ultimo -> prox = NULL;
	}
	return r;
}

LInt cloneRev (LInt l){
    return clone(reverseL (l));
} //!!!!!!!!!!!!