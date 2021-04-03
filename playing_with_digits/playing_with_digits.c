#include <stdio.h>
int sumD(int n){
    int c=0;
    while (n>0){
        c+= n%10;
        n=n/10;
    } 
    return c;  
}

int numD(int c,int n){
    int a=0;
    for (int i=1; i<=n; i++){
        if (i%c==0){
            a++;
        }
    }
    return a;
}

void main() {
    int n,sum=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        sum+= numD(sumD(i),i);
    }
    printf("%d\n",sum);
}