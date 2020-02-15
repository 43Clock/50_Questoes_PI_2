ABin somasAcA (ABin a) {
    if (a == NULL) return NULL;
    else {
        ABin aux1 = somasAcA (a->esq);
        ABin aux2 = somasAcA (a->dir);
        
        ABin res = malloc(sizeof(ABin));
         
        int x = 0, y = 0;
        if (aux1 != NULL)
            x = aux1->valor;
        if (aux2 != NULL)
            y = aux2->valor;
            
        res -> valor = a-> valor + x+y;
        res -> esq = aux1;
        res -> dir = aux2;
        return res;
    }
    
}