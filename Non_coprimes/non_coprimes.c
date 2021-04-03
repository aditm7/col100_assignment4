#include <stdio.h>
int gcd(int x, int y){
    int A=x, B=y, r;
    if (A>B) {
        r = A; A = B; B = r;
        }
    while ((B % A) != 0){
        r = B % A;
        B = A;
        A = r; 
        }
    return A;
}


void main(){
    int a,b;
    int c;
    scanf("%d%d",&a,&b);
    for (int i=a;i<=b;i++){
        for (int j=i;j<=b;j++){
            if (gcd(i,j)>1){
                c++;
            }
        }
    }
    printf("%d\n",c);
}