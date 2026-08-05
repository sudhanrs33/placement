// Armstrong Number Program
#include <stdio.h>
#include <math.h>

int main()
{
    int n, num, rem;
    int digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    // Count the number of digits
    while (n != 0)
    {
        digits++;
        n = n / 10;
    }

    // Restore the original number
    n = num;

    // Calculate the sum of each digit raised to the power of digits
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (int)pow(rem, digits);
        n = n / 10;
    }

    // Check Armstrong
    if (sum == num)
    {
        printf("%d is an ARMSTRONG NUMBER\n", num);
    }
    else
    {
        printf("%d is NOT an ARMSTRONG NUMBER\n", num);
    }

    return 0;
}