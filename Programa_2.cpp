#include <iostream>

/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 13
   Programa Academico: Estructura de datos
   Fecha: 21/Feb/17
   Evidencia: Programa 2
   Grupo: 2CM2
*/

using namespace std;

class area
{
	private:
		int valor;
	public:
		area();
		void solicitar();
		float leer();
		float aTri(float, float);
		float aRec(float, float);
		float aTra(float, float, float);
		void mostrar(float);
		~area();
};

area::area()
{
	valor=0;
}

void area::solicitar()
{
	cout<<"Dato: "<<endl;
}

float area::leer()
{
	cin>>valor;
	return valor;
}

float area::aTri(float b, float h)
{
	return (b*h)/2;
}

float area::aRec(float b, float h)
{
	return b*h;
}

float area::aTra(float a, float b, float h)
{
	return ((a+b)/2)*h;
}

void area::mostrar(float re)
{
	cout<<"El resultado es: "<<re<<endl;
}

area::~area()
{
	valor=0;
}

int main(int argc, char** argv) {
	area op;
	float AT,AR, ATR;
	float ba, bar, bat, bat2, al, alT, alr;
	
	cout<<"Area del triangulo"<<endl;
	cout<<"Base ";
	op.solicitar();
	ba=op.leer();	
	cout<<"Altura ";
	op.solicitar();
	al=op.leer();
	AT=op.aTri(ba,al);
	op.mostrar(AT);
	system("PAUSE");
	system("CLS");
	cout<<endl;
	
	cout<<"Area del rectangulo"<<endl;
	cout<<"Base ";
	op.solicitar();
	bar=op.leer();	
	cout<<"Altura ";
	op.solicitar();
	alr=op.leer();
	AR=op.aRec(bar ,alr);
	op.mostrar(AR);
	system("PAUSE");
	system("CLS");
	cout<<endl;
	
	cout<<"Area del trapecio"<<endl;
	cout<<"Base 1 ";
	op.solicitar();
	bat=op.leer();
	cout<<"Base 2 ";
	op.solicitar();
	bat2=op.leer();	
	cout<<"Altura ";
	op.solicitar();
	alT=op.leer();
	ATR=op.aTra(bat, bat2, alT);
	op.mostrar(ATR);
	system("PAUSE");
	system("CLS");
	
	return 0;
}
