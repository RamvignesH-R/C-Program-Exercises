#include<stdio.h>
void main()
{
    int num,i,count=0;
    printf("enter the number\n");
    scanf("%d",&num);
    for (i=2;i<num/2;i++)//i can be 1 to num and count greater than 2
    //i can be 2 to i <num
    {
        if(num%i==0)
           { 
            count++;
            printf("%d",count);
               }
    }
    if(count!=0){
        printf("it is not a prime number\n");
    }
    else{
        printf("it is a prime number\n");
        }
}