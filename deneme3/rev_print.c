#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;

	return i;
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int len = ft_strlen(argv[1]);
		int i = len-1;
		while(i>-1)
		{
			write(1,argv[1]+i,1);
			i--;
		}
	}

	write(1,"\n",1);
}
