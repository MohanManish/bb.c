#include <stdio.h>
void main()
{
    int n, Integer = 0, remainder, entInteger;

    printf("Enter an integer: ");
    scanf("%d", &n);
    entInteger = n;
    while( n!=0 )
    {
        remainder = n%10;
        Integer = Integer*10 + remainder;
        n /= 10;
    }
    if (entInteger == reversedInteger)
        printf("%d is a palindrome.", entInteger);
    else
        printf("%d is not a palindrome.", entInteger);
      }
