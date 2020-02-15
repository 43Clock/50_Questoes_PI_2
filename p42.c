int contaFolhas (ABin a) {
    if (a == NULL) return 0;
    if (a -> dir == NULL && a -> esq == NULL) return 1;
    else return contaFolhas(a->dir) + contaFolhas(a -> esq);
}