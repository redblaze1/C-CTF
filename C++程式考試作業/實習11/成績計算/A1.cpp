#include <bits/stdc++.h>
using namespace std;

int maximum(int s[], int as){
    int max_ = s[0];
    for (int i = 1; i < as; i++)
        max_ = max(max_, s[i]);
    return max_;
}

int minimum(int s[], int as){
    int min_ = s[0];
    for (int i = 1; i < as; i++)
        min_ = min(min_, s[i]);
    return min_;
}

double average(int s[], int as){
    double avg = 0;
    for(int i=0; i<as ; i++)
        avg+=s[i];
    return avg/as;
}

int main(){
	const int arraySize=100;
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	cout<<maximum(score, arraySize)<<endl;
	cout<<minimum(score, arraySize)<<endl;
	cout<<fixed<<setprecision(2)<<average(score, arraySize)<<endl;
}
