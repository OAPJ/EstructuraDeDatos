#include <iostream>

using namespace std;

class area
{
	private:
		int valor;
	public:
		area();
		void solicitar();
		float leer();
		float Area(int);
		void mostrar(float);
		~area();
	
};
area::area()
{
	valor=0;
}

void area::solicitar()
{
	cout<<"Radio: "<<endl;
}

float area::leer()
{
	cin>>valor;
	return valor;
}

float area::Area(int r)
{
	return 3.14*r*r;
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
	area obj;
	float rel, ra;
	
	obj.solicitar();
	ra=obj.leer();
	rel=obj.Area(ra);
	obj.mostrar(rel);
	return 0;
}
