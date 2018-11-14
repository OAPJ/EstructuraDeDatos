#include <iostream>
#include <stdlib.h>
#define MAX  10
using namespace std;

class pila
{
	private:
		char Cpila[MAX];
		int cima;
	public:
		pila();
		char leer();
		void agragar(char);
		char sacar();
		char elecima();
		void imprimir();
		bool vacia();
		bool llena();
		~pila();
};

pila::pila()
{
	int i;
	cima=-1;
	for(i=0;i<MAX;i++)
	{
		Cpila[i]=0;
	}
}

char pila::leer()
{
	char dato;
	cout<<"Caracter a ingresar: "<<endl;
	cin>>dato;
	return dato;
}

void pila::agragar(char dat)
{
	if(llena()==1)
	{
		cout<<"La pila esta llena"<<endl;
	}
	else 
	{
		cima++; 
		Cpila[cima]=dat;
		cout<<"El dato se ingreso correctamente"<<endl;
	}
}

bool pila::llena()
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

bool pila::vacia()
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

char pila::sacar()
{
	if(vacia()==1)
	{
		cout<<"la pila esta vacia"<<endl;
	}
	else
	{
		cout<<"Elemnto a sacar: "<<Cpila[cima]<<endl;
		Cpila[cima]=0;
		cima--;
	}
}

char pila::elecima()
{
	if(vacia()==0)
	{
		cout<<"Elemento cima: "<<Cpila[cima]<<endl;
	}
	else
	{
		cout<<"La pila esta vacia "<<endl;
	}
}

void pila::imprimir()
{
	int i=cima;
	while(i!=0)
	{
		cout<<Cpila[i]<<endl;
		i--;
	}
}

pila::~pila()
{
	int i;
	cima=-1;
	for(i=0;i<MAX;i++)
	{
		Cpila[i]=0;
	}
}

int main(int argc, char** argv) {
	pila obj;
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
		cout<<endl;
		switch(opc)
		{
			case 1:
			{
				dat=obj.leer();
				obj.agragar(dat);
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
				obj.imprimir();
				break;
			}
			case 5:
			{
				cout<<"Adios"<<endl<<endl;
				break;
			}
			default:
			{
				cout<<"No es opcion valida"<<endl<<endl;
				break;
			}
		}
		system("PAUSE");
	}
	while(opc!=5);
	return 0;
}
