#include <stdio.h>
#include<conio.h>
int main()
{
    int base, exponent;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);
     while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    return 0;
}
