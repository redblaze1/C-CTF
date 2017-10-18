#include <iostream>
using namespace std;
int main(){
	int a;
	int n;
	cin >> a;
	while(a>0){
	   a=a/10;
	   n++;
	}
	cout << n;
}
