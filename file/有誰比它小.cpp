#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int a,m,n,count=0;
	cin >> m;
	for(cin >> n;n>0;n--){
		cin >> a;
	if (m>a)
	count++;
	}
	cout << count;
}
	
