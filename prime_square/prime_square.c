#include <stdio.h>
#include <math.h>
int prime(int n){
    int p,a=0;
    p = (int) sqrt(n);
    for(;p>1;p--){
        if (n%p==0){
            a=1;
            break;
        }
    }
    return a;
}
void main() {
    int n;
    int c,b=2;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        c=0;
        for (int j=b;j<n*n*n*n;j++){
            if (prime(j)==0){
                printf("%d ",j);
                c+=1;
                b=j+1;
            if (c==n){
                printf("\n");
                break;
            }
            }
        }
    }
}