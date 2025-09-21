//merge two arrays//

#include <stdio.h>

int main() {
    int n, m;
    
    // Input size of first array
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Input size of second array
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    
    // Merge arrays
    int merged[n + m];
    for (int i = 0; i < n; i++) {
        merged[i] = a[i];
    }
    for (int i = 0; i < m; i++) {
        merged[n + i] = b[i];
    }
    
    // Print merged array
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}
