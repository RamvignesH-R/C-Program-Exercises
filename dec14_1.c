#include<stdio.h>
void main(){
    int n;
    printf("Enter the order of the square matrix\n");
    scanf("%d",&n);

    int arr[n][n],arr1[n][n],arr2[n][n];
    printf("enter the elements of the matrix 1\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the elements of the matrix 2\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}