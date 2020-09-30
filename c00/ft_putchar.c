#include <stdio.h>
void  main(void)
{
	ft_putchar('s'); 
}
void	ft_putchar(char c)
{
		write(1, &c, 1);
}
