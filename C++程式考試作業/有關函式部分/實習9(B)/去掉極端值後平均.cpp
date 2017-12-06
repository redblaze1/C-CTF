#include<iostream>
#include<iomanip>
using namespace std;
double average(int a,int b,int c,int d,int e){
	int n[5]={a,b,c,d,e};
	int max=0;
	int min=0xfffffff; 
	for (int i=0;i<=4;i++){
		if (n[i]>max)
		max=n[i];
		if (n[i]<min)
		min=n[i];
	}
	return (a+b+c+d+e-max-min)/3.0;
}

int main()
{
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >> a3 >>a4 >> a5;
    cout << setprecision(2)<<fixed<<average(a1,a2,a3,a4,a5)<<endl;
    
}

