#include <stdio.h>
#include <stdlib.h>

LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

int length (LInt l){
    int r = 1;
    if (l == NULL) return 0;
    while (l->prox != NULL) {
        r++;
        l = l->prox;
    }
    return r;
}