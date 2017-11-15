#include <iostream>
#include <iomanip>
using namespace std;
double hypotenuse(double,double);

int main()
{
   double side1; 
   double side2; 
   
   cout << fixed; 

   
   for ( int i = 1; i <= 3; i++ ) 
   {
      cin >> side1 >> side2;

      
      cout << setprecision( 1 )
         << hypotenuse( side1, side2 ) << endl;
   } 
}


double hypotenuse(double side1,double side2){
	double sum=side1*side1+side2*side2;
	double a=0;
	for (;(a+0.01)*(a+0.01)<=sum;a+=0.01);
	return ((int)(a*10))/10.0;
}

