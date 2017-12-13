#include<iostream>
using namespace std;

int main(){
    int a;
    int b[5]={0};
    cin >> a;
    for(int i=0;i!=-1;i++){
    if (a==-1)
    break;
    else if (a<=100 && a>=90)
    b[0]+=1;
    else if (a<=89 && a>=80)
    b[1]+=1;
    else if (a<=79 && a>=70)
    b[2]+=1;
    else if (a<=69 && a>=60)
    b[3]+=1;
    else
    b[4]+=1;
    cin >> a;
    }
    for (int j=0;j<=4;j++)
    cout << b[j] << " ";
}
