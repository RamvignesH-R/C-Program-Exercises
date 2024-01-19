#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter three numbers to be compared\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c){
        printf("%d is the biggest number",a);
    }
    else if(b>a&&b>c){
        printf("%d is the biggest number",b);
    }
    else if(c>a&&c>b){
        printf("%d is the biggest number",c);
    }
    else{
        printf("error");
    }

}