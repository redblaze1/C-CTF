#include <bits/stdc++.h>
using namespace std;

void square( int side ){
    for(int i =0; i< side; i++){
        for(int j = 0; j < side; j++)
            cout<<'*';
        cout<<endl;
    }
}
int main()
{
    int sild;
    cin >> sild;
    square(sild);
}
