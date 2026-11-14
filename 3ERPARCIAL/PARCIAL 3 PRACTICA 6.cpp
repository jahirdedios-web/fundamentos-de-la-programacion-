#include <iostream>
#include <fstream>
#include <string>
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
        archivo >> grupo[i].nombre
            >> grupo[i].matricula
            >> grupo[i].calif[0]
            >> grupo[i].calif[1]
            >> grupo[i].calif[2];
    }

    archivo.close();

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {

            float prom1 = (grupo[i].calif[0] +
                grupo[i].calif[1] +
                grupo[i].calif[2]) / 3;

            float prom2 = (grupo[j].calif[0] +
                grupo[j].calif[1] +
                grupo[j].calif[2]) / 3;

            if (prom2 > prom1) {
                Alumno aux = grupo[i];
                grupo[i] = grupo[j];
                grupo[j] = aux;
            }
        }
    }

    ofstream reporte("reporte.txt");

    reporte << "REPORTE DE ALUMNOS ORDENADOS POR PROMEDIO\n\n";

    for (int i = 0; i < 5; i++) {

        float promedio = (grupo[i].calif[0] +
            grupo[i].calif[1] +
            grupo[i].calif[2]) / 3;

        reporte << "Nombre: " << grupo[i].nombre << endl;
        reporte << "Matricula: " << grupo[i].matricula << endl;
        reporte << "Promedio: " << promedio << endl;
        reporte << endl;
    }

    reporte.close();

    cout << "Reporte generado correctamente." << endl;

    return 0;
}
