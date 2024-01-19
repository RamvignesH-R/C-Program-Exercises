#include<stdio.h>
void main(){
    int k,i,j,n;
    printf("enter the initial number\n");
    scanf("%d",&k);
    if(k==1){
        k=2;
    }
    printf("enter the last number for finding the primes between them\n");
    scanf("%d",&n);
    for(i=k;i<=n;i++){
        int count=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%d\t",i);
        }
    }
}