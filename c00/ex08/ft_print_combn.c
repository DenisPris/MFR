#include <stdio.h>

void ft_print_combn(void)
{
	int  start = 0;
	while (++start <=89)
	{
		int units = start  % 10;
		int dozens = start % 100/10;

		if (dozens > units)
			printf ("%02d, ", start);
	}
}
int main (void)
{
	ft_print_combn();
	return 0;
}
