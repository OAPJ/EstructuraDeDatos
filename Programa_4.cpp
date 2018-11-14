#include <iostream>

/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 13
   Programa Academico: Estructura de datos
   Fecha: 21/Feb/17
   Evidencia: Programa 4
   Grupo: 2CM2
*/

using namespace std;

class cuenta
{
	private:
		int saldo;
		int op;
	public:
		cuenta();
		void solicitar();
		float saldocuenta();
		int decicion();
		float leer();
		float deposito(float, float);
		float retiro(float, float);
		void mostrar(float);
		~cuenta();
};

cuenta::cuenta()
{
	saldo=0;
	op=0;
}

int cuenta::decicion()
{
	cout<<endl<<"Que decea hacer"<<endl;
	cout<<"1)...Un retiro"<<endl;
	cout<<"2)...Un deposito"<<endl;
	cin>>op;
	system("PAUSE");
	system("CLS");
	return op;
}

void cuenta::solicitar()
{
	cout<<"Cual es el valor: $ "<<endl;
}

float cuenta::saldocuenta()
{
	cout<<"Saldo de la cuenta: $ ";
}
float cuenta::leer()
{
	cin>>saldo;
	return saldo;
}

float cuenta::deposito(float s,float c)
{
	return s+c;
}

float cuenta::retiro(float s, float x)
{
	return s-x;
}

void cuenta::mostrar(float r)
{
	cout<<"Saldo restante: $ "<<r<<endl<<endl;
}

cuenta::~cuenta()
{
	saldo=0;
	op=0;
}

int main(int argc, char** argv) {
	cuenta op;
	int d;
	float a,s,r,de, saldo;
	
	
		op.saldocuenta();
			saldo=op.leer();
			d=op.decicion();
			switch(d){
				case 1:
					op.solicitar();
					s=op.leer();
					if(s<=saldo){
						r=op.retiro(saldo,s);
						op.mostrar(r);
					}
					if(s>saldo){
						cout<<"EL saldo que decea retirar es mayor al saldo que tiene y no se pude hacer"<<endl;
					}
					break;
				case 2:
					op.solicitar();
					s=op.leer();
					de=op.deposito(saldo,s);
					op.mostrar(de);
			}
			cout<<"Desea hacer otra transaccion"<<endl<<"1)..Si"<<endl<<"2)..No"<<endl;
			cin>>a;
	
	while(a==1){
		//op.saldocuenta();
		//saldo=op.leer();
			d=op.decicion();
			switch(d){
				case 1:
					op.solicitar();
					s=op.leer();
					if(s<=saldo){
						r=op.retiro(saldo,s);
						op.mostrar(r);
					}
					if(s>saldo){
						cout<<"EL saldo que decea retirar es mayor al saldo que tiene y no se pude hacer"<<endl;
					}
					break;
				case 2:
					op.solicitar();
					s=op.leer();
					de=op.deposito(saldo,s);
					op.mostrar(de);
			cout<<"Desea hacer otra transaccion"<<endl<<"1)..Si"<<endl<<"2)..No"<<endl;
			cin>>a;
			}
   }
	return 0;
}
