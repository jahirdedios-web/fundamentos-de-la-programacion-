

#include <iostream>
using namespace std;

int main()
{
	float calificaciones[6];
	float suma = 0;
	cout << "Ingresa tus califaciones de los parciales" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Calificacion " << (i + 1) << ": ";
		cin >> calificaciones[i];
		suma = suma + calificaciones[i];
	}

	float promedio = suma / 5;
	calificaciones[5] = promedio;
	cout << "Tus Resultados son ";
	for (int i = 0; i < 5; i++) {
		cout << calificaciones[i] << " ";
	}
	cout << " y tu promedio es: " << calificaciones[5] << endl;
	return 0;
}

