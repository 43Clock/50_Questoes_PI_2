int listToArray (LInt l, int v[], int N){
    int i;
    for (i = 0;i<N && l!= NULL;i++,l = l->prox)
        v[i] = l->valor;
    return i;
}