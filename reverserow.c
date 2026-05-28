#include <stdio.h>

void reverseRows(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        int start = 0;
        int end = cols - 1;
        
        while (start < end) {

            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            
           
            start++;
            end--;
        }
    }
}

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    reverseRows(3, 4, matrix);

    // Print result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
