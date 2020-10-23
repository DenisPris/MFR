#include <unistd.h>
#include <stdio.h>

void ft_print_comb2(void)

{
	int first;
	int second;
	
	for (first = 0; first <= 98; first ++)
	{
		for (second = 0; second <=99; second ++)
		{
			if (second > first)
		printf ("%02d %02d," , first, second); 
		}
	}
	
}

void  main ()
{
ft_print_comb2();
}
