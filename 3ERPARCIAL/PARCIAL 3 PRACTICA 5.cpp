#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string archivoBuscado;

    cout << "Ingrese el nombre del archivo: ";
    getline(cin, archivoBuscado);

    ifstream archivo(archivoBuscado.c_str());

    if (!archivo) {
        cout << "Error: El archivo no existe." << endl;
        return 1;
    }

    cout << "Archivo encontrado correctamente." << endl;

    archivo.close();
    return 0;
}