#include<stdio.h>

int main(){
    int n;
    printf("enter no you want to find table\n");
    scanf("%d",&n);
    printf("your table is\n");
    for(int i =1; i<11;i++){
        printf("%dx%d=%d\n",n,i,n*i);
    }
    
    return 0;
}