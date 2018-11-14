#include <iostream>
#define MAX 5

using namespace std;


class ccola
{
	private:
		int frente;
		int final;
		int n;
		int cola[MAX];
	public:
		ccola();
		int leer();
		void agregar(int);
		void sacar();
		bool llenar();
		bool vacia();
		void e_frente();
		void imprimir();
		~ccola();
};

ccola::ccola()
{
	frente=0;
	final=0;
	n=-1;
	for(int i=0;i<MAX;i++)
	{
		cola[i]=0;
	}
}

int ccola::leer()
{
	int dato;
	cout<<"Dato a ingresar: "<<endl;
	cin>>dato;
	return dato;
}

void ccola::agregar(int x)
{
	if(llenar()==1){
		cout<<"Esta llena la pila"<<endl;
	}
	else{
		do
		{
		n++;
		cola[n]=x;
		cout<<"El dato se ingreso correctamente"<<endl;	
		 }
		while(n!=MAX){
			n=final;
			cola[n]=x;
			cout<<"El dato se ingreso correctamente"<<endl;
		}
		
	}
}

void ccola::sacar()
{
	if(vacia()==1){
		cout<<"La pila esta vacia"<<endl;
	}
	else{
		cout<<"Elemento a sacar: "<<cola[frente]<<endl;
		final=frente;
		cola[n]==0;
		n--;
		frente++;
	}
}

bool ccola::llenar()
{
	if(n==MAX-1){
		return 1;
	}
	else{
		return 0;
	}
}

bool ccola::vacia()
{
	if(n==-1){
		return 1;
	}
	else{
		return 0;
		
	}
}

void ccola::e_frente()
{
	if(vacia()==0){
		cout<<"Mostrar elementos "<<cola[frente]<<endl;
	}
	else{
		cout<<"La pila esta vacia: "<<endl;
	}
}

void ccola::imprimir()
{
	int i=frente;
	
	while(i<=n){
		cout<<cola[i]<<endl;
		i++;
	}
}

ccola::~ccola()
{
	frente=-1;
	final=0;
	n=-1;
	for(int i=0;i<MAX;i++)
	{
		cola[i]=0;
	}	
}

int main(int argc, char** argv) {
	ccola obj;
	int opc,Dat;
	do{	
	system("cls");
	cout<<"Agregar elemento.....1"<<endl;	
	cout<<"Sacar elemento.......2"<<endl;		
	cout<<"Elemento frente......3"<<endl;		
	cout<<"Mostrar pila.........4"<<endl;		
	cout<<"salir................5"<<endl;		
	cin>>opc;
	switch(opc){
		case 1:{
			Dat=obj.leer();
			obj.agregar(Dat);
				system("PAUSE");
			break;
		}
		case 2:{
			obj.sacar();
				system("PAUSE");
			break;
		}
		case 3:{
			obj.e_frente();
				system("PAUSE");
			break;
		}
		case 4:{
			cout<<endl;
			obj.imprimir();
			system("PAUSE");
			break;
		}
		case 5:{
			cout<<"Adios"<<endl;
				system("PAUSE");
			break;
		}
		default:{
			cout<<"No es opcion valida"<<endl;
			system("PAUSE");
			break;
		}
	
	}					
	}while(opc!=5);
	return 0;
}
