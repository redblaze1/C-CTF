//一個可以產生int的指標的指標(循環)的工具
#include <iostream>
using namespace std;


void sss(int n){
    if(n == 1){
        cout<<"new int(654987)";
    }else{
        cout<<"new int";
        for(int i = 1; i<n ;i++)
            cout<<"*";
        cout<<"(";
        sss(n-1);
        cout<<")";
    }
}

int main(){
    //int****** brr= new int*****(new int****(new int***(new int**(new int*(new int(654987))))));
    int n;
    cin>>n;
    cout<<"int";
    for(int i = 0; i<n ;i++)
        cout<<"*";
    cout<<" arr = ";
    sss(n);
    cout<<";";
    return 0;
}
