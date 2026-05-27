#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("Enter the elements: ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

   
    for (int i = 0; i < r; i+=2) {
        for (int j = 0; j < c; j++) {
            matrix[i][j] = -matrix[i][j];
        }
    }


    for (int j = 0; j < c; j++) {
        int top = 0, bottom = r - 1;

        while (top < bottom) {
            int temp = matrix[top][j];
            matrix[top][j] = matrix[bottom][j];
            matrix[bottom][j] = temp;

            top++;
            bottom--;
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}