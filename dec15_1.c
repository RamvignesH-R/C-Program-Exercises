#include<stdio.h>//linear binary search
void main(){
    int i,n,f=0,key;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the key to search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key){
            printf("element found\n");
            printf("the position of %d is at %d\n",key,i+1);
            f++;
            break;
        }
        
    }
    if(f==0){
        printf("element not found\n");


    }

}