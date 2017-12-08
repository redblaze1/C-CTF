#include <bits/stdc++.h>
using namespace std;

void square( int side, char fillCharacter ){
    for(int i =0; i< side; i++){
        for(int j = 0; j < side; j++)
            cout<<fillCharacter;
        cout<<endl;
    }
}
int main()
{
    int sild;
    char c;
    cin >> sild >> c;
    square(sild,c);
}
