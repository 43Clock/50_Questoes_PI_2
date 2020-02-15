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

void appendL (LInt *l, int x){
    LInt aux = *l;
    LInt novo = newLInt (x,NULL);
    if (*l == NULL) *l = novo;
    else  {
        while (aux -> prox != NULL) 
        aux = aux -> prox;
        aux -> prox = novo;
    }
}