#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_shape(int x, int y, int r, int c)
{
    if ((c == 1 || c == x) && (r == 1 || r == y))
    {
        ft_putchar('o');
    } 
    else if (r == 1 || r == y)
    {
        ft_putchar('-');
    }
    else if (c == 1 || c == x)
    {
        ft_putchar('|');
    }
    else
    {
        ft_putchar(' ');
    }
    
}

void    rush(int x, int y)
{
    int r;
    int c;

    r=1;
    while (r <= y)
    {
        c=1;
        while (c <= x)
        {
            ft_shape(x, y, r, c);
        c++;    
        }
    r++;
    ft_putchar('\n');
    }
}


int     main()
{
    rush (4,7);
    return (0);
}