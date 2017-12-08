#include <iostream>

int main()
{
	
	int num1; 
	double sum1;
	double sum2;
	double sum3; 
	
	std::cout << "Please input A Number: ";
	std::cin >> num1; 
	
	sum1 = num1%10 * 0.125;
	sum2 = num1/10%10 * 0.25;
	sum3 = num1/10/10%10 * 0.5; 
	
	std::cout << "你的二進位小數: " << sum1*1.000 + sum2*1.00 + sum3*1.0 << std::endl;
} 
	
