#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string matricula;
    float calif[3];
    int grupo;
    Alumno() : calif{0.0f, 0.0f, 0.0f}, grupo(0) {}
};
struct Maestro { string nombre; string materia; };
struct Grupo { string nombre; string carrera; };

const int MAX = 100;

int leerEntero(const string& mensaje, int min, int max) {
    int x;
    while (true) {
        cout << mensaje;
        if (cin >> x && x >= min && x <= max) {
            cin.ignore(10000, '\n');
            return x;
        }
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Entrada invalida (" << min << "-" << max << ")." << endl;
    }
}

float leerCalif(int numero) {
    float x;
    while (true) {
        cout << "Ingrese la calificacion " << numero << ": ";
        if (cin >> x && x >= 0 && x <= 100) {
            cin.ignore(10000, '\n');
            return x;
        }
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Entrada invalida (0-100)." << endl;
    }
}

float promedio(const Alumno& a) {
    float suma = 0;
    for (int j = 0; j < 3; j++) suma += a.calif[j];
    return suma / 3;
}

void capturarGrupos(Grupo grupos[], int& Ngrupos) {
    if (Ngrupos == MAX) { cout << "Arreglo lleno." << endl; return; }
    int n = leerEntero("Cuantos grupos? ", 1, MAX - Ngrupos);
    for (int i = 0; i < n; i++) {
        cout << "Grupo " << Ngrupos + 1 << " - Nombre: ";
        getline(cin, grupos[Ngrupos].nombre);
        cout << "Carrera: ";
        getline(cin, grupos[Ngrupos].carrera);
        Ngrupos++;
    }
}

void capturarMaestros(Maestro maestros[], int& Nmaestros) {
    if (Nmaestros == MAX) { cout << "Arreglo lleno." << endl; return; }
    int n = leerEntero("Cuantos maestros? ", 1, MAX - Nmaestros);
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre completo del maestro " << Nmaestros + 1 << ": ";
        getline(cin, maestros[Nmaestros].nombre);
        cout << "Materia: ";
        getline(cin, maestros[Nmaestros].materia);
        Nmaestros++;
    }
}

void capturarAlumnos(Alumno alumnos[], int& Nalumnos, int Ngrupos) {
    if (Ngrupos == 0) { cout << "Primero capture grupos." << endl; return; }
    if (Nalumnos == MAX) { cout << "Arreglo lleno." << endl; return; }
    int n = leerEntero("Cuantos alumnos? ", 1, MAX - Nalumnos);
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre completo del alumno " << Nalumnos + 1 << ": ";
        getline(cin, alumnos[Nalumnos].nombre);
        cout << "Ingrese la matricula del alumno " << Nalumnos + 1 << ": ";
        getline(cin, alumnos[Nalumnos].matricula);
        for (int j = 0; j < 3; j++) alumnos[Nalumnos].calif[j] = leerCalif(j + 1);
        alumnos[Nalumnos].grupo = leerEntero("Grupo (numero): ", 1, Ngrupos);
        Nalumnos++;
    }
}

void mostrarReportes(const Alumno alumnos[], int Nalumnos, const Grupo grupos[], int Ngrupos) {
    cout << "\n--- Promedio por alumno ---" << endl;
    for (int i = 0; i < Nalumnos; i++) {
        cout << "nombre: " << alumnos[i].nombre << endl;
        cout << "matricula: " << alumnos[i].matricula << endl;
        cout << "promedio: " << promedio(alumnos[i]) << endl;
        cout << "-------------------------" << endl;
    }

    cout << "\n--- Mejor promedio por grupo ---" << endl;
    for (int g = 1; g <= Ngrupos; g++) {
        int mejor = -1;
        for (int i = 0; i < Nalumnos; i++) {
            if (alumnos[i].grupo == g &&
                (mejor == -1 || promedio(alumnos[i]) > promedio(alumnos[mejor])))
                mejor = i;
        }
        cout << grupos[g - 1].nombre << ": ";
        if (mejor == -1) cout << "sin alumnos" << endl;
        else cout << alumnos[mejor].nombre << " (" << promedio(alumnos[mejor]) << ")" << endl;
    }

    cout << "\n--- Alumnos por carrera ---" << endl;
    for (int g = 0; g < Ngrupos; g++) {
        bool repetida = false;
        for (int k = 0; k < g; k++)
            if (grupos[k].carrera == grupos[g].carrera) repetida = true;
        if (repetida) continue;

        int total = 0;
        for (int i = 0; i < Nalumnos; i++)
            if (grupos[alumnos[i].grupo - 1].carrera == grupos[g].carrera) total++;
        cout << grupos[g].carrera << ": " << total << endl;
    }
}

int main() {
    Alumno alumnos[MAX];
    Maestro maestros[MAX];
    Grupo grupos[MAX];
    int Nalumnos = 0, Nmaestros = 0, Ngrupos = 0;
    int opcion;

    do {
        cout << "\n1. Capturar alumnos" << endl;
        cout << "2. Capturar grupos y carreras" << endl;
        cout << "3. Capturar maestros" << endl;
        cout << "4. Mostrar reportes" << endl;
        cout << "5. Salir" << endl;
        opcion = leerEntero("Ingrese una opcion: ", 1, 5);

        switch (opcion) {
        case 1: capturarAlumnos(alumnos, Nalumnos, Ngrupos); break;
        case 2: capturarGrupos(grupos, Ngrupos); break;
        case 3: capturarMaestros(maestros, Nmaestros); break;
        case 4: mostrarReportes(alumnos, Nalumnos, grupos, Ngrupos); break;
        case 5: cout << "Saliendo..." << endl; break;
        }
    } while (opcion != 5);

    return 0;
}
