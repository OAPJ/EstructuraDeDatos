#include <iostream>

/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 13
   Programa Academico: Estructura de datos
   Fecha: 21/Feb/17
   Evidencia: Programa 5
   Grupo: 2CM2
*/

using namespace std;

class radios
{
	private:
		int valor;
	public:
		radios();
		void solicitar();
		float leer();
		float diam(float);
		float circ(float);
		void mostrar(float);
		~radios();
};

radios::radios()
{
	valor=0;
}

void radios::solicitar()
{
	cout<<"Radio: "<<endl;
}

float radios::leer()
{
	cin>>valor;
	return valor;
}

float radios::diam(float a)
{
	return a*2;
}

float radios::circ(float b)
{
	return b*3.1416;
}

void radios::mostrar(float r)
{
	cout<<"el resultado es: "<<r<<endl;
}

radios::~radios()
{
	valor=0;
}

int main(int argc, char** argv) {
	radios op;
	float re, di, ci;
	
	cout<<"PRIMER CIRCULO"<<endl;
	op.solicitar();
	re=op.leer();
	di=op.diam(re);
	ci=op.circ(di);
	cout<<"Diametro ";
	op.mostrar(di);
	cout<<"Circunferencia ";
	op.mostrar(ci);
	system("PAUSE");
	cout<<endl;
	
	cout<<"SEGUNDO CIRCULO"<<endl;
	op.solicitar();
	re=op.leer();
	di=op.diam(re);
	ci=op.circ(di);
	cout<<"Diametro ";
	op.mostrar(di);
	cout<<"Circunferencia ";
	op.mostrar(ci);
	system("PAUSE");
	cout<<endl;
	
	cout<<"TERCERO CIRCULO"<<endl;
	op.solicitar();
	re=op.leer();
	di=op.diam(re);
	ci=op.circ(di);
	cout<<"Diametro ";
	op.mostrar(di);
	cout<<"Circunferencia ";
	op.mostrar(ci);
    system("PAUSE");
	cout<<endl;
	
	cout<<"CUARTO CIRCULO"<<endl;
	op.solicitar();
	re=op.leer();
	di=op.diam(re);
	ci=op.circ(di);
	cout<<"Diametro ";
	op.mostrar(di);
	cout<<"Circunferencia ";
	op.mostrar(ci);
	system("PAUSE");
	cout<<endl;
	
	cout<<"QUINTO CIRCULO"<<endl;
	op.solicitar();
	re=op.leer();
	di=op.diam(re);
	ci=op.circ(di);
	cout<<"Diametro ";
	op.mostrar(di);
	cout<<"Circunferencia ";
	op.mostrar(ci);
	system("PAUSE");
	cout<<endl;
	
	return 0;
}
