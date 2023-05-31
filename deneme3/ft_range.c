#include <stdlib.h>

/*
int	*ft_range(int start, int end)
{
	int ascend = 1;
	int i = 0;

	if (end<start)
	{
		ascend = -1;
	}

	int rangesize = ((end - start) * ascend) +1;
	int *range = malloc(4*rangesize);
	while(i<rangesize)
	{
		range[i] = start+(i * ascend);
		i++;
	}

	return range;
}
*/
int *ft_range(int start, int end)
{
	int increase = 1;

	if(end<start)
		increase = -1;

	int rangesize = increase * (end-start) +1;
	
	int *range = malloc(4 * rangesize);
	
	int i = 0;
	while(i<rangesize)
	{
		range[i] = start+(i * increase);
		i++;
	}

	return range;
}


// /*
#include <stdio.h>
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
// */
