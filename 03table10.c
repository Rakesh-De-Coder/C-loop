#include<stdio.h>

int main(){
    for(int i=10;i>0;i--){
        printf("%d\n",i*10);
    }
    for(int i=0;i<10;i++){
        printf("%d\n",10*(10-i));
    }
    return 0;
}