#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct Alumno {
    string nombre;
    int edad;
    string carrera;
};

void MostrarTabla(const vector<Alumno>& alumnos) {
    if (alumnos.empty()) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }

    cout << setw(15) << "Nombre" << setw(10) << "Edad" << setw(20) << "Carrera" << endl;
    cout << setfill('-') << setw(45) << "" << setfill(' ') << endl;

    for (const auto& alumno : alumnos) {
        cout << setw(15) << alumno.nombre << setw(10) << alumno.edad << setw(20) << alumno.carrera << endl;
    }
}

int main() {
    vector<Alumno> alumnos;

    char opcion;
    do {
        cout << "Sistema de Gestión de Alumnos" << endl;
        cout << "1. Agregar alumno" << endl;
        cout << "2. Mostrar tabla de alumnos" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case '1': {
                Alumno nuevoAlumno;

                cout << "Ingrese el nombre del alumno: ";
                cin.ignore(); // Ignorar el salto de línea anterior
                getline(cin, nuevoAlumno.nombre);

                cout << "Ingrese la edad del alumno: ";
                cin >> nuevoAlumno.edad;

                cout << "Ingrese la carrera del alumno: ";
                cin.ignore();
                getline(cin, nuevoAlumno.carrera);

                alumnos.push_back(nuevoAlumno);
                cout << "Alumno agregado correctamente." << endl;
                break;
            }
            case '2':
                MostrarTabla(alumnos);
                break;
            case '3':
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Inténtelo nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcion != '3');

    return 0;
}
