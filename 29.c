//to find the second largest number in an array
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b = a[0];
    int sl = -1;

    for(int i = 1; i < n; i++)
    {
        if(a[i] > b)
        {
            sl = b;
            b = a[i];
        }
        else if(a[i] > sl && a[i] != b)
        {
            sl = a[i];
        }
    }

    printf("Second Largest = %d", sl);

    return 0;
}