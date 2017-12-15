#include <iostream>
#include <iomanip>
using namespace std;

void distribution(int s[], int as){
    int f[11] = {0};
    for(int i = 0; i < as; i++)
        f[s[i]/10]++;
    for(int i = 0; i < 11; i++)
        cout<<f[i]<<" ";
}

int main(){
	const int arraySize=100;
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	distribution(score, arraySize);
}

