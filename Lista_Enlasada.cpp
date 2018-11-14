#include <iostream>
/*insertar inicio, insertar final, eliminar inicio, eliminar final, eliminar elemento,
mostrar inicio, mostrar final, mostrar lista, salir*/
using namespace std;

struct slista
{
	int dato;
	slista *sig;
};

class lista
{
	private:
		slista *prin;
		slista *fin;
	public:
		lista();
		void insIni(int);
		void insFin(int);
		void buscarELe();
		void eliIni();
		void eliFin();
		void eliElem();
		void mosIni();
		void mosFin();
		void mosLis();
		bool vacia();
		~lista();
};

lista::lista()
{
	prin=new slista;
	fin=prin;
}

bool lista::vacia()
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

void lista::insIni(int dat)
{
	slista *temp;
	temp=new slista;
	
	if(temp==NULL)
	{
		cout<<"No se puede cargar el dato"<<endl;
	}
	else
	{
		temp->dato=dat;
		temp->sig=prin;
		prin=temp;
		cout<<"Se guardo el dato correctamente"<<endl;
	}
}

void lista::insFin(int dat)
{
	slista  *aux;
	aux=new slista;
	
	if(aux==NULL)
	{
		cout<<"No se puede cargar el dato"<<endl;
	}
	else
	{
		fin->dato=dat;
		fin->sig=aux;
		fin=aux;
		cout<<"Se guardo el dato correctamente"<<endl;
	}
}

void lista::mosIni()
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

void lista::mosFin()
{
	if(vacia()==1)
	{
		cout<<"No tiene elemento"<<endl<<endl;
	}
	else
	{
		cout<<fin->dato<<endl;
	}
}

void lista::mosLis()
{
	slista *temp;
	
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

void lista::eliIni()
{
	slista *temp;
	
	if(vacia()==1)
	{
		cout<<"No tiene elementos"<<endl<<endl;
	}
	else
	{
		cout<<"Elemento a eliminar "<<prin->dato<<endl;
		temp=prin;
		prin=prin->sig;
		delete temp;
	}
}

void lista::eliFin()
{
	slista *temp;
	slista *aux, *aux2;
	
	if(vacia()==1)
	{
		cout<<"No tiene elementos"<<endl<<endl;
	}
	else
	{
		aux=prin;
		while(aux!=fin)
		{
			aux2=aux;
			aux->sig=temp;
			aux=temp;
		}
		delete aux2;
		fin=aux2;
	}
}
void lista::eliElem()
{
	slista *aux, *aux2;
	
	int el;
	cout<<"Elemento a eliminar: "<<endl;
	cin>>el;
	
	aux=prin;
	while(aux->dato!=el)
	{
		aux2=aux;
		aux=aux->sig;
	}
	delete aux2;
}

void lista::buscarELe()
{
	slista *aux, *aux2;
	int bu, cont=0;
	
	cout<<"elemento a buscar: "<<endl;
	cin>>bu;
		
	aux=prin;
	while(aux!=fin)
	{
		if(aux->dato==bu)
		{
			cont++;
			
			break;
		}
		aux=aux->sig;
	}
	if(cont==1)
	{
		cout<<"El elemento si existe"<<endl;	
	}
	else
	{
		cout<<"El elemento no existe"<<endl;	
	}
	
	
}

lista::~lista()
{
	slista *temp;
	
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

int main(int argc, char** argv) {
	lista obj;
	int de, n;
	
	do
	{
		system("CLS");
		cout<<"Insertar"<<endl;
		cout<<"1...... Al Inicio"<<endl;
		cout<<"2...... Al Final"<<endl;
		cout<<"3...... Buscar Elemento"<<endl;
		cout<<"Eliminar"<<endl;
		cout<<"4...... Al Inico"<<endl;
		cout<<"5...... Al Final"<<endl;
		cout<<"6...... Un Elemento"<<endl;
		cout<<"Mostrar"<<endl;
		cout<<"7...... Inicio"<<endl;
		cout<<"8...... Final"<<endl;
		cout<<"9...... Lista"<<endl;
		cout<<"10..... Salir"<<endl;
		cin>>de;
		cout<<endl;
		
		switch(de)
		{
			case 1:
				cout<<"Numero: "<<endl;
				cin>>n;
				obj.insIni(n);
				cout<<endl;
				break;
			case 2:
				cout<<"Numero: "<<endl;
				cin>>n;
				obj.insFin(n);
				cout<<endl;
				break;
			case 3:
				obj.buscarELe();
				cout<<endl;
				break;
			case 4:
				obj.eliIni();
				cout<<endl;
				break;
			case 5:
				obj.eliFin();
				cout<<endl;
				break;
			case 6:
				obj.eliElem();
				cout<<endl;
				break;
			case 7:
				obj.mosIni();
				cout<<endl;
				break;
			case 8:
				obj.mosFin();
				cout<<endl;
				break;
			case 9:
				obj.mosLis();
				cout<<endl;
				break;
			case 10:
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
	while(de!=10);
	return 0;
}
