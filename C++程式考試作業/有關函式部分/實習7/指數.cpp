#include <iostream>
using namespace std;
int integerPower(int,int);

int main()
{
   int exp; 
   int base; 
   
   cin >> base >> exp;
   cout << integerPower( base, exp ) << endl;
}

int integerPower(int a,int b){
	for (;b>1;b--){
		a*=a;
	}
	return a;
}

