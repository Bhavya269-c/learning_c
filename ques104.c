//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.//

#include <stdio.h>

int findPivotInteger(int n) {
    int totalSum = n * (n + 1) / 2;  

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;         
        int rightSum = totalSum - leftSum + x; 
        if (leftSum == rightSum)
            return x; 
    }

    return -1; 
}

int main() {
    int n;

    n = 8;
    printf("%d\n", findPivotInteger(n)); 

    n = 1;
    printf("%d\n", findPivotInteger(n)); 

    n = 4;
    printf("%d\n", findPivotInteger(n)); 

    return 0;
}
