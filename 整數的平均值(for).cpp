#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a=0;
	double n=0;
	double total;
	for (int i;a!=9999;){
	cin >> a;
	if (a!=9999){
	total+=a;
	n++;
	}
}
    cout << fixed << setprecision(2) << total/n;
}
