#include <iostream>

/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 1E
   Programa Academico: Estructura de datos
   Fecha: 21/Feb/17
   Evidencia: Programa 1
   Grupo: 2CM2
*/

using namespace std;

struct nodo
{
	int dato;
	nodo *sig;
	nodo *ant;
};

class lista
{
	private:
		nodo *lista1;
		nodo *lista2;
	public:
		lista();
		void agregar(int);
		void agregar2(int);
		void mostrar();
		void mostrar2();
		void cardinalidad();
		void cardinalidad2();
		void diferencia_A_B();
		void diferencia_B_A();
		bool vacia();
		bool vacia2();
		void interseccion();
		void Union();
		~lista();
};

lista::lista()
{
	lista1=NULL;
	lista2=NULL;
}

bool lista::vacia()
{
	if(lista1==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool lista::vacia2()
{
	if(lista2==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void lista::agregar(int N)
{
	nodo *temp;
	nodo *aux;
	int ban;

	ban=0;
	temp=new nodo;


	if(vacia()==1)
	{
		temp->dato=N;
		temp->sig=NULL;
		temp->ant=NULL;
		lista1=temp;
	}
	else
	{
		temp->dato=N;
		temp->sig=NULL;
		temp->ant=lista1;
		lista1->sig=temp;
		lista1=temp;
	}
		
}

void lista::agregar2(int N)
{
	nodo *aux;
	aux= new nodo;

	if(vacia2()==1)
	{
		aux->dato=N;
		aux->sig=NULL;
		aux->ant=NULL;
		lista2=aux;
	}
	else
	{
		aux->dato=N;
		aux->sig=NULL;
		aux->ant=lista2;
		lista2->sig=aux;
		lista2=aux;
	}
		
}

void lista::mostrar()
{
	nodo *temp;
	temp=lista1;
	if(vacia()==1)
	{
		cout<<"No hay elementos"<<endl;
	}
	else
	{
		while(temp!=NULL)
		{
			cout<<temp->dato<<endl;
			temp=temp->ant;
		}
	}
}

void lista::mostrar2()
{
	nodo *aux;
	aux=lista2;
	if(vacia2()==1)
	{
		cout<<"No hay elementos"<<endl;
	}
	else
	{
		while(aux!=NULL)
		{
			cout<<aux->dato<<endl;
			aux=aux->ant;
		}
	}
}

void lista::cardinalidad()
{
	nodo *temp;
	int cont;
	cont=0;

	temp=lista1;
	while(temp!=NULL)
	{
		cont++;
		temp=temp->ant;
	}
	cout<<"La cardinalidad es: "<<cont<<endl;
}

void lista::cardinalidad2()
{
	nodo *aux;
	int cont;
	cont=0;

	aux=lista2;
	while(aux!=NULL)
	{
		cont++;
		aux=aux->ant;
	}
	cout<<"La cardinalidad es: "<<cont<<endl;
}

void lista::interseccion()
{
	nodo *temp;
	nodo *aux;
	int cant;
	cant=0;

	temp=lista1;
	aux=lista2;

	while(temp!=NULL)
	{
		while(aux!=NULL)
		{
			if(aux->dato==temp->dato)
			{
				cout<<aux->dato<<endl;
				cant++;
			}
			aux=aux->ant;
		}

		temp=temp->ant;
		aux=lista2;
	}
	if(cant==0)
	{
		cout<<"No hay elementos en comun"<<endl;
	}
}

void lista::diferencia_A_B()
{
	nodo *temp;
	nodo *aux;
	int cant;


	temp=lista1;
	aux=lista2;
	cant=0;

	while(temp!=NULL)
	{
		while(aux!=NULL)
		{
			if(temp->dato==aux->dato)
			{
				cant=1;
			}
			aux=aux->ant;
		}
		if(cant==0)
		{
			cout<<temp->dato<<endl;
		}
		
		cant=0;
		temp=temp->ant;
		aux=lista2;

	}
}

void lista::diferencia_B_A()
{
	nodo *temp;
	nodo *aux;
	int cant;


	temp=lista1;
	aux=lista2;
	cant=0;

	while(aux!=NULL)
	{
		while(temp!=NULL)
		{
			if(aux->dato==temp->dato)
			{
				cant=1;
			}
			temp=temp->ant;
		}
		if(cant==0)
		{
			cout<<aux->dato<<endl;
		}

		cant=0;
		aux=aux->ant;
		temp=lista1;
	}
}

void lista::Union()
{

	if ((vacia()==1) && (vacia2()==1))
	{
		cout<<"No hay elementos en las listas"<<endl;
	}
	else
	{
		if(vacia()==1)
		{
			mostrar2();
		}
		else
		{
			if(vacia2()==1)
			{
				mostrar();
			}
			else
			{
				mostrar();
				mostrar2();		
			}
			
		}
	}
}

lista::~lista()
{
	nodo *temp;
	temp=lista1;
	
	while(temp!=NULL)
	{
		temp=lista1->ant;
		delete lista1;
		lista1=temp;
	}


	temp=lista2;
	while(temp!=NULL)
	{
		temp=lista2->ant;
		delete lista2;
		lista2=temp;
	}
}

int main(int argc, char** argv) {
	lista obj;
	int d, n;
	
	cout<<"Juan Antonio Ovalle Patino"<<endl;
	cout<<"Estructura de datos"<<endl;
	cout<<"Lista doblemente enlazada"<<endl;
	cout<<"2CM2"<<endl;
	cout<<"Num lista: 13"<<endl;
	system("PAUSE");

	do
	{
		system("CLS");
		cout<<"              LISTA DOBLEMENTE ENLAZADA"<<endl;
		cout<<"    * AGREGAR *"<<endl;
		cout<<"1)  ----------  En LISTA 1"<<endl;
		cout<<"2)  ----------  En LISTA 2"<<endl<<endl;
		cout<<"    * MOSTRAR *"<<endl;
		cout<<"3)  ----------  LISTA 1"<<endl;
		cout<<"4)  ----------  LISTA 2"<<endl<<endl;
		cout<<" * CARDINALIDAD *"<<	endl;
		cout<<"5)  ----------  En LISTA 1"<<endl;
		cout<<"6)  ----------  En LISTA 2"<<endl<<endl;
		cout<<"  * DIFERENCIA *"<<endl;
		cout<<"7)  ----------  De LISTA 1 menos LISTA 2"<<endl;
		cout<<"8)  ----------  De LISTA 2 menos LISTA 1"<<endl<<endl;
		cout<<"9)  ----------  INTERSECCION"<<endl;
		cout<<"10) ----------  UNION"<<endl;
		cout<<"11) ----------  SALIR"<<endl;
		cin>>d;
		cout<<endl;
		
		switch(d)
		{
			case 1:
				cout<<"Ingresar Dato"<<endl;
				cin>>n;
				obj.agregar(n);
				cout<<endl;
				break;
			case 2:
				cout<<"Ingresar Dato"<<endl;
				cin>>n;
				obj.agregar2(n);
				cout<<endl;
				break;
			case 3:
				obj.mostrar();
				cout<<endl;
				break;
			case 4:
				obj.mostrar2();
				cout<<endl;
				break;
			case 5:
				obj.cardinalidad();
				cout<<endl;
				break;
			case 6:
				obj.cardinalidad2();
				cout<<endl;
				break;
			case 7:
				obj.diferencia_A_B();
				break;
			case 8:
				obj.diferencia_B_A();
				break;
			case 9:
				obj.interseccion();
				cout<<endl;
				break;
			case 10:
				obj.Union();
				cout<<endl;
				break;
			case 11:
			{
				cout<<"Hasta luego "<<endl;
				cout<<endl;
				break;
			}
			default:
				cout<<"Opcion no valida"<<endl;
				cout<<endl;
				break;
		}
		system("PAUSE");
	}
	while(d!=11);
	
	return 0;
}
