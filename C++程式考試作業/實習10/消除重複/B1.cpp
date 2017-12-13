#include <stdio.h>

bool a[91];
int b[20];

int main(){
    int jmax=0;
    for (int i=0,tmp=0;i<20;i++){
        scanf("%d",&tmp);
        if ((a<10||a>100)||a[tmp-10])
            continue;
        b[jmax++]=tmp;
        a[tmp-10]=1;
    }
    for (int j=0;j<jmax;j++)
        printf("%d ",b[j]);
}
