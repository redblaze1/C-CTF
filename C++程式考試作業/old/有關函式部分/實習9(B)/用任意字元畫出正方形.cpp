#include<iostream>
#include<iomanip>
using namespace std;
void square(int a,char n){
	for(int i=a;i>0;i--){
		for(int x=a;x>0;x--)
		cout<<n;
		cout<<endl;
    }
}	
int main(){
	int side;
	char fillCharacter;
	cin >> side >> fillCharacter;
	square(side,fillCharacter);
}
