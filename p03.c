#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;

void imprimeL (LInt l) {
	while (l->prox != NULL) {
		printf("%d\n",l->valor);
		l = l->prox;
	}
	printf("%d\n",l->valor);
}

int main(){
    LInt l = (LInt) malloc(sizeof(LInt));
    LInt start = l;
    l -> valor = 1;
    LInt ls = (LInt) malloc(sizeof(LInt));
    l->prox= ls;
    ls->valor = 2;
    ls->prox = NULL;
    imprimeL(start);
}