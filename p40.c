int dumpAbin (ABin a, int v[], int N) {
    int r = 0;
    if (a) {
    	r = dumpAbin (a->esq,v,N);
    	if ((N-r)>0){
    		r++;
    		v[r] = a -> valor;
    		r+=  dumpAbin(a->dir,v+r,N-r);
    	}
    }
    return r;
}