#include <iostream>
using namespace std;
int main(){
	int n;
	int i=n;
	int m;
	cin >> n;
	cin >> m;
	while(i<=100){
		if(i%n==0)cout << i << endl;
		else if(i%m==0)cout << i << endl;
		i=i+1;
	}
}

