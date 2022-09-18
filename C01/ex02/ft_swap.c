#include <stdio.h>
int	main()
{
	int troca;

	int *a = 42;
	int *b = 43;

	troca = *a;

	*a = *b;

	*b = troca;

	printf("%d\n", *a);
	printf("%d\n", *b);
	return(0);
}
