#include <stdio.h>

void ft_print_alphabet(void)
{
	char a = 'a';
	while(a <= 'z')
	{	
		ft_putchar(a); a++;
	}
	ft_putchar ('/n');
}

void ft_putchar(char par1)
{
	write(1, &par1, 1);
}

int main(void)
{
	ft_print_alphabet();
}
