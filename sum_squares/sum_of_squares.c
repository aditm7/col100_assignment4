#include <stdio.h>
#include <math.h>
void main(){
    int n,c=0;
    float b1,b2,d;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        b1 = sqrt((float)i);
        b2 = sqrt((float)i/2);
        b2 -= ((int)b2/1);
        b1 -= ((int)b1/1);
        if (b1==0 || b2==0){
            c=c+1;
            continue;
        }
        else{
            for (int j=0;j<=(int)sqrt(i);j++){
                d = sqrt(i-(j*j));
                d -= ((int)d/1);
                if(d==0){
                    c=c+1;
                    break;
                }
            }
        }   
    }
    printf("%d\n",c);
}