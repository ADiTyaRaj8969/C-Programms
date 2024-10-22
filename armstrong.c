#include <math.h>
#include <stdio.h>
#include <stdbool.h>

bool isArmstrong(int N) {
    int temp = N;
    int sum = 0;

    // Get the number of digits
      // Adding 1 to compensate for the loss of fraction part
      // of the value returned by log10 due to the conversion
    // into integer
    int K = log10(temp) + 1;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, K);
        temp /= 10;
    }

    return (sum == N);
}

int main() {
    int N = 153;
    if (isArmstrong(N)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}
