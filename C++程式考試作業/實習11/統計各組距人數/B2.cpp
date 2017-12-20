#include <iostream>
#include <iomanip>
using namespace std;

int distribution(int score[],int arraySize){
    int n[11]={0};
    int i=0;
    for (;i<arraySize;i++){
    	n[score[i]/10]++;
	}
	for (int j=0;j<11;j++){
		cout << n[j] << " ";
	}
}

int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	distribution(score, arraySize);
}


