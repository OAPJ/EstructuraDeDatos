#include <iostream>
#include <string.h>

/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 13
   Programa Academico: Estructura de datos
   Fecha: 29/Mar/17
   Evidencia: Palindromo o No
   Grupo: 2CM2
*/

using namespace std;

struct dpila     
{
	char dato;
	dpila *sig;
};

class cpila
{
	private :
		dpila *pila;
	public:
		cpila();
		void agregar(char);
		char elecima();
		void sacar();
		void mostrar();
		bool vacia();
		~cpila();
};

cpila::cpila()
{
	pila=NULL;
}

bool cpila::vacia()
{
	if(pila==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void cpila::agregar(char dat)
{
	dpila *temp;
	temp=new dpila;// genera un nuevo espacio de memoria
	
	if(temp==NULL)
	{
		cout<<"No se puede cargar el dato "<<endl;
	}
	else
	{
		temp->dato=dat;
		temp->sig=pila;
		pila=temp;
		cout<<"Se guarddo el dato "<<endl;
	}
}

void cpila::mostrar()
{
	dpila *temp;
	
	if(vacia()==1)
	{
		cout<<"No tiene elementos "<<endl;
	}
	else
	{
		temp=pila;
		while(temp!=NULL)
		{
			cout<<temp->dato<<endl;
			temp=temp->sig;
		}
	}
}

char cpila::elecima()
{
	if(vacia()==1)
	{
		cout<<"No tiene elementos "<<endl;
	}
	else
	{
		return pila->dato;	
	}
	
}

void cpila::sacar()
{
	dpila *temp;
	
	if(vacia()==1)
	{
		cout<<"No tiene elementos "<<endl;
	}
	else
	{
		cout<<"Sacar "<<pila->dato<<endl;
		temp=pila;
		pila=pila->sig; 
		delete temp;
	}
}

cpila::~cpila()
{
	dpila *temp=pila;
	
	if(vacia()==0)
	{
		while(temp!=NULL)
		{
			
			pila=pila->sig;
			delete temp;
			temp=pila;
		}
	}
	pila=NULL;
}


int main(int argc, char** argv) {
	cpila pd;
	int opc,x,i;
	char n;
	char cad[30];
	
	
	do{
		system("CLS");
		cout<<"Agregar palabra ------- 1"<<endl;
		cout<<"Verficacion ----------- 2"<<endl;
		cout<<"Salir ----------------- 3"<<endl;
		cin>>opc;
		cout<<endl;
		
		switch(opc)
		{
			case 1:
			{
				cout<<"Introduce la palabra: "<<endl;
				cin>>cad;
				cout<<endl;
				break;
			}
			case 2:
			{
				x=strlen(cad);
				for(i=0;i<x;i++)
				{
					pd.agregar(cad[i]);
				}
				cout<<endl;
				for(i=0;i<x;i++)
				{
					if(cad[i]==pd.elecima())
					{
						
						pd.sacar();
					}
				}
				if(pd.vacia()==true)
				{
					cout<<endl;
					cout<<cad<<" Es palindromo "<<endl<<endl;;
				}
				else
				{
					cout<<endl;
					cout<<cad<<" No es palindromo"<<endl<<endl;
					pd.~cpila();
				}
				break;
			}
			case 3:
				{
				cout<<"Adios"<<endl;
				break;
			}
			default:
				{
				cout<<"Opcion no valida"<<endl;
				break;
			}
		 } 
		 system("PAUSE");
		 
	}while(opc!=3);
	
	return 0;
}

