#include<stdio.h>
void main()
{
  int N, i, j = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &N);
  
  for(i = 1; i <= N; i++)
  {
     j = j + i;
  }
    printf("Sum of Natural Numbers = %d",j);
}
