#include <stdio.h>

int main() {
    int a[100], n, i, min, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = a[0];
    pos = 0;

 
    for(i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
            pos = i;
        }
    }

   
    for(i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deleting smallest element:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}