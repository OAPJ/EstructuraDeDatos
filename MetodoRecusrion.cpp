#include <iostream>
using namespace std;
class primo
{
	private:

	public:
		primo();
		bool esPrimo(int,int);
		~primo();
};

primo::primo()
{
	
}

bool primo::esPrimo(int num, int divisor)
{
	if((divisor==1)||(divisor==0))
	{
		return true;
	}
	if((divisor<num)&&(divisor>1))
	{
		if(num%divisor==0)
		{
			return false;
		}
		
	}
	esPrimo(num,divisor-1);
}

primo::~primo()
{
	
}

int main(int argc, char** argv) {
	primo ob;
	int N;
	//N=13;
	cout<<"Ingresa un numero"<<endl;
	cin>>N;
	
	if(ob.esPrimo(N,N)==true)
	{
		cout<<"El numero es primo"<<endl;
	}
	else
	{
		cout<<"El numero no es primo"<<endl;
	}
	
	return 0;
}
