#include<stdio.h>
void main(){
    int n,i,sum=0,num;
    printf("enter the number\n");
    scanf("%d",&num);
    n=num;
    while(n>0){
        i=n%10;
        sum=sum+(i*i*i);
        n=n/10;
    }
    if(sum==num){
        printf("%d is an armstrong number\n",num);
    }
    else
        printf("not an armstrong number\n");
}