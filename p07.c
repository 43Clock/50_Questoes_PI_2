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

void merge (LInt *r, LInt l1, LInt l2){
    LInt aux = *r;
    if (l1 == NULL) *r = l2;
    else if (l2 == NULL) *r = l1;
    else {
        if (l1->valor > l2->valor) {    // vai definir onde o r começa
            aux = *r = l2;
            l2 = l2->prox;
        }
        else {
            aux =  *r= l1;
            l1 = l1 -> prox;
            }
            
        while (l1 != NULL && l2 != NULL) {
        if (l1->valor > l2->valor) {
            aux ->prox = l2;
            l2 = l2->prox;
        }
        else {
            aux ->prox = l1;
            l1 = l1 -> prox;
            }
            aux = aux->prox;
        }
        if (l1 == NULL) aux->prox = l2;
        else if (l2 == NULL) aux->prox = l1;
        else aux->prox = NULL;
        }
} // Tentar perceber melhor(aka fazer o desenho)