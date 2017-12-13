#include <stdio.h>

class a{
    int b[5];
    public:
        a(){}
        ~a(){}
        int & operator[](int n){
            return n<60?b[0]:n<70?b[1]:n<80?b[2]:n<90?b[3]:n<100?b[4]:b[0];
        }
        void print(){
            for (int i=4;i>=0;i--)
                printf("%d ",b[i]);
        }
}

int main(){
    a c;
    for (int tmp=0;(scanf("%d",&tmp)?1:1)&&tmp!=-1;)
        c[tmp]++;
    c.print();
}
