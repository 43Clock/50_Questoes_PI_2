LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void insertOrd (LInt *l, int x){
    while ((*l)  != NULL && (*l)->valor < x){
    l = &(*l) ->prox;
    }
    *l = newLInt(x,*l);
} // Morte aos apontadores