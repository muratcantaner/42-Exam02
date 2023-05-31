#include <unistd.h>

int is_prime(int num)
{
	if(num<2)
		return 0;
	
	if(num == 2)
		return 1;
	

	int i = 2;
	while(i<num)
	{
		if (num%i == 0)
			return 0;
		i++;
	}
	return 1;
		
}
void ft_itoa(int nbr)
{
	if(nbr>9)
		ft_itoa(nbr/10);

	write(1,"0123456789"+(nbr%10),1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i++]);
	return i;
}

int ft_atoi( char *str)
{
	int num = 0;
	int i = 0;

	while(str[i])
	{
		num*=10;
		num+=str[i]-'0';
		i++;
	}
	return num;
	
}

int main(int argc, char **argv)
{
	if(argc == 2 && ft_atoi(argv[1])>-1)
	{
		int num = ft_atoi(argv[1]);
		int primesum = 0;
		int i = 0;
		while(i<=num)
		{
			if(is_prime(i))
			{
				primesum+=i;
			}
			i++;
		}

		ft_itoa(primesum);
	write(1,"\n",1);
	}
	else
		write(1,"0\n",2);
}
