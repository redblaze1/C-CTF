#include <bits/stdc++.h>
// 因題目限制所以用了許多無意義的參數
using namespace std;
double average(int, int, int, int, int);
int main()
{
    int a1,a2,a3,a4,a5;
    cout << setprecision(2)<<fixed<<average(0,0,0,0,0)<<endl;

}



double average(int a, int b, int c, int d, int e){
    double input, _max, _min, total =0;
    cin>>input;
    total+=input;
    _max = input;
    _min = input;
    for(int i = 1; i < 5; i++){
        cin>>input;
        total += input;
        _max = max(input, _max);
        _min = min(input, _min);
    }
    return (total - _max - _min) /3;
}
