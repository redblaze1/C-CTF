#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a;
	int b;
	cin >> a;
	b=a/10%10*1000+a%10*100+a/1000*10+a/100%10;
    cout << (b/1000+3)%10*1000+(b/100%10+3)%10*100+(b/10%10+3)%10*10+(b%10+3)%10;
}
