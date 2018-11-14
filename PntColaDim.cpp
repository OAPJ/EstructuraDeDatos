#include <iostream>

using namespace std;

struct scola
{
	int dato;
	scola *sig;
	//scola *ant;
}; 

class dcola
{
	private:
		scola *prin;
		scola *fin;
	public:
		dcola();
		void agregar(int);
		//char elecima();
		void sacar();
		void mostrarcl();
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
	temp= new scola;
	
	if(temp==NULL)
	{
		cout<<"No se puede cargar el dato"<<endl;
	}
	else
	{
		fin->dato=dat;
		fin->sig=temp;
		fin=temp;
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

void dcola::mostrarcl()
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
				pd.mostrarcl();
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
