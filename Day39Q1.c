//CHECK IF THE ELEMEMTS ON THE DIAGONAL OF A MATRIX ARE DISTINCT//

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int matrix[n][m];
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int distinct = 1;
    for (int i = 0; i < n && i < m; i++) {
        for (int j = i + 1; j < n && j < m; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; 
                break;
            }
        }
        if (!distinct) break;
    }
    
    if (distinct)
        printf("True\n");
    else
        printf("False\n");
    
    return 0;
}
