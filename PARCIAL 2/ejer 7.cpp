#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {

    srand(time(0));

    int x = rand() % 100;
    int y = rand() % 100;

    cout << "Antes del intercambio:";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    intercambiar(x, y);

    cout << "Despues del intercambio";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}
