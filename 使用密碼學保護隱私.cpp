#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	cin >> a;
	cout << (a/10%10+7)%10*1000 + (a%10+7)%10*100 + (a/1000+7)%10*10 + (a/100%10+7)%10 << endl;
}

