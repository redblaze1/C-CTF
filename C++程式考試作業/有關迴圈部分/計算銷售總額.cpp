#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int n,x;
	double a[5]={0};
	double sum=0;
	
	cin >> n;
	while (n!=-1){
		cin >> x;
		switch(n){
		case 1:
			a[0]+= x*2.98;
			sum +=x*2.98;
			break;
		case 2:
			a[1]+=x*4.5;
			sum +=a[1];
			break;
		case 3:
			a[2]+= x*9.98;
			sum +=a[2];
			break;
		case 4:
			a[3]+= x*4.49;
			sum +=a[3];
			break;
		case 5:
			a[4]+= x*6.87;
			sum+=a[4];
			break;
			
		}
		cin >> n;
	}
	for (int i=0;i<5;i++)
		cout << fixed << setprecision(2) << a[i] << endl;
	cout << fixed << setprecision(2) << sum;
}
