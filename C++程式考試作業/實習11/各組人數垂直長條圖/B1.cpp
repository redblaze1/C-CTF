#include <iostream>
#include <iomanip>
using namespace std;

#define max(x,y) (x)>(y)?(x):(y)

class scoreT{
  private:
    int a[11];
  public:
    scoreT(){
      for (int i=0;i<11;i++)
        a[i] = 0;
    }
    ~scoreT(){}
    int & operator[](int n){
      return a[n];
    }
    void insert(int score){
      this->a[score/10]++;
    }
};

void vertical_barchart(int *a,int n){
  scoreT st;
    //int maxn = -0x7fffffff;
  for (int i=0;i<n;i++)
    st.insert(a[i]);
  for (int i=0;i<11;i++)
    maxn=max(maxn,st[i]);
  for (int i=0;i<maxn;i++,putchar('\n'))
    for (int j=0;j<11;j++)
      putchar((maxn-i)==st[j]?(st[j]--,'*'):' ');
  for (int i=0;false && i<11;i++,putchar('\n'))
    for (int j=0;j<st[i];j++)
      putchar('*');
}

int main(){
  const int arraySize=100; 
  int score[arraySize];
  for(int i=0;i<arraySize;i++){
    cin>>score[i];
  }
  verticalbar(score, arraySize);
}