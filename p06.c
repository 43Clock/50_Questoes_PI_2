#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int removeOneOrd (LInt *l, int x){
    int r = 0;
    LInt aux = *l,ant = NULL;
    
    while (aux != NULL && aux->valor != x) {
        ant = aux;
        aux = aux->prox;
    }
    
    if (aux == NULL) 
        r = 1;
    else if (ant == NULL) // caso em que o primeiro da lista é o x
     *l = (*l)->prox;
    else 
        ant -> prox = aux -> prox;
        
    return r;
}
