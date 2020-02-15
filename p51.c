int deProcura (ABin a) {
    if (!a) return 1;
    if(a->esq != NULL && (a->esq->valor > a->valor || a->esq->dir != NULL && a->esq->dir->valor > a->valor))
            return 0;
    if(a->dir != NULL && (a->dir->valor <= a->valor|| a->dir->esq != NULL && a->dir->esq->valor <= a->valor))
            return 0;
    return deProcura(a->esq) && deProcura(a->dir);
}