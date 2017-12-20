#include <iostream>
#include <iomanip>
using namespace std;

int n[11]={0};

int distribution(int score[],int arraySize){
    int i=0;
    for (;i<arraySize;i++){
    	n[score[i]/10]++;
	}
}

int maxf(int score[],int arraySize){
	int max=0;
	for(int i=0;i<11;i++){
		if(n[i]>max)
		max=n[i];
	}
	return max;
}

int verticalbar(int score[],int arraySize){
	int max;
	distribution(score,arraySize);
	max=maxf(score,arraySize);
	for(int x=max;x>0;x--){ //¦¸¼Æ
		for(int i=0;i<11;i++){
			if (n[i]>=x)
			cout << "*";
			else
			cout << " "; 
		}
		cout << endl;
	}
}

int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	verticalbar(score, arraySize);
}
