#include <iostream>
#include <iomanip>
using namespace std;

void barchart(int s[], int as){
    int f[11] = {0};
    for(int i = 0; i < as; i++)
        f[s[i]/10]++;
    for(int i = 0; i < 11; i++){
        for(int j = 0 ; j < f[i] ; j++)
            cout<<"*";
        cout<<endl;
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
