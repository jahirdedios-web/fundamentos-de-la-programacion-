#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string matricula;
    float calif[3];
};

int main() {

    Alumno grupo[5];
    for (int i = 0; i < 5; i++) {
        cout << "Alumno " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, grupo[i].nombre);

        cout << "Matricula: ";
        getline(cin, grupo[i].matricula);

        cout << "Ingresa las 3 calificaciones:\n";
        for (int j = 0; j < 3; j++) {
            cin >> grupo[i].calif[j];
        }

        cin.ignore();
    }

    cout << "los Promedios son :";
    for (int i = 0; i < 5; i++) {
        float suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += grupo[i].calif[j];
        }
        float promedio = suma / 3;
        cout << "Alumno " << i + 1 << ": " << grupo[i].nombre << endl;
        cout << "Promedio: " << promedio << endl;
    }
    return 0;
}