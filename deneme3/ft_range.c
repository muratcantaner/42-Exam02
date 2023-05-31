#include <stdlib.h>


int	*ft_range(int start, int end)
{
	int rangesize = (end-start) +1;
	int *range = malloc(4*rangesize);
	
	int i = 0;
	while(i<rangesize)
	{
		range[i] = start+i;
		i++;
	}

	return range;
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);

	int rangesize = (end - start) +1;
	int *range = ft_range(start, end);

	int i = 0;

	while(i<rangesize)
		printf("%d,",range[i++]);
}
*/
