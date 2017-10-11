#include <iostream>
 
 int main(){
 	int num;
 	int num2;
 	int num3;
 	int num4;
 	int num5;
 	int max;
 	max=num;
 	
 	std::cin >> num;
 	std::cin >> num2;
 	std::cin >> num3;
 	std::cin >> num4;
 	std::cin >> num5;
	 if ( max < num2 ) 
	 max=num2;
         if ( max < num3 ) 
		 max=num3;
		 if ( max < num4 ) 
		 max=num4;
		 if ( max < num5 ) 
		 max=num5;
	 std::cout << "max: " << max << std::endl;
 }
