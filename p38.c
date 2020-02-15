LInt nivelL(ABin a, int n) {

  LInt aux, aux2, tmp;
  if (!a) return NULL;
  if (n == 1) {
    aux = malloc(sizeof(LInt));
    aux - > valor = a - > valor;
    aux - > prox = NULL;
    return aux;
  } else {
    aux = nivelL(a - > esq, n - 1);
    aux2 = nivelL(a - > dir, n - 1);
    tmp = aux;
    if (aux != NULL) {
      for (; aux - > prox != NULL; aux = aux - > prox);
      aux - > prox = aux2;
      aux = tmp;
      return aux;
    } else return aux2;
  }
}