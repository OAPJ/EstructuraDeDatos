#include <iostream>
#include <stdlib.h>
#define MAX 10
using namespace std;

class Cpila
{
	private:
		int pila[MAX];
		int cima;
	public:
		Cpila();
		int leer();
		void agregar(int);
		void sacar();
		void imrimir();
		bool vacia();
		bool llena();
		void elecima();
		~Cpila();
};

Cpila::Cpila()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		pila[i]=0;
	}
	cima=-1;   
}

int Cpila::leer()
{
	int dato;
	cout<<"Dato a ingrsar: "<<endl;
	cin>>dato;
	return dato;
}

void Cpila::agregar(int dat)
{
	if(llena()==1)
	{
		cout<<"La pila esta llena"<<endl;
	}
	else 
	{
		cima++; //cima=cima+1
		pila[cima]=dat;
		cout<<"El dato se ingreso correctamente"<<endl;
	}
}

bool Cpila::llena()
{
	if(cima==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool Cpila::vacia()
{
	if(cima==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void Cpila::sacar()
{
	if(vacia()==1)
	{
		cout<<"la pila esta vacia"<<endl;
	}
	else
	{
		cout<<"Elemnto a sacar: "<<pila[cima]<<endl;
		pila[cima]=0;
		cima--;
	}
}

void Cpila::elecima()
{
	if(vacia()==0)
	{
		cout<<"Elemento cima: "<<pila[cima]<<endl;
	}
	else
	{
		cout<<"La pila esta vacia "<<endl;
	}
}

void Cpila::imrimir()
{
	int i=cima;
	while(i!=0)
	{
		cout<<pila[i]<<endl;
		i--;
	}
	/*for(i=cima;i>=0;i--)
	    cout<<pila[i]<<endl;*/
}

Cpila::~Cpila()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		pila[i]=0;
	}
	cima=-1;   
}

   

int main(int argc, char** argv) {
	Cpila obj;
	int opc, dat;
	
	do
	{
		system("CLS");
		cout<<"Agregar elemnto ................. 1"<<endl;
		cout<<"Sacar elemnto ................... 2"<<endl;
		cout<<"Elemnto cima .................... 3"<<endl;
		cout<<"Mostrar pila .................... 4"<<endl;
		cout<<"Salir ........................... 5"<<endl;
		cin>>opc;
		switch(opc)
		{
			case 1:
			{
				dat=obj.leer();
				obj.agregar(dat);
				break;
			}
			case 2:
			{
				obj.sacar();
				break;
			}
			case 3:
			{
				obj.elecima();
				break;
			}
			case 4:
			{
				obj.imrimir();
				break;
			}
			case 5:
			{
				cout<<"Adios"<<endl;
				break;
			}
			default:
			{
				cout<<"No es opcion valida"<<endl;
				break;
			}
		}
		system("PAUSE");
	}
	while(opc!=5);
	
	return 0;
}
