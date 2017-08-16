#include <stdio.h>
void main()
{
    int number;
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("even");
    else
        printf("odd");
}
