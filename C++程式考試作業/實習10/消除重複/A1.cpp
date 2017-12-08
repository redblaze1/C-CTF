#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    set<int> a;
    for(int i = 0; i< 20 ;i++){
        int n;
        cin>>n;
        if(n < 10 || n > 100 || a.find(n) != a.end())
            continue;
        a.insert(n);
        cout<<n<<endl;
    }
    return 0;
}
