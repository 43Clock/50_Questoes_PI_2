void inorder (ABin a, LInt * l) {
    LInt aux;
    if (a) {
        inorder(a -> dir,l);
        aux = malloc(sizeof(LInt));
        aux -> valor  = a->valor;
        aux -> prox = *l;
        inorder(a->esq,&aux);
        *l = aux;
    }
}