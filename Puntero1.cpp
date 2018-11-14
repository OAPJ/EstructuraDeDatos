#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n1;
	int *dir;
	
	cout<<"Ingresa numero "<<endl;
	cin>>n1;
	
	dir=&n1;
	
	cout<<"EL numero "<<n1<<" y esta guardada en "<<dir<<endl;
	
	int n2;
	float x;
	float *dir2;
	
	cout<<"Ingresa numero "<<endl;
	cin>>n2;
	
	dir=&n2;
	
	cout<<"EL numero "<<n2<<" y esta guardada en "<<dir<<endl;
	
	cout<<"Ingresa numero "<<endl;
	cin>>x;
	
	dir2=&x;
	
	cout<<"EL numero "<<x<<" y esta guardada en "<<dir2<<endl;
	return 0;
}
