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
	for (int c=a;b>1;b--){
		a*=c;
	}
	return a;
}

