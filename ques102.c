//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.//

#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1; 

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;    
            high = mid - 1; 
        } else {
            low = mid + 1;  
        }
    }
    return result;
}

int main() {
    int arr1[] = {1, 2, 8, 10, 11, 12, 19};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int x1 = 5;
    printf("%d\n", findCeilIndex(arr1, n1, x1));

    int arr2[] = {1, 2, 8, 10, 11, 12, 19};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int x2 = 20;
    printf("%d\n", findCeilIndex(arr2, n2, x2)); 

    int arr3[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int x3 = 0;
    printf("%d\n", findCeilIndex(arr3, n3, x3)); 

    int arr4[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int x4 = 2;
    printf("%d\n", findCeilIndex(arr4, n4, x4)); 

    return 0;
}
