void mirror (ABin *a) {
    if ((*a)!= NULL) {
    ABin dir = (*a) ->dir;
    ABin esq = (*a) ->esq;
    (*a) -> dir = esq;
    (*a) -> esq = dir;
    mirror (&(*a) -> dir);
    mirror (&(*a) -> esq);
    }
}