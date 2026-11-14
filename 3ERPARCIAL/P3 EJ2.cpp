#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Alumno {
    string nombre;
    string matricula;
    float calif[3];
};

int main() {

    Alumno grupo[5];

    ifstream archivo("alumnos.txt");

    for (int i = 0; i < 5; i++) {
        archivo >> grupo[i].nombre;
        archivo >> grupo[i].matricula;

        for (int j = 0; j < 3; j++) {
            archivo >> grupo[i].calif[j];
        }
    }
    archivo.close();

    cout << "DATOS LEIDOS DEL ARCHIVO\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Alumno " << i + 1 << endl;
        cout << "Nombre: " << grupo[i].nombre << endl;
        cout << "Matricula: " << grupo[i].matricula << endl;

        cout << "Calificaciones: ";
        for (int j = 0; j < 3; j++) {
            cout << grupo[i].calif[j] << " ";
        }

        cout << endl << endl;
    }

    return 0;
}