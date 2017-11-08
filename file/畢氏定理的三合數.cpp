#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int i;
	int count=0;
	cin >> i;
	for (int a=1;a<=i;a++){
	 for (int b=1;b<=i;b++){
	  for (int c=1;c<=i;c++){
	  	if (a*a+b*b==c*c)
        count++;
	  }
	 }	
    }
    cout << count/2; 
}

