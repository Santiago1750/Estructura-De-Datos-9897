#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> numeros;

    int numero;
    char continuar;

    do {
        cout << "Ingrese un número: ";
        cin >> numero;

        numeros.push_back(numero);

        cout << "¿Desea ingresar otro número? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    int suma = 0;
    for (const auto& num : numeros) {
        suma += num;
    }
    cout << "Elementos de la lista: ";
    for (const auto& numero : numeros) {
    cout << numero << " ";
    }
    cout << endl;

    cout << "La suma de los números ingresados es: " << suma << endl;

    return 0;
}