#include <iostream>

using namespace std;

struct dpila     
{
	int dato;
	dpila *sig;
};

class cpila
{
	private :
		dpila *pila;
	public:
		cpila();
		void agregar(int);
		void elecima();
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

void cpila::agregar(int dat)
{
	dpila *temp;
	temp=new dpila;// genera un nuevo espacio de memoria
	
	if(temp==NULL)
	{
		cout<<"No se puede cargar el dato"<<endl;
	}
	else
	{
		temp->dato=dat;
		temp->sig=pila;
		pila=temp;
		cout<<"Se guarddo el dato"<<endl;
	}
}

void cpila::mostrar()
{
	dpila *temp;
	
	if(vacia()==1)
	{
		cout<<"No tiene elementos"<<endl;
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

void cpila::elecima()
{
	if(vacia()==1)
	{
		cout<<"No tiene elementos"<<endl;
	}
	else
	{
		cout<<pila->dato<<endl;
	}
}

void cpila::sacar()
{
	dpila *temp;
	
	if(vacia()==1)
	{
		cout<<"No tiene elementos"<<endl;
	}
	else
	{
		cout<<"Elemento a sacar"<<pila->dato<<endl;
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
	int opc, n;
	
	do{
		system("CLS");
		cout<<"Agregar --------------- 1"<<endl;
		cout<<"Sacar ----------------- 2"<<endl;
		cout<<"Mostrar --------------- 3"<<endl;
		cout<<"Elemento cima --------- 4"<<endl;
		cout<<"Salir ----------------- 5"<<endl;
		cin>>opc;
		switch(opc)
		{
			case 1:
				{
				cout<<"Numero "<<endl;
				cin>>n;
				pd.agregar(n);
				break;
				}
			case 2:
				{
				pd.sacar();
				break;
			}
			case 3:
				{
				pd.mostrar();
				break;
			}
			case 4:
				{
				pd.elecima();
				break;
			}
			case 5:
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
		 
	}while(opc!=5);
	
	return 0;
}

