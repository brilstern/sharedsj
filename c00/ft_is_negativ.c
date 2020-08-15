#include <unistd.h>

void    ft_putnum(int i)
{
    write(1, &i, 1);
}

void    ft_is_negative(int i)
{
    if(i<'0')
    {
        
        ft_putnum('N');

    } else {

        ft_putnum('P');
    }
}

int     main(void)
{

    ft_is_negative(-1);
    ft_putnum('\n');
}
