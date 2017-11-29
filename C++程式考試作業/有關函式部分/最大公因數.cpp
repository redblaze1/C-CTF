#include <iostream>
using namespace std;

int gcd(int a,int b){
    for(;a!=0,b!=0;){
    	if (a>b)
    	a=a%b;
    	if (b>a)
    	b=b%a;
	}
	return a;
}

int main()
{
   int a; // first number
   int b; // second number

   // loop for 5 pairs of inputs
   for ( int j = 1; j <= 5; j++ ) 
   {
      cin >> a >> b;
      cout <<  gcd( a, b ) << endl;
   } // end for
} // end main
