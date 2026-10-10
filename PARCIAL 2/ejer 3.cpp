#include <iostream>
using namespace std;

int main() {

    float alumnos[10][3];

    cout << "Ingresa los promedios del Grupo A:";
    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << i + 1 << ": ";
        cin >> alumnos[i][0];
    }

    cout << "Ingresa los promedios del Grupo B:";
    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << i + 1 << ": ";
        cin >> alumnos[i][1];
    }

    for (int i = 0; i < 10; i++) {
        if (alumnos[i][0] > alumnos[i][1]) {
            alumnos[i][2] = alumnos[i][0];
        }
        else {
            alumnos[i][2] = alumnos[i][1];
        }
    }

    cout << "Los resultados son:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << i + 1 << ":" << endl;
        cout << "  Grupo A: " << alumnos[i][0] << endl;
        cout << "  Grupo B: " << alumnos[i][1] << endl;
        cout << "  Promedio mas alto: " << alumnos[i][2] << endl;
    }

    
    return 0;
}