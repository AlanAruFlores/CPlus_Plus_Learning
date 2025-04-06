#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	
	//Bit operations
	/*
		& --> Bitwise And (011 & 100 = 000 --> 3 & 4 = 0)
		| --> Bitwise Or (011 | 100 = 111 --> 3 | 4 = 7)
		^ --> Bitwise Exclusive Or (XOR) (111 ^ 100 = 011 --> 7 ^ 4 = 3) 
	*/
	int n1 = 3, n2 = 4;
	
	int bitwiseAnd = n1 & n2;
	int bitwiseOr = n1 | n2;
	int bitwiseXoR = 7 ^ 4;
	
	cout<<bitwiseAnd<<endl;
	cout<<bitwiseOr<<endl;
	cout<<bitwiseXoR<<endl;
	
	
	/*
		>> --> move to the right  bits "n" times
		<< --> move to the left bits "n" times
	*/
	
	int n3 = 5;
	int res  = n3 << 1;
	cout<<res<<endl;
	
	res = n3>>1;
	cout<<res<<endl;
	
	
	getch();
	return 0;
}