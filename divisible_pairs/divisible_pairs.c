#include <stdio.h>
void main() {
    int a,b;
    int c=0;
    scanf("%d%d",&a,&b);
    for (int i=a;i<=b;i++) {
        for (int j=i;j<=b;j++){
            if (j%i==0){
                c+=1;
            }
        }
    }
    printf("%d\n",c);
}