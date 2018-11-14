#include <iostream>

using namespace std;

class operaciones
{
	private:
		float apotema;
		float lado;
	public:
		operaciones();
		void solicitarLado();
		void solicitarApotema();
		float leerAP();
		float leerLad();
		float area (float, float);
		float perimetro (float);
		void mostrar(float);
		~operaciones();
};

operaciones::operaciones()
{
	apotema=0;
	lado=0;
}

void operaciones::solicitarApotema()
{
	cout<<"Medida de la Apotema: "<<endl<<endl;	
}

void operaciones::solicitarLado()
{
	cout<<"Medida de un lado: "<<endl<<endl;
}

float operaciones::leerAP()
{
	cin>>apotema;
	return apotema;
}

float operaciones::leerLad()
{
	cin>>lado;
	return lado;
}

float operaciones::area(float a, float b)
{
	return 4*a*b;
}

float operaciones::perimetro(float l)
{
	return 8*l;
}

void operaciones::mostrar(float r)
{
	cout<<"El resultado es: "<<r<<endl<<endl;
}

operaciones::~operaciones()
{
	apotema=0;
	lado=0;
}


int main(int argc, char** argv) {
	operaciones op;
	float ap, la, r;
	
	cout<<"Area del Octagono"<<endl<<endl;
	op.solicitarApotema();
	ap=op.leerAP();
	op.solicitarLado();
	la=op.leerLad();
	r=op.area(la, ap);
	op.mostrar(r);
	system("PAUSE");
	system("CLS");
	
	cout<<"Perimetro del Octagono"<<endl<<endl;
	op.solicitarLado();
	la=op.leerLad();
	r=op.perimetro(la);
	op.mostrar(r);
	system("PAUSE");
	system("CLS");
	
	
	
	return 0;
}
