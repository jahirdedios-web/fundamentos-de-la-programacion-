#include <iostream>
using namespace std;

void corregido() {
    int arreglo[5];
    arreglo[4] = 50;
    cout << "Escritura correcta dentro del arreglo." << endl;
}

int main() {
    corregido();
    return 0;
}

