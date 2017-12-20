#include <iostream>
#include <iomanip>
using namespace std;

#define max(x,y) (x)>(y)?(x):(y)
#define min(x,y) (x)<(y)?(x):(y)

int maximum(int *a,int sz){
    //for (int i=0;i<sz;i++) cout << a[i] << " ";
    int maxn = -0x7fffffff;
    for (int i=0;i<sz;i++)
        maxn=max(a[i],maxn);
    return maxn;
}
int minimum(int *a,int sz){
    int minn = 0x7fffffff;
    for (int i=0;i<sz;i++)
        minn=min(a[i],minn);
    return minn;
}

double average(int *a,int n){
    double sum=0;
    for (int i=0;i<n;i++)
        sum+=a[i];
    return sum/((double)n);
}

int main(){
  const int arraySize=100; 
  int score[arraySize];
  for(int i=0;i<arraySize;i++){
    cin>>score[i];
  }
  cout<<maximum(score, arraySize)<<endl;
  cout<<minimum(score, arraySize)<<endl;
  cout<<fixed<<setprecision(2)<<average(score, arraySize)<<endl;
}
CANCELFORWARD 2 DELETE 2
