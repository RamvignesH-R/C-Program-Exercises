#include<stdio.h>
void main(){
    int num;
    printf("Enter a integer:");
    scanf("%d",&num);
    if(num%2==0)
        printf("It is an even integer");
    else
        printf("It is an odd integer");

    }