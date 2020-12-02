#include <iostream>
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    string documento_identidad;
    int semestre_academico;
};

int main()
{
    struct Estudiante estudiante;
    cout << "Ingrese el nombre del estudiante: ";
    cin >> estudiante.nombre;

    cout << "\n";
    cout << "Ingrese la edad del estudiante: ";
    cin >> estudiante.edad;

    cout << "\n";
    cout << "Ingrese el documento de identidad: ";
    cin >> estudiante.documento_identidad;

    cout << "\n";
    cout << "Ingrese el semestre academico: ";
    cin >> estudiante.semestre_academico;

    cout << "\n";
    cout << "El nombre del estudiante es: " << estudiante.nombre << endl;
    cout << "La edad del estudiante es: " << estudiante.edad << endl;
    cout << "El documento de identidad del estudiante es: " << estudiante.documento_identidad << endl;
    cout << "El semestre academico del estudiante es: " << estudiante.semestre_academico << endl;
}
