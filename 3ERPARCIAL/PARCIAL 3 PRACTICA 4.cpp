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

    ifstream archivoTexto("alumnos.txt");

    for (int i = 0; i < 5; i++) {
        archivoTexto >> grupo[i].nombre
            >> grupo[i].matricula
            >> grupo[i].calif[0]
            >> grupo[i].calif[1]
            >> grupo[i].calif[2];
    }

    archivoTexto.close();

    ofstream archivoBin("alumnos.dat", ios::binary);

    for (int i = 0; i < 5; i++) {

        size_t tamNombre = grupo[i].nombre.size();
        archivoBin.write((char*)&tamNombre, sizeof(tamNombre));
        archivoBin.write(grupo[i].nombre.c_str(), tamNombre);

        size_t tamMatricula = grupo[i].matricula.size();
        archivoBin.write((char*)&tamMatricula, sizeof(tamMatricula));
        archivoBin.write(grupo[i].matricula.c_str(), tamMatricula);

        archivoBin.write((char*)grupo[i].calif, sizeof(grupo[i].calif));
    }

    archivoBin.close();

    cout << "Archivo binario creado correctamente." << endl;

    return 0;
}