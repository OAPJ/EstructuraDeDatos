#include <iostream>
/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 13
   Programa Academico: Estructura de datos
   Fecha: 24/Abril/2017
   Evidencia: cola de prioridad
   Grupo: 2CM2
*/
using namespace std;

struct scola
{
	int dato;
	scola *sig;
};

class dcola
{
	private:
		scola *prin;
		scola *fin;
	public:
		dcola();
		void agregar(int);
		void sacar();
		void mostrar();
		void eleprincipio();
		bool vacia();
		~dcola();
};

dcola::dcola()
{
	prin=new scola;
	fin=prin;
}

bool dcola::vacia()
{
	if(fin==prin)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void dcola::agregar(int dat)
{
	scola *temp;
	scola *aux; 
	scola *aux2, *aux3;
	temp= new scola;
	
	if(temp==NULL)
	{
		cout<<"No se puede cargar el dato"<<endl;
	}
	else
	{
		aux=prin;
		if(vacia()==1)
		{
			fin->dato=dat;
			fin->sig=temp;
			fin=temp; 
		}
		else
		{
			if(aux->dato>dat)
			{
				temp->dato=dat;
				temp->sig=aux;
				prin=temp;
			}
			else
			{
				while((aux->dato<dat) && (aux!=fin))
				{
					aux2=aux;
					aux=aux->sig;
				}
				temp->dato=dat;
				aux2->sig=temp;
				temp->sig=aux;
			}
			
		}
		
	}
}

void dcola::sacar()
{
	scola *temp;
	
	if(vacia()==1)
	{
		cout<<"No tiene elementos"<<endl<<endl;
	}
	else
	{
		cout<<"Elemento a sacar "<<prin->dato<<endl;
		temp=prin;
		prin=prin->sig;
		delete temp;
	}
}

void dcola::eleprincipio()
{
	if(vacia()==1)
	{
		cout<<"No tiene elemento"<<endl<<endl;
	}
	else
	{
		cout<<prin->dato<<endl;
	}
}

void dcola::mostrar()
{
	scola *temp;
	
	if(vacia()==1)
	{
		cout<<"No tiene elementos"<<endl<<endl;
	}
	else
	{
		temp=prin;
		while(temp!=fin)
		{
			cout<<temp->dato<<endl;
			temp=temp->sig;
		}
	}
}

dcola::~dcola()
{
	scola *temp;
	
	if(vacia()==0)
	{
		temp=prin;
		while(temp!=fin)
		{
			prin=prin->sig;
			delete temp;
			temp=prin;
		}
	}
}

int main() {
	dcola pd;
	int op, n;
	
	do
	{
		system("CLS");
		cout<<"1).. Agregar"<<endl;
		cout<<"2).. Sacar"<<endl;
		cout<<"3).. Primer elemento"<<endl;
		cout<<"4).. Mostrar"<<endl;
		cout<<"5).. salir"<<endl;
		cin>>op;
		cout<<endl;
		
		switch(op)
		{
			case 1:
				cout<<"Numero "<<endl;
				cin>>n;
				pd.agregar(n);
				cout<<endl;
				break;
			
			case 2:
				pd.sacar();
				cout<<endl;
				break;
			
			case 3:
				pd.eleprincipio();
				cout<<endl;
				break;
			
			case 4:
				pd.mostrar();
				cout<<endl;
				break;
			
			case 5:
				cout<<"Hasta luego "<<endl;
				cout<<endl;
				break;
			
			default:
				cout<<"Opcion no valida"<<endl;
				cout<<endl;
				break;
		}
		system("PAUSE");
	}
	while(op!=5);
	
	return 0;
}
