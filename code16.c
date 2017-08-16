#include <stdio.h>
int main()
{
    int low, high, i, f;
    scanf("%d %d", &low, &high);
    while (low < high)
    {
        f = 0;
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                f++;
                break;
            }
        }
        if (f == 0)
            printf("%d ", low);
        ++low;
    }
    return 0;
}
