#include <iostream>
#include <cmath>
using namespace std;
int seconds(int,int,int);
int main()
{
   unsigned hours; 
   unsigned minutes; 
   unsigned secs; 
   int first;
   int second; 
   int difference; 

   cin >> hours >> minutes >> secs;
   first = seconds( hours, minutes, secs ); 

   cin >> hours >> minutes >> secs;
   second = seconds( hours, minutes, secs ); 
   difference = fabs( first - second ); 

   
   cout << difference << endl;
}

int seconds(int a,int b,int c){
	int sum;
	a*=60*60;
	b*=60;
	sum=a+b+c;
}
