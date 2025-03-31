#include <stdio.h>
int isPrime(int num) {
   
    if (num <= 1) {
        return 0; 
    }
    if (num == 2) {
        return 1;
    }

    // If the number is even and greater than 2, it's not prime
    if (num % 2 == 0) {
        return 0; // 0 means not prime
    }

    // Check for odd divisors from 3 up to the square root of num
    for (int i = 3; i * i <= num; i = i + 2) {
        if (num % i == 0) {
            return 0; // 0 means not prime
        }
    }

    // If no divisors were found, the number is prime
    return 1; // 1 means prime
}

int main() {
    int numInputs;

    // Read the number of inputs
    scanf("%d", &numInputs);

    // Loop through each input number
    for (int i = 0; i < numInputs; i++) {
        int numberToCheck;

        // Read the number to check for primality
        scanf("%d", &numberToCheck);

        // Call the isPrime function and print the result
        if (isPrime(numberToCheck) == 1) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}