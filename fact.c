#include<stdio.h>
void main(){
    int num,fac=1;
    printf("enter the number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fac*=i;
    }
    printf("the factorial of %d is %d",num,fac);
}