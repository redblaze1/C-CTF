#include <iostream>
using namespace std;

int qualityPoints(int a){
	if (a>=90 && a<=100)
	return 4;
	else if (a>=80 && a<=89)
	return 3;
	else if (a>=70 && a<=79)
	return 2;
	else if (a>=60 && a<=69)
	return 1;
	else
	return 0;
}

int main()
{
   int average; // current average

   for ( int loop = 1; loop <= 5; loop++ ) 
   {
      cin >> average;
      cout << qualityPoints( average ) << endl;
   } // end for

   cout << endl;
} // end main
