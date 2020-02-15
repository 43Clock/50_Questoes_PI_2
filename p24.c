LInt somasAcL (LInt l) {
    LInt nova = NULL,aux = l;
    int soma = 0;
    while (l != NULL) {
        if (nova == NULL)  {
            nova = newLInt (l->valor,NULL);
            soma = l -> valor;
            aux = nova;
        }
        else {
            aux -> prox = newLInt (soma + l ->valor,NULL);
            soma = soma  + l ->valor;
            aux = aux -> prox;
            }
            l = l-> prox;
    }
    return nova;
}