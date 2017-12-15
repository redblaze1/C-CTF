#include <bits/stdc++.h>
using namespace std;

void verticalbar(int s[], int as){
    int f[11] = {0};
    for(int i = 0; i < as; i++)
        f[s[i]/10]++;

    // y max
    int hight = f[0];
    for(int i = 1; i < 11; i++)
        hight = max(hight, f[i]);

    //output
    for(int y = 0; y < hight; y++){
        for(int x = 0; x < 11; x++){
            cout<< (hight-y > f[x] ? " " : "*");
        }
        cout<<endl;
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
