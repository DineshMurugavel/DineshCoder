#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if (number <= 0)
    {
        if (number == 0)
            printf("You entered 0");
        else
            printf("negative");
    }
    else
        printf("positive");
    return 0;
}
