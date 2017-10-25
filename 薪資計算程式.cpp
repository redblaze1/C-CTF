#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a;
	double b;
	
	cin >> a;
	
	while (a!=-1){
	cin >> b;
	if (a<=40)
	cout << fixed << setprecision(2) << a * b << " ";
	else if (a>40)
	cout << fixed << setprecision(2) << 40 * b + ((a-40)*b*1.5)  << " ";
	cin >> a;
    }
}
