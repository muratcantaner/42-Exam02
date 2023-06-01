#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int increase = 1;

	int tmp = start;
	start = end;
	end = tmp;

	if(end<start)
		increase = -1;
	
	int rangesize = (end-start) * increase +1;
	int *rrange = malloc(rangesize * 4);

	int i = 0;
	while(i<rangesize)
	{
		rrange[i] = start + (i*increase);
		i++;
	}
	return rrange;
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	int increase = 1;
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);
	if(end<start)
		increase = -1;
	
	int rangesize = (end-start) * increase +1;

	int *rrange = ft_rrange(start,end);

	int i = 0;
	while(i<rangesize)
		printf("%d,",rrange[i++]);
}
*/
