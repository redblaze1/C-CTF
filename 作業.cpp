#include <iostream>

int main()
{
	
	int num1; 
	int sum1; 
	int sum2; 
	int sum3; 
	int sum4; 
	int sum5;
	int sum6;
	int sum7;
	int sum8; 
	
	
	std::cout << "Please input a number: ";
	std::cin >> num1;
	
	sum1 = num1%2;
	sum2 = num1/2%2;
	sum3 = num1/2/2%2;
	sum4 = num1/2/2/2%2;
	sum5 = num1/2/2/2/2%2;
	sum6 = num1/2/2/2/2/2%2;
	sum7 = num1/2/2/2/2/2/2%2; 
	sum8 = num1/2/2/2/2/2/2/2%2; 
	
	std::cout << "你的2進位: " << sum8 << sum7 << sum6 << sum5 << sum4 << sum3 << sum2 << sum1;
}
