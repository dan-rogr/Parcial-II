#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int tamano;
    vector <vector<int>> vec;
    vector <int> arr;

    cout << "Determine el tamano de el arreglo: ";
    cin >> tamano;

    int tamano_sistema = tamano*tamano;

    for(int i = 1; i <= tamano_sistema; i++) {
        int dato = 0;
        cout << "Ingrese el dato " << i << ": ";
        cin >> dato;
        arr.push_back(dato);
    }
    
    vec.push_back(arr);

    int counter_total = 0;
    int numero_mayor = 0;
    int numero_menor = 0;

    for(int i = 0; i < vec.size(); i++) {
        for(int j = 0; j < vec[i].size(); j++) {
            counter_total += vec[i][j];
            if(vec[i][j] > numero_mayor) {
                numero_mayor = vec[i][j];
            }

            if(vec[i][j] < numero_menor) {
                numero_menor = vec[i][j];
            } else if(j == 0) {
                numero_menor = vec[0][0];
            }
        }
    }

    float promedio = (float)counter_total / (float)tamano_sistema;

    cout << "El promedio es: " << promedio << endl;
    cout << "El numero menor es: " << numero_menor << endl;
    cout << "El numero mayor es: " << numero_mayor << endl;

}