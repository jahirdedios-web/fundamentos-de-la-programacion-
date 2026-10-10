#include <iostream>
#include <string>
using namespace std;

int main() {

    string nombreCompleto;
    string nombre;
    string apellido;
    cout << "Ingresa el nombre completo (nombre y apellido): ";
    getline(cin, nombreCompleto);
    int espacio = nombreCompleto.find(' ');

    if (espacio == -1) {
        cout << "Error: Debes ingresar nombre y apellido." << endl;
        return 0;
    }

    nombre = nombreCompleto.substr(0, espacio);
    apellido = nombreCompleto.substr(espacio + 1);

    for (char c : nombre) {
        if (isdigit(c)) {
            cout << "Error: El nombre contiene numeros." << endl;
            return 0;
        }
    }

    for (char c : apellido) {
        if (isdigit(c)) {
            cout << "Error: El apellido contiene numeros." << endl;
            return 0;
        }
    }
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    return 0;
}
