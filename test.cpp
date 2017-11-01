#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int Pi=0;
	int n;
	cin >> n;
	for (int i=0;i<=n;i++){
	if (n%2==0){
	Pi+=
    }
    else{
    m=2*n-1;
	Pi=Pi-4/m;
}
	}
	cout << Pi;
}
//(計算Pi) 從以下的無窮級數計算出Pi值
//
//Pi=4-4/3+4/5-4/7+4/9-4/11+…
//
//輸入n，顯示計算至此級數第n項的π的近似值。(請輸出至小數點後八位)
//
//例：
//
//輸入 1
//
//輸出 4.00000000
//
//輸入 10
//
//輸出 3.04183962
