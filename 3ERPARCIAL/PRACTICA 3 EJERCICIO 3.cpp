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
    Alumno nuevo;
    cout << "Nombre: ";
    getline(cin, nuevo.nombre);

    cout << "Matricula: ";
    getline(cin, nuevo.matricula);

    cout << "Ingresa las 3 calificaciones:\n";
    for (int i = 0; i < 3; i++) {
        cin >> nuevo.calif[i];
    }

    ofstream archivo("alumnos.txt", ios::app);

    archivo << nuevo.nombre << " "
        << nuevo.matricula << " "
        << nuevo.calif[0] << " "
        << nuevo.calif[1] << " "
        << nuevo.calif[2]
        << endl;

    archivo.close();
    cout << "\nAlumno agregado correctamente." << endl;

    return 0;
}