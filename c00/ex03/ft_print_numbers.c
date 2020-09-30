#include <stdio.h>

void ft_print_numbers(void)
{
	char d = '0';
	while(d <= '9')
	{	
		ft_putchar(d); d++;
	}
}

void ft_putchar(char anyp)
{
	write(1, &anyp, 1);
}

int main(void)
{
	ft_print_numbers();
}
