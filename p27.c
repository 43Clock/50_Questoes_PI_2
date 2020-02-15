LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

LInt parte (LInt l){
    LInt res = NULL,ant = NULL,novo = NULL,aux,fim;
    for (; l != NULL;l = l ->prox) {
        if (l -> valor%2 == 0) {
            if (res == NULL) {
                res = newLInt (l->valor,res);
                fim = res;
            }
            else {
                novo = (LInt) malloc (sizeof (struct lligada));
                novo -> valor = l-> valor;
                aux = fim -> prox;
                fim -> prox = novo;
                novo -> prox = aux;
                fim = novo;
            }
            ant -> prox = l-> prox;
        }
        else ant = l;
    }
    return res;
}