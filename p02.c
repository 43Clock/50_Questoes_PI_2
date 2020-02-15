#include <stdio.h>
#include <stdlib.h>

void freeL (LInt) {
	Lint prox = l->prox;
	while (l->prox != NULL) {
		free(l);
		l = prox;
		prox = l->prox;
	}
	free(l);
}