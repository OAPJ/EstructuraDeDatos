#include <iostream>

/* Nombre: Juan Antonio Ovalle Patiño
   Nl: 13
   Programa Academico: Estructura de datos
   Fecha: 21/Feb/17
   Evidencia: Programa 7
   Grupo: 2CM2
*/

using namespace std;

int menu();

class unidades
{
	private:
		int valor;
	public:
		unidades();
		void solicitar();
		float leer();
		float pulgada_cm(float);
		float pie_cm(float);
		float calorias_joules(float);
		float onza_gramo(float);
		float caballos_watts(float);
		void mostrar(float);
		~unidades();
};

int menu()
{
	int a;
	cout<<"Que combercion quieres hacer"<<endl;
	cout<<"1)..Pulgadas a cm"<<endl;
	cout<<"2)..Pie a cm"<<endl;
	cout<<"3)..Calorías a joules"<<endl;
	cout<<"4)..Onza a gramos"<<endl;
	cout<<"5)..Caballos de fuerza a Watts"<<endl;
	cout<<"6)..Salir"<<endl;
	cin>>a;
	system("PAUSE");
	system("CLS");
	return a;
}

unidades::unidades()
{
	valor=0;
}

void unidades::solicitar()
{
	cout<<"Medida: "<<endl;
}

float unidades::leer()
{
	cin>>valor;
	return valor;
}

float unidades::pulgada_cm(float x)
{
	return x*2.54;
}

float unidades::pie_cm(float x)
{
	return x*30.48;
}

float unidades::calorias_joules(float a)
{
	return a*4.1868;
}

float unidades::onza_gramo(float a)
{
	return a*28.3495;
}

float unidades::caballos_watts(float b)
{
	return b*745.7;
}

void unidades::mostrar(float re)
{
	cout<<"El resultado es: "<<re<<endl;
}

unidades::~unidades()
{
	valor=0;
}

int main(int argc, char** argv) {
	unidades op;
	int de;
	float m,r;
	
	de=menu();
	while(de>=1 && de<=5)
	{
		de=menu();
		switch(de){
	        case 1:
		        cout<<"PULGADAS A CM"<<endl;
		        op.solicitar();
		        m=op.leer();
		        r=op.pulgada_cm(m);
		        op.mostrar(r);
		        cout<<endl;
		        //de=menu();
		        break;
		
	        case 2:
		        cout<<"PIE A CM"<<endl;
		        op.solicitar();
		        m=op.leer();
		        r=op.pie_cm(m);
		        op.mostrar(r);
		        cout<<endl;
		        //de=menu();
		        break;
		
	        case 3:
		        cout<<"CALORIAS A JOULES"<<endl;
		        op.solicitar();
		        m=op.leer();
		        r=op.calorias_joules(m);
		        op.mostrar(r);
		        cout<<endl;
		        //de=menu();
		        break;
		
	        case 4:
		        cout<<"ONZA A GRAMO"<<endl;
		        op.solicitar();
		        m=op.leer();
		        r=op.onza_gramo(m);
		        op.mostrar(r);
		        cout<<endl;
		        ///de=menu();
		        break;
		
	        case 5:
		        cout<<"CABALLOS DE FUERZA A WATTS"<<endl;
		        op.solicitar();
		        m=op.leer();
		        r=op.caballos_watts(m);
		        op.mostrar(r);
		        cout<<endl;
		        //de=menu();
		        break;
	        case 6:
			        break;
        }
	}

	
	return 0;
}
