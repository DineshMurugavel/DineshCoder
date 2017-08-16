#include <stdio.h>
void main()
{
    int num,m,n;
    clrscr();
    scanf("%d %d\n",&m,&n);
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 0)
                  printf ("%d ", num);
         }
                getch();
} 
