#include "ft_putchar.h"
#include "rush00.h"
#include <stdio.h>


void    rush(int x, int y)
{
    int a;
    int b;

    a = 1;
    while(a <= y)
    {
        b=1;
        while(b <= x)
        {
            if((a==1 && b ==1) || (a==1 && b==x) || (a==y && b==1) || (a==y && b==x))
            {
                ft_putchar('o');
            } else if(b==1 || b==x)
            {
                ft_putchar('|');
            } else if(a==1 || a==y)
            {
                ft_putchar('-');
            } else
            {
                ft_putchar(' ');
            }
            b++;
        }
        ft_putchar('\n');
        a++;
    }
}
