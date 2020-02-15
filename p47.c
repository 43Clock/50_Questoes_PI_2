int maiorAB (ABin a) {
    int maior = a->valor;
    while (a) {
        if (a-> valor >maior) maior = a -> valor;
        a = a-> dir;
    }
    return maior;
}