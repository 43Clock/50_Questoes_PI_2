#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

LInt arrayToList (int v[], int N){
    LInt nova = NULL,aux;
    int i;
    for (i = 0;i<N;i++) {
        if (nova == NULL) {
            nova = newLInt(v[i],NULL);
            aux = nova;
        }
        else {
            aux -> prox = newLInt(v[i],NULL);
            aux = aux->prox;
        }
    }
    return nova;
}