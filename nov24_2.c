#include<stdio.h>
void main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num%6==0){
        printf("the number %d is a multiple of 6\n",num);
    }
    else{
        printf("the number %d is not a multiple of 6\n",num);
    }
}