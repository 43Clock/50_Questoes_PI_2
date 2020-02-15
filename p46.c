int depthOrd (ABin a, int x) {
    int r = 1;
    if (a == NULL) return -1;
    while (a) {
        if (a-> valor == x) return r;
        if (x > a -> valor) a = a-> dir;
        else a = a -> esq;
        r++;
    }
    return -1;
}