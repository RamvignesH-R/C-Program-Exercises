#include<stdio.h>
void main(){
    int n,count=0,count1=0;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    int arr[n],eve[100],odd[100];
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            eve[count]=arr[i];
            count++;
            
        }
        else{
            odd[count1]=arr[i];
            count1++;
        }
    }
    printf("the even array are\n");
    for(int i=0;i<count;i++){
        
    
        printf("%d\t",eve[i]);
        
        
    }
    printf("\n");
    printf("the odd array are\n");
    for(int i=0;i<count1;i++){
        
    
        
        printf("%d\t",odd[i]);
        
        
    }
    

}