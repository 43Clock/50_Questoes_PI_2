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

void splitQS (LInt l, int x, LInt *mx, LInt *Mx){
    LInt menores = NULL,maiores = NULL;
    while (l != NULL) {
        if (l->valor< x) {
            if (*mx == NULL) {
                *mx = l;
                l = l->prox;
                menores = *mx;
            }
            else {
                menores -> prox = l;
                menores = menores -> prox;
                l = l-> prox;
            }
            menores -> prox = NULL;
        }
        else {
            if (*Mx == NULL) {
                *Mx = l;
                l = l->prox;
                maiores = *Mx;
            }
            else {
                maiores -> prox = l;
                maiores = maiores -> prox;
                l = l-> prox;
            }
            maiores -> prox = NULL;
        }
    }
} //Tentar perceber melhor.