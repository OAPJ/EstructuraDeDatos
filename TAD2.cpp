#include <iostream>
#include <math.h>

using namespace std;

class Elevar
{
	private: 
	    int valor;
	public:
		Elevar();
		void solicitar();
	    int leer();
		//int ele_cubo(int);
		//int ele_cuarta(int);
		int Ele_pot(int, int);
		void mostrar(int);
		~Elevar();		 
};

Elevar::Elevar()
{
	valor=0;
}

void Elevar::solicitar()
{
	cout<<"Dato: "<<endl;
}

int Elevar::leer()
{
	cin>>valor;
	return valor;
}

int Elevar::Ele_pot(int n, int el)
{
	return pow(n,el);
}

/*int Elevar::ele_cuarta(int n)
{
	return n*n*n*n;
}*/

void Elevar::mostrar(int Res)
{
	cout<<"El resultado es: "<<Res<<endl;
}

Elevar::~Elevar()
{
	valor=0;
}


int main(int argc, char** argv) {
	Elevar obj;
	int n1, res;
	
	obj.solicitar();
	n1=obj.leer();
	cout<<"CUBO"<<endl;
	res=obj.Ele_pot(n1,3);
	obj.mostrar(res);
	
	obj.solicitar();
	n1=obj.leer();
	cout<<"CUARTA"<<endl;
	res=obj.Ele_pot(n1,4);
	obj.mostrar(res);
	
	
	return 0;
}
