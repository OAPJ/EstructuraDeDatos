#include <iostream>

/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 13
   Programa Academico: Estructura de datos
   Fecha: 21/Feb/17
   Evidencia: Programa 1
   Grupo: 2CM2
*/

using namespace std;

class operaciones
{
	private:
		double num;
	public:
		operaciones();
		void solicitar();
		double leer();
		double suma(double, double, double);
		double producto(double, double, double);
		double menor(double, double, double);
		double promedio(double, double, double);
		void mostrar(double);
		~operaciones();
};

operaciones::operaciones()
{
	num=0;
}

void operaciones::solicitar()
{
	cout<<"Dato: "<<endl;
}

double operaciones::leer()
{
	cin>>num;
	return num;
}

double operaciones::suma(double a, double b, double c)
{
	return a+b+c;
}

double operaciones::producto(double a, double b, double c)
{
	return a*b*c;
}

double operaciones::menor(double a, double b, double c)
{
	if(a<b){
		if(a<c){
			return a;
		}else return c;
	}
	if(a>b){
		if(b<c){
			return b;
		}else return c;
	}
	
}

double operaciones::promedio(double a, double b, double c)
{
	return (a*b*c)/3;
}

void operaciones::mostrar(double re)
{
	cout<<"El Resultado es: "<<re<<endl;
}

operaciones::~operaciones()
{
	num=0;
}

int main(int argc, char** argv) {
	operaciones op;
	double suma, producto, menor, promedio;
	double num1, num2, n3; 
	
	op.solicitar();
	num1=op.leer();
	op.solicitar();
	num2=op.leer();
	op.solicitar();
	n3=op.leer();
	cout<<endl;
	cout<<"Suma: "<<endl;
	suma=op.suma(num1,num2,n3);
	op.mostrar(suma);
	
	
	cout<<endl;
	cout<<"Producto: "<<endl;
	
	producto=op.producto(num1,num2,n3);
	op.mostrar(producto);
	
	cout<<endl;
	cout<<"Menor: "<<endl;

	menor=op.menor(num1,num2,n3);
	op.mostrar(menor);

	cout<<endl;
	cout<<"Promedio: "<<endl;
	
	promedio=op.promedio(num1,num2,n3);
	op.mostrar(promedio);
	
	
	return 0;
}
