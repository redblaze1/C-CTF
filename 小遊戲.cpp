#include <iostream>
using namespace std;
int main(){
	int a=18;
	int n=0;
	cout << "請輸入1~20個數: " << endl; 
	if (a<=20){ 
	while (n==0){
		cin >> a;
		if (a==18){
		cout << "答對了!!";
		n++;
	        }
		if (a==17 || a==19)
		cout << "差一點點OAO" << endl;
		else if (a<17 || a==20)
		cout << "再試試看QQ" << endl;
                if (a>20 || a<=0)
                cout << "87請輸入1到20以內的數好ㄇ" << endl;
	}
}
    if (a>20 || a<=0)
    cout << "87請輸入1到20以內的數好ㄇ" << endl;
    system("pause");
} 
