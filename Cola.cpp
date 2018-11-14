#include <cstdlib>
#include <iostream>
#define MAX 10
using namespace std;


class pcola
{
    private:
        int frente;
        int cola[MAX];
        int cima;
    public:
        pcola();
        int leer();
        void agregar(int);
        void sacar();
        bool vacia();
        bool llenar();
        void ele_frente();
        void imprimir();
        ~pcola ();
};

pcola::pcola()
{
    for(int i=0;i<MAX;i++)
    {
        cola[i]=0;
    }
    cima=-1;
    frente=0;
}

int pcola::leer()
{
    int dato;
    cout<<"Dato a ingresar" <<endl;
    cin>>dato;
    return dato;
}

void pcola::agregar(int Dat){
	if(llenar()==1){
		cout<<"Esta llena la pila"<<endl;
	}
	else{
	
		cima++;
		cola[cima]=Dat;
		cout<<"El dato se ingreso correctamente"<<endl;
	}
}
bool pcola::llenar(){
	if(cima==MAX-1){
		return 1;
	}
	else{
		return 0;
	}
}
bool pcola::vacia(){
	if(cima==-1){
		return 1;
	}
	else{
		return 0;
		
	}
}
void pcola::sacar(){
	if(vacia()==1){
		cout<<"La pila esta vacia"<<endl;
	}
	else{
		cout<<"Elemento a sacar: "<<cola[frente]<<endl;
		cola[frente]==0;
		frente++;
		cima--;
	}
}
void pcola::ele_frente(){
	if(vacia()==0){
		cout<<"Mostrar elementos "<<cola[frente]<<endl;
	}
	else{
		cout<<"La pila esta vacia: "<<endl;
	}
}
void pcola::imprimir(){
	int i=0;
	
	while(i<=cima){
		cout<<cola[i]<<endl;
		i++;
	}
	
}

pcola::~pcola()
{
    for(int i=0;i<MAX;i++)
    {
        cola[i]=0;
    }
    cima=-1;
    frente=0;
}

int main() {
	pcola obj;
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
			obj.ele_frente();
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
