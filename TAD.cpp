#include <iostream>
#include <stdlib.h>
/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 13
   Programa Academico: Estructura de datos
   Fecha: 9/Feb/17
   Evidencia: TAD
   Grupo: 2CM2
*/
using namespace std;

class Operaciones
{
	private:
		int Valor;
	public:
		Operaciones();
		void Solicitar();
		int Leer();
		int Suma(int, int);
		int Resta(int, int);
		int Div(int, int);
		int Mult(int, int); 
		void Mostrar(int);
		~Operaciones();
};

Operaciones::Operaciones()
{
	Valor=0;	
}

void Operaciones::Solicitar()
{
	cout<<"Dato: "<<endl;//Mostrar pantaña
}

int Operaciones::Leer()
{
	cin>>Valor;
	return Valor;
 } 
 
 int Operaciones::Suma(int a, int b)
 {
 	int Res;
 	Res = a + b;
 	return Res;
 	//return num1+num2;
 }
 
 int Operaciones::Resta(int a, int b)
 {
 	return a-b;
 }
 
 int Operaciones::Mult(int a, int b)
 {
 	return a*b;
 }
 
 int Operaciones::Div(int a, int b)
 {
 	return a/b;
 }
 
 void Operaciones::Mostrar(int Resul)
 {
 	cout<<"Tu resultado es: "<<Resul<<endl; // endl= salto de linea 
 }
 
Operaciones::~Operaciones()
{
	Valor=0;
	
}

int main(int argc, char** argv) {
	Operaciones Obj;
	int x, y, R;
	
	cout<<"Suma de dos numeros"<<endl;
	Obj.Solicitar();
	x=Obj.Leer();
	Obj.Solicitar();
	y=Obj.Leer();
	R=Obj.Suma(x,y);
	Obj.Mostrar(R);
	system("PAUSE");
	system("CLS");
	
	cout<<"Resta de dos numero"<<endl;
	R=Obj.Resta(x,y);
	Obj.Mostrar(R);
	system("PAUSE");
	system("CLS");
	
	cout<<"Multiplicacion de dos numeros"<<endl;
	R=Obj.Mult(x,y);
	Obj.Mostrar(R);
	system("PAUSE");
	system("CLS");
	
	cout<<"Divicion de dos numeros"<<endl;
	R=Obj.Div(x,y);
	Obj.Mostrar(R);
	system("PAUSE");
	system("CLS");
	
	
	
	return 0;
}
