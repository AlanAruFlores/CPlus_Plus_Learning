#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int a;
	
	srand(time(0)); // Inicializa la semilla con el tiempo actual
	//Entre 1 - 100
	a = 1 + rand() % (100 + 1 - 1);
	
	cout<<"El numero random es: "<<a<<endl;
	
	
	return 0;
}