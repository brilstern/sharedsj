#include <unistd.h>

void ft_putchar(char i)
{
  write(1, &i, 1);
}

void ft_print_alphabet (void)
{
  int i;
  i = 'a';
  while (i <= 'z')
  {
    ft_putchar(i);
    i++;
  }
}

int main(void)

{
    ft_print_alphabet();
    return (0);
}
