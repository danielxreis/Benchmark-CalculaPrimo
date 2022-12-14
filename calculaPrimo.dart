calculaPrimo(numero) {
    bool primo = false;
    double metade = (numero / 2 + 1);
    int metadeDivisao = metade.round();
    for(int x = 2; x < metadeDivisao; x++) {
        if(numero % x == 0) {
            primo = false;
            break;
        } else {
            primo = true;
        }
    }
    return primo;
}

main() {
    List listaPrimos = [];
    for(int x = 1; x < 1000000; x++) {
        print("Checando $x");
        if(calculaPrimo(x)) {
            listaPrimos.add(x);
        }
    }
    print("Confira a lista");
    print(listaPrimos);
    print("São ${listaPrimos.length} números primos");
}