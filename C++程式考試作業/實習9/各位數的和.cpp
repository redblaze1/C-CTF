#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int);
int main()
{
    int num;
    cin >> num;
	cout << sumOfDigits(num)<< endl;
}

int sumOfDigits(int n){
    int total = 0;
    while(n>0){
        total += n%10;
        n /= 10;
    }
    return total;
}
