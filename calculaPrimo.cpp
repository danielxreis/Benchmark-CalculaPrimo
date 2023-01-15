#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool calculaPrimo(int numero) {
    bool primo = false;
    float metade = (numero / 2 + 1);
    int metadeDivisao = round(metade) + 1;

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

void print(std::vector<int> const &input) {
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main () {
    vector<int> lista_primos; 

    for(int x = 10000; x < 20000; x++) {
        std::cout << "\nChecando " << x;
        if(calculaPrimo(x)) {
            std::cout << "\n" << x << " é primo.\n";
            lista_primos.push_back(x);
        }
    }
    std::cout << "Lista de numeros primos:\n";
    print(lista_primos);
    std::cout << "\nTotal de números priimos encontrados: " << lista_primos.size();
    return 0;
}