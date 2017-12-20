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

int barchart(int score[],int arraySize){
	distribution(score,arraySize);
	for(int i=0;i<11;i++){
		for (int j=0;j<n[i];j++)
		cout << "*";
		cout << endl;
	}
}

int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	barchart(score, arraySize);
}
