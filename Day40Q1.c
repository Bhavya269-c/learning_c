//PERFORM DIAGONAL TRANSVERSAL OF A MATRIX//

#include <stdio.h>

int main() {
    int n, m;

    printf("enter the value of n and m");
    scanf("%d %d", &n, &m);

    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }


    for (int d = 0; d < n + m - 1; d++) {
        int row = (d < m) ? 0 : d - m + 1;
        int col = (d < m) ? d : m - 1;

        while (row < n && col >= 0) {
            printf("%d ", mat[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
