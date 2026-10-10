#include <iostream>
using namespace std;

int main() {

    float ventas[100];
    float total = 0;

    cout << "Ingresa las ventas de los 100 clientes:";
    for (int i = 0; i < 100; i++) {
        cout << "Venta del cliente " << i + 1 << ": ";
        cin >> ventas[i];
    }

    for (int i = 0; i < 100; i++) {
        total = total + ventas[i];
    }

    cout << "El ingreso total del super es: $" << total << endl;
    return 0;
}
