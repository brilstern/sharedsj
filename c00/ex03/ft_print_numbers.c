#include <unistd.h>

void    ft_putchar(char i)
{
    write(1,&i,1);
}

void    ft_print_numbers(void)
{
    char i ='0';

    while(i <='9')

    {
        ft_putchar(i);
        i++;
    }
}

int     main()
{

        ft_putchar('\n');
        write(1,"The answer is: ",16);
        ft_print_numbers();
        ft_putchar('\n');
        ft_putchar('\n');
        return(0);

}
