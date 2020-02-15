ABin cloneMirror (ABin a) {
    if (a == NULL) return NULL;
    ABin aux = malloc(sizeof(ABin));
    aux -> valor = a -> valor;
    aux -> esq = cloneMirror (a -> dir);
    aux -> dir = cloneMirror (a -> esq);
    return aux;
}