#include <iostream>
using namespace std;
int main(){
    int a;
    int i=0;
    int max;
    max=0;
	while (i<=9){
		cin >> a;
		if (max<a)		
			max=a;
		i=i+1;
	} 
	cout << max;
}
