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
	
	
	/*
		Math library examples
	*/
	
	//sqrt(base) --> get the square
	decimal num3  = sqrt(4);
	printf("The square is %.1f \n", num3); 

	//pow(base,exp) 
	decimal num4 = pow(4,2);
	printf("The pow's result is %.1f \n", num4);
	
	//ceil(decimal) it's round to up your numbers
	decimal num5 = ceil(4.789898); //5
	printf("The result is %.1f \n", num5);
	
	//floor(decimal) it's round to down your number
	decimal num6 = floor(4.72323); //4
	printf("The result is %.1f \n",num6);
	
	//fmod(num1,num2) retrieve the rest's division	
	decimal num7 = fmod(4,2); //0
	printf("The rest of the division is %.1f\n",num7);
	
	//M_PI get the PI Number
	decimal PI = M_PI;
	printf("The PI number is %f\n",PI);
	
	//M_PI_2 get the PI Number divided by TWO
	decimal PI_TWO  = M_PI_2;
	printf("The PI / 2 number is %f\n",PI_TWO);
	
	
	getch();
	return 0;
 }