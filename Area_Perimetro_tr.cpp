#include <iostream>

using namespace std;

class triangulo
{
	private:
		int valor;
	public:
		triangulo();
		void solicictar();
		float leer();
		float area(float, float);
		float perimetro(float, float);
		void mostrar();
		~tirnagulo();
};

triangulo::triangulo()
{
	valor=0;
}

void triangulo::solicictar()
{
	cout<<"Dato: "<<endl;
}

float triangulo::leer()
{
	cin>>valor;
	return valor;
}

float triangulo::area(float b, float h)
{
	return (b*h)/2;
}

float triangulo::perimetro(float b, float h)
{
	
}

triangulo::~triangulo()
{
	valor=0;
}

int main(int argc, char** argv) {
	return 0;
}
