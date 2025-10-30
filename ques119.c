//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.//

#include <stdio.h>

int main() {
    int n, i, sum = 0, expectedSum, repeated;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    expectedSum = (n - 2) * (n - 1) / 2;
    
    repeated = sum - expectedSum;
    
    printf("Repeated element is: %d\n", repeated);
    
    return 0;
}