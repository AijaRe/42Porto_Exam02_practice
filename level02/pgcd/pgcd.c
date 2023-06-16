#include <stdio.h>
#include <stdlib.h>

int	find_divisor(int nb1, int nb2)
{
	int	i;

	if(nb1 > nb2)
		i = nb2;
	else
		i = nb1;
	while (i >= 0)
	{
		if (nb1 % i == 0 && nb2 % i == 0)
			return (i);
		else	
			i--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	nb1;
	int	nb2;
	int	divisor;

	if (argc == 3)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		divisor = find_divisor(nb1, nb2);
		printf("%d", divisor);
	}
	printf("\n");
}