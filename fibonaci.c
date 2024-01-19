#include<stdio.h>
void main(){
    int i,n,f1,f2,f3;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    f1=1;
    f2=1;
    printf("%d\t %d\t",f1,f2);
    for (i=1;i<=n-2;i++){
        f3=f1+f2;
        printf("%d\t",f3);
        f1=f2;
        f2=f3;
    }
}