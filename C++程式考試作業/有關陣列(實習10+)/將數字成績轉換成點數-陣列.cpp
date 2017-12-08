#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5] = {0},n;
    while(cin>>n&&n!=-1)
        a[n/10-6 < 0 ? 0 : n==100 ? 4 : n/10-5]++;
    for(int i = 4; i>-1; i--)cout<<a[i]<<" ";
    return 0;
}
