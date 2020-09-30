#include <stdio.h>

void ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

void ft_putchar(char neg)
{
	write(1, &neg, 1);
}

int main()
{
	ft_is_negative(7777);
}
