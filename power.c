#include <stdio.h>
void main()
{
    int a,b;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &a);

    printf("Enter an b: ");
    scanf("%d", &b);

    while (b != 0)
    {
        result *=a;
        --b;
    }

    printf("Answer = %lld", result);
}
