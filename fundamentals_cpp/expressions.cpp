 #include <stdio.h>
 #include <iostream>
 #include <conio.h>
 #include <math.h> //useful to use math's functions
 
 typedef float decimal;
 
 int main(int argc, char**argv){
	 
	 decimal num1  = 10.004;
	 decimal num2 = 8.012;
	 
	 decimal result = num1/num2;
	 
	 //cout.precision(int) is useful to short the result that you have, it's gonna to receive the decimals numbers to get in mind
	 std::cout.precision(2);
	 std::cout<<"The result is "<<result<<std::endl;
	 
	 
	 //Another way to short the results:
	 printf("The result is %.1f \n",result);
	

		
	getch();
	return 0;
 }