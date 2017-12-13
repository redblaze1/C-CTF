#include<iostream>
using namespace std;

bool check1(int a){
	if (a>=10 && a<=100)
	return true;
	else
	return false;
}

bool check2(int b[],int c){
	for(int i=0;i<=19;i++){
		if (b[i]==c)
		return false;
	}
	return true;
}

int main(){
	int a[20]={0};
	int b;
	for (int i=0;i<=19;i++){
		cin >> b;
		if (check1(b)){
			if (check2(a,b))
			a[i]=b;
			
		}
	}
	for (int i=0;i<=19;i++){
	if (a[i]!=0)
	cout << a[i] << " ";
	else
	continue;
	}
}
