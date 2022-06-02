#include <stdio.h>
#include <math.h>

int main(){
    unsigned char i = 0;
    unsigned char j = 0;
    printf("   x");
    for(i = 1;i <= 15;++i){
        printf("%*d",4,i);
    }
    printf("\n");
    for(j = 1;j <= 15;++j){
        unsigned char k = 0;
        printf("%*d",4,j);
        for(k = 1;k <= 15;++k){
             printf("%*d",4,j*k);
        }
        printf("\n");
    }
    return 0;
}