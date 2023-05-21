#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> miLista = {-50, 20, 30, 40, 50, 70, 123};

    int primerElemento = miLista.front();
    int ultimoElemento = miLista.back();

    cout << "Primer elemento: " << primerElemento << endl;
    cout << "Último elemento: " << ultimoElemento << endl;

    return 0;
}