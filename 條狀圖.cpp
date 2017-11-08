#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int a,i=0;
	while (i<5){
		cin >> a;
		while (a>0){
		cout << "*";
		a--;	
		}
		cout << endl;
		i++;
	}
}
