int maximo (int a,int b) {
    if (a>b) return a;
    else return b;
}

int altura (ABin a){
    int res = 0;
    if (a == NULL) return 0;
    else res = 1 + maximo(altura(a->esq),altura(a->dir));
	return res;
}

