#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double Pi=0;
	int n;
	cin >> n;
    while (n>0){
    	if (n%2==0 && n!=0)
        Pi-=4.0/(1+2*(n-1));
        else
        Pi+=4.0/(1+2*(n-1));
        n-=1;
	}
	cout << fixed << setprecision(8) << Pi;
}

