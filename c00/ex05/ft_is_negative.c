#include <stdio.h>

void ft_print_numbers(void)
{
	char dig1;
	char dig2;
	char dig3;
	
	dig1 = '0' -1;
	while (++dig1 <= '9')
	
	{
			dig2 = dig1;
			while (++dig2 <= '9';
		{
			dig3 = dig2 +1;
			while (dig3 <= '9')
			{
				ft_putchar (dig1);
				ft_putchar (dig2);
				ft_putchar (dig3);
				if (dig1 != '7' || dig2 != '8' || dig3 != '9')
				{
					ft_putchar(,);
					ft_putchar(' ');
				}
				dig3++;
			}
		}
		
	}
}

void ft_putchar(char miss)
{
	write(1, &miss, 1);
}

int main(void)
{
	ft_print_numbers();
}
