#include <stdio.h>
void main()
{
    long long n;
    int c=0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        n /= 10;
        ++c;
    }

    printf("Number of digits: %d", c);
}
