#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
	char z = 'z';
	while(z >= 'a')
	{	
		ft_putchar(z); --z;
	}
}

void ft_putchar(char par1)
{
	write(1, &par1, 1);
}

int main(void)
{
	ft_print_reverse_alphabet();
}
