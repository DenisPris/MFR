#include <stdio.h>

int main()
{
	srand(time(NULL));
	int r=100-rand()%200;
	printf("%d\n", r);
}
