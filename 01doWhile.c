#include<stdio.h>

int main(){
    int i=1, n;
    printf("enter your no\n");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;

    }while(i<n+1);

    return 0;
}