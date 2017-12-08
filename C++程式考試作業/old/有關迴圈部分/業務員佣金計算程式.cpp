#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a;
	
	cin >> a;
	
	while (a!=-1){
	cout << fixed << setprecision(2) << a * 0.09 + 200<< " ";
	cin >> a;
    }
}
