#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

void imprimeL (LInt l) {
	printf("[");
	while (l->prox != NULL) {
		printf("%d,",l->valor);
		l = l->prox;
	}
	printf("%d]\n",l->valor);
}

LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

LInt clone (LInt l) {
	LInt r = NULL,ultimo;
	if (l!= NULL) {
		ultimo = r = malloc(sizeof(LInt));
		r -> valor = l->valor;
		l = l-> prox;
	while (l != NULL) {
		ultimo -> prox = malloc(sizeof(LInt));
		ultimo = ultimo -> prox;
		ultimo -> valor = l -> valor;
		l = l-> prox;
	}
	ultimo -> prox = NULL;
	}
	return r;
}

int main() {
	LInt l = newLInt(1,newLInt(2,newLInt(3,newLInt(43,NULL))));
	imprimeL(clone (l));

}

// TENTAR PERCEBER MELHOR