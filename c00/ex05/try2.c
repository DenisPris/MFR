#include <stdio.h>

void ft_print_comb(void)
{
//	int  (123 / 100; 123 % 100 / 10; 123 % 10);
	int start = 11 ;

	while	(start++ <=789)
	{	
		int hundred = start / 100;
		int dozens = start % 100/10;
		int units = start % 10;

		if (hundred < dozens && dozens < units)
		printf ("%03d, " , start);
	}
}

int main (void)
{
	ft_print_comb();
	return 0;
}
