#include <iostream>
using namespace std;

int gcd(int a,int b){
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
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
