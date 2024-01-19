#include<stdio.h>
void main(){
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("it is an leap year\n");
    }
    else{
        printf("it is not a leap year\n");
    }
}