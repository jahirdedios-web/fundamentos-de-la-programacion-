#include <iostream>

using namespace std;
int main() {
	float Grupo1[5] = { 0 };
	float Grupo2[5] = { 0 };
	float Grupoalto[5] = { 0 };
	cout << "Ingresa los promedios del Grupo 1" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Alumno " << i + 1 << ": ";
		cin >> Grupo1[i];
	}

	cout << "Ingresa los promedios del Grupo 2" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Alumno " << i + 1 << ": ";
		cin >> Grupo2[i];
	}

	for (int i = 0; i < 5; i++) {
		if (Grupo1[i] > Grupo2[i]) Grupoalto[i] = Grupo1[i];
		else Grupoalto[i] = Grupo2[i];
	}

	cout << "Los promedios más altos por posición" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Posicion " << i + 1 << ": " << Grupoalto[i] << endl;
	}

	return 0;
}