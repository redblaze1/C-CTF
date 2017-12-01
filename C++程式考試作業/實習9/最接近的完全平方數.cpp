#include <bits/stdc++.h>
using namespace std;

int sqrfloor(int num){
    return pow(floor(sqrt(num)),2);
}
int main()
{
    int num;
    cin >> num;
    cout << sqrfloor(num)<<endl;

}
