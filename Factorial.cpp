#include <iostream>

class CFacto
{
	private:
		int res;
	public:
		CFacto();
		int factorial(int);
		~CFacto();
	
};
CFacto::CFacto()
{
	res=1;
}

int CFacto:: factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		res= n*factorial(n-1);
		return res;
	}
}

CFacto::~CFacto()
{
}
int main(int argc, char** argv) {
	
	
	return 0;
}
