#include <iostream>
using namespace std;
int main(){
    int a;
    int i=0;
	while (i<=2){
		cin >> a;
		if (a/10000==a%10 && a/1000%10==a/10%10)
		cout << "YES";
		else
		cout << "NO";	
		
		i=i+1;
	} 
}
