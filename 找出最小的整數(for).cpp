#include<iostream>
using namespace std;
int main(){
	double a;
	int n;
	int min=0x7fffffff;
    cin >> n;
	for (;n>0;n--){
		cin >> a;
		if (min>a)
		min=a;
    }
    cout << min;
}
