#include <iostream>
#include <iomanip>
using namespace std;
int reverseDigits(int);

int main()
{
   int number; // input number

   for(int i=0;i<3;i++){
	  cin >> number;
	  cout << reverseDigits( number ) << endl;
   }
   
} // end main

int reverseDigits(int n){
	int m=n;
	int count,count2,sum,a={0};
	count2=1;
	a=1;
	sum=0;
	while (m>0){  //這邊很奇怪的是comp要10 網頁要0.... 
		m/=10;
		count++;
	}
	for (;count>1;count--)
	count2*=10;
	for (;count2>0;count2/=10){
	sum+=(n/a)%10*count2;
	a*=10;
}
	return sum;
}



