#include<iostream>
#include<iomanip>
using namespace std;

//int fun(int a){
//	int count=0;
//	for(;a>0;a/=10)
//	count++;
//}

int sumOfDigits(int a){
	int sum=0;
	for(;a>0;){
	sum+=a%10;
	a/=10;
    }
    return sum;
} 
int main()
{
    int num;
    cin >> num;
	cout << sumOfDigits(num)<< endl;      
}
