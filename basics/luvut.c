#include <stdio.h>
#include <math.h>

int main(){
    unsigned char i = 0;
    for(i = 1;i <= 100;++i){
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}