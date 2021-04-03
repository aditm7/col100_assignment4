#include <stdio.h>
void main(){
    int n,c=1;
    scanf("%d",&n);
    for (int i=1;i<=2*(n);i++){
        for (int j=1;j<=(4*n-2);j++){
            if(j==c || j==((4*n-2)-2*(c-1))){
                for (int k=0;k<c;k++){
                    printf("#");
                }
                j+=(c-1);
            }
            else{
                printf(" ");
            }
        }
        if(i<n){
            c++;
        }
        if(i>n){
            c--;
        }
        printf("\n");
    }
}