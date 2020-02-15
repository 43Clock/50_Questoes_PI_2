int lookupAB (ABin a, int x) {
    if (a == NULL) return 0;
    while (a){
        if (a -> valor == x) return 1;
        if (x > a-> valor) a = a -> dir;
        else a = a -> esq;
    }
    return 0;
}

