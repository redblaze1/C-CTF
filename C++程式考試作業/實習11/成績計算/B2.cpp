#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int score[],int arraySize){
	int max=-0xfffffff;
    for(int i=0;i<arraySize;i++){
    	if (score[i]>max)
    	max=score[i];
	}
	return max;
}

int minimum(int score[],int arraySize){
    int min=0xfffffff;
    for(int i=0;i<arraySize;i++){
    	if (score[i]<min)
    	min=score[i];
	}
	return min;
}

double average(int score[],int arraySize){
	int total=0;
	for(int i=0;i<arraySize;i++){
    	total+=score[i];
	}
	return total*1.0/arraySize;
}

int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	cout<<
	maximum(score, arraySize)<<endl;
	cout<<minimum(score, arraySize)<<endl;
	cout<<fixed<<setprecision(2)<<average(score, arraySize)<<endl;
}
