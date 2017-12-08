#include<iostream>
#include<iomanip>
using namespace std;

void square(int a){
	for(int i=a;i>0;i--){
		for(int x=a;x>0;x--)
		cout << "*";
		cout << endl;
	}
}

int main(){
	int side;
	cin >> side;
	square(side);
}
