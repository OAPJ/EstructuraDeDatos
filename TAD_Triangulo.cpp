#include <iostream>
#include <math.h>

using namespace std;

class oper
{
	private:
		float lado;
	public:
		oper();
		void solicitar();
		float leer();
		float AEquilatero(float);
		float AEcaleno(float, float, float, float);
		float AIsoceles(float, float);
		float SemiPer(float, float, float);
		void mostrar(float);
		~oper();
	
};

oper::oper()
{
	lado=0;
}

void oper::solicitar()
{
	cout<<"Lado: "<<endl<<endl;
}

float oper::leer()
{
	cin>>lado;
	return lado;
}

float oper::AEquilatero(float l) 
{
	float a;
	a= (sqrt(3)/2)*l*l;
	return a;
}

float oper::AEcaleno(float a, float b, float c, float s)
{
	float A;
	A= sqrt(s*(s-a)*(s-b)*(s-c));
	return A;
}

float oper::AIsoceles(float a, float b)
{
	float A; 
	A=sqrt(a*a-((b*b)/4));
	return A;
}

float oper::SemiPer(float a, float b, float c)
{
	return (a+b+c)/2;
}

void oper::mostrar(float r)
{
	cout<<"El resultado es: "<<r<<endl;
}

oper::~oper()
{
	lado=0;
}

int main(int argc, char** argv) {
	oper op;
	int ob;
	float l, l1, l2, l3, r, s;
	do
	{
		system("CLS");
		cout<<"1.. Area del Equilatero"<<endl;
		cout<<"2.. Area del Escaleno"<<endl;
		cout<<"3.. Area del Isosceles"<<endl;
		cout<<"4.. Salir"<<endl;
		cin>>ob;
		
		switch(ob)
		{
			case 1:
				op.solicitar();
				l=op.leer();
				r=op.AEquilatero(l);
				op.mostrar(r);
				break;
			case 2:
				op.solicitar();
				l1=op.leer();
				op.solicitar();
				l2=op.leer();
				op.solicitar();
				l3=op.leer();
				s=op.SemiPer(l1,l2,l3);
				r=op.AEcaleno(l1,l2,l3,s);
				op.mostrar(r);
				break;
			case 3:
				cout<<"Lado que se repite"<<endl;
				op.solicitar();
				l=op.leer();
				cout<<"Lado que no se repite"<<endl;
				op.solicitar();
				l2=op.leer();
				r=op.AIsoceles(l,l2);
				op.mostrar(r);
				break;
			case 4:
				cout<<"Adios"<<endl;
				break;
			default:
				cout<<"No es opcion valida"<<endl;
				break;
		}
		system("PAUSE");
	}
	while(ob!=4);
	
	return 0;
}
