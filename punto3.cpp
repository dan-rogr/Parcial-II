#include <iostream>

using namespace std;

void   ordernarElementos(double*,int);
double calcularMediana (double*,int);
void   imprimir   (double*,int);

int main() {
	cout << "Ingresa el numero de elementos: ";
	int numero;
	cin >> numero;

	double *datos = new double[numero];

	ordernarElementos(datos, numero);

	double mediana = calcularMediana(datos, numero);

	imprimir(datos, numero);

	cout << "La mediana es: " << mediana <<endl;

	delete [] datos;

	return 0;
}

void ordernarElementos(double* datos, int numero ) {
    double *i, *j, temporal ;

	for(i = datos; i < datos + numero; i++) {
	    cout << "Ingresa numero: " ; 
        cin >> temporal;

	   for(j = i-1; j >= datos && *j > temporal; *(j+1) = *j, j--);
            *(j+1)= temporal;
	}
}

double calcularMediana(double* datos, int numero )
{
    double resultado;
    int mitad = numero/2;
    
     if(numero % 2==0) {
       resultado = (*(datos + mitad-1)+ *(datos + mitad))/double(2);
     } else{
        resultado = *(datos + mitad);
     }
     return resultado;
}

void imprimir(double* datos, int numero )
{
	for(double* d=datos;
	    d < datos+numero ;
	    cout<<*d<<endl, d++);
}