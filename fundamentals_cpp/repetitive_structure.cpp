 #include <stdio.h>
 #include <conio.h>
 #include <iostream>
 
 int main(){
		
	//while
	int i = 0;
	while(i<10){
		std::cout<<"While: "<<i<<std::endl;
		i++;
	}
	 
	//do while
	int j = 0;
	do{
		std::cout<<"Do while: "<<j<<std::endl;
		j++;
	}while(j<10);
	 
	 
	//for
	for(int k = 0; k < 10 ; k++){
		std::cout<<"For: "<<k<<std::endl;
	}
	 
	 getch();
	 return 0;
 }