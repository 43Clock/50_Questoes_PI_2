int depth (ABin a, int x) {
    int r = 0;
    if (!a) return -1;
    if (a -> valor == x) return 1;
    else {
        int v,w;
        v = depth(a->dir,x);
        w = depth(a->esq,x);
        if (v > 0 && w>0) {
        if (v>w) return 1+w;
        else return 1+v;
        }
        else if (v > 0)
            return 1 + v;
        else if (w > 0)
            return 1 + w;
        else
            return v;
    }
}