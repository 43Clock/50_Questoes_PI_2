 int pruneAB (ABin *a, int l) {
     int r = 0;
     if (*a == NULL) return 0;
     if (l == 0) {
         r = 1+pruneAB(&(*a)->dir,0)+pruneAB(&(*a)->esq,0);
         free(*a);
         *a = NULL;
         return r;
         
     }
     else return pruneAB(&(*a)->dir,l-1)+pruneAB(&(*a)->esq,l-1);
 }