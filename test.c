#include <stdio.h>
#include "Chandan.h"

int main()
{
    printf("Max of 23 and 45: %d\n", max(23, 45));
    printf("Min of 34 and 65: %d\n", min(34, 65));
    printf("Prime or Not:\n");
    isPrime(34);
    printf("Odd or Even :\n");
    Odd_Even(7);
    printf("Digit Sum of 1234: %d\n", digitSum(1234));
    printf("Reverse of 1234: %d\n\n", reverseNumber(1234));

    printf("Decimal 25 to Binary: ");
    decimalToBinary(25);
    printf("\n");

    printf("Binary 11001 to Decimal: %d\n", binaryToDecimal(11001));

    printf("Decimal 100 to Octal: ");
    decimalToOctal(100);
    printf("\n");

    printf("Decimal 255 to Hexadecimal: ");
    decimalToHexadecimal(255);
    printf("\n\n");

    printf("Factorial of 5: %lld\n", factorial(5));
    printf("GCD of 12 and 18: %d\n", gcd(12, 18));
    printf("LCM of 12 and 18: %d\n", lcm(12, 18));
    printf("2 to the power 5: %.0f\n", power(2, 5));
    printf("Is 121 Palindrome? %s\n", palindrome(121) ? "Yes" : "No");

    return 0;
}
