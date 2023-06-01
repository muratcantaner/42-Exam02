#include <stdlib.h>

int find_int_len(int nbr)
{
	int len = 1;
	if (nbr<0)
	{
		len++;
		nbr*=-1;
	}

	while(nbr)
	{
		nbr/=10;
		
		if(nbr)
			len++;
	}
	return len;
}

char * ft_itoa(int nbr)
{
	int len = find_int_len(nbr);
	char *str = malloc(len+1);
	int neg = 0;
	int i = len-1;

	if(nbr<0)
	{
		neg = 1;
		nbr*=-1;
		str[0] = '-';
	}
	while(i)
	{
		str[i--] = nbr%10 + '0';
		nbr/=10;
	}
	if(!neg)
		str[0] = nbr%10 + '0';
	
	str[len] = 0;

	return str;
}

#include <stdio.h>
int main(int argc, char **argv)
{
	printf("%s",ft_itoa(atoi(argv[1])));
}
