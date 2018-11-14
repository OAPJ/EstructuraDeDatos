#include <iostream>

/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 13
   Programa Academico: Estructura de datos
   Fecha: 21/Feb/17
   Evidencia: Programa 6
   Grupo: 2CM2
*/

using namespace std;

class sueldo
{
	private:
		int valor;
	public:
		sueldo();
		void solicitarsaldo();
		void solicitarventas();
		float leer();
		float smensual(float, float);
		float sneto(float);
		float ventas(float);
		void mostrar(float);
		~sueldo();
		
};

sueldo::sueldo()
{
	valor=0;
}

void sueldo::solicitarsaldo()
{
	cout<<"Saldo mensual: "<<endl;
}

void sueldo::solicitarventas()
{
	cout<<"Ventas mensuales: "<<endl;
}

float sueldo::leer()
{
	cin>>valor;
	return valor;
}

float sueldo::smensual(float m, float v)
{
	return m+v;
}

float sueldo::sneto(float s)
{
	return (s*16)/100;
}

float sueldo::ventas(float v)
{
	return (v*4)/100;
}

void sueldo::mostrar(float r)
{
	cout<<"El sueldo neto mensual es: "<<r<<endl;
}

sueldo::~sueldo()
{
	valor=0;
}

int main(int argc, char** argv) {
	sueldo op;
	float v,sm,ne, st, vt;
	
	op.solicitarsaldo();
	sm=op.leer();
	op.solicitarventas();
	v=op.leer();
	vt=op.ventas(v);
	st=op.smensual(sm,vt);
	ne=op.sneto(st);
	op.mostrar(ne);
	
	
	return 0;
}
