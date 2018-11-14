#include <iostream>
#include <cstdlib>
#define MaxTamC 100

using namespace std;

typedef int TipoDato;

class Cola
{
	protected:
		int frente, final;
		TipoDato A[MaxTamC];
	public:
		Cola();
		~Cola();
		void vaciac();
		void anadec(TipoDato e);
		void borrarc();
		TipoDato primeroc();
		bool esvaciac();
		
	private:
		bool estallenac();
};

Cola::Cola()
{
	frente=0;
	final=0;
}

Cola::~Cola()
{
	frente=0;
	final=0;
}

void Cola::vaciac()
{
	frente=0;
	final=0;
}

void Cola::anadec(TipoDato e)
{
	if(estallenac())
	{
		cout<<"desbordamiento cola"<<endl;
		exit(1);
	}
	final=(final+1) % MaxTamC;
	A[final]=e;
}

TipoDato Cola::primeroc()
{
	if(esvaciac())
	{
		cout<<"Elemento frente de una cola vacia"<<endl;
		exit(1);
	}
	return (A[(frente+1)%MaxTamC]);
}

bool Cola::esvaciac()
{
	return (frente==(final+1)%MaxTamC);
}

bool Cola::estallenac()
{
	return (frente==(final+1)%MaxTamC);
}

void Cola::borrarc()
{
	if(esvaciac())
	{
		cout<<"Eliminacion de una cola vacia"<<endl;
		exit(1);
	}
	frente=(frente+1)%MaxTamC;
	
}

int main(int argc, char** argv) {
	return 0;
}
