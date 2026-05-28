#include<stdio.h>
int main(){
    int n; 
    printf("enter the number");
    scanf("%d",&n);
    int arrr[50];
    printf("enter the elements of the array");
    for(int i=0;i<n;i++){
        scanf("%d",&arrr[i]);
    }
    for(int i=0;i<n;i++){
        int diff =arrr[0]-arrr[n-1];
        printf("%d ",diff);
        break ;
    }
    return 0;
}