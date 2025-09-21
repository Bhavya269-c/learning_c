//find the digit that occurs the most times in an integer number//

#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);

    int freq[10] = {0}; // frequency array for digits 0-9

    // Count digit frequencies
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    int maxDigit = 0;
    int maxFreq = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}
