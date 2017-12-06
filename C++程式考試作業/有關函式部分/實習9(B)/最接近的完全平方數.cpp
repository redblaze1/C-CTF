#include<iostream>
#include<iomanip>
using namespace std;
int sqrfloor(int n){
	int i=1;
	for (;i*i<=n;i++);
	return (i-1)*(i-1);	
}

int main()
{
    int num;
    cin >> num;
    cout << sqrfloor(num)<<endl;
    
}
