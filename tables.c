#include <stdio.h>
void main(){
    int i,n;
    printf("enter the number of the table\n");
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        printf("%dx%d=%d\n",i,n,i*n);
    }
}