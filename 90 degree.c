#include<stdio.h>
int main(){
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter the elements of the matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("rotated matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}