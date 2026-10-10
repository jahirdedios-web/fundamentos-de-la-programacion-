#include <iostream>
using namespace std;

void provocarError() {
    int arreglo[5];
    arreglo[10] = 50;
    cout << "Intento de escribir fuera del arreglo." << endl;
}

int main() {
    provocarError();
    return 0;
}
