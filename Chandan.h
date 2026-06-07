#ifndef CHANDAN_H
#define CHANDAN_H
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int min(int a, int b)
{
    return (a < b) ? a : b;
}
void isPrime(int n)
{
    if (n <= 1)
        printf("%d is not Prime", n);

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not Prime\n", n);
            break;
        }
        else
        {
            printf("%d is Prime\n", n);
        }
    }
}
void Odd_Even(int n)
{

    if (n % 2 == 0)
    {
        printf("%d is Even number\n", n);
    }
    else
    {
        printf("%d is Odd number\n", n);
    }
}

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int reverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

void decimalToBinary(int n)
{
    if (n == 0)
    {
        printf("0");
        return;
    }
    int binary[32];
    int i = 0;
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}

int binaryToDecimal(long long n)
{
    int decimal = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        i++;
    }
    return decimal;
}

void decimalToOctal(int n)
{
    if (n == 0)
    {
        printf("0");
        return;
    }
    int octal[32];
    int i = 0;
    while (n > 0)
    {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
}

void decimalToHexadecimal(int n)
{
    if (n == 0)
    {
        printf("0");
        return;
    }
    char hex[32];
    int i = 0;
    while (n > 0)
    {
        int temp = n % 16;
        if (temp < 10)
        {
            hex[i] = temp + 48;
        }
        else
        {
            hex[i] = temp + 55;
        }
        i++;
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }
}

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

double power(double base, int exp)
{
    double result = 1.0;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

bool palindrome(int n)
{
    return n == reverseNumber(n);
}
#endif
