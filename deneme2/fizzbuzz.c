#include <unistd.h>
#include <stdlib.h>
void ft_itoa(int nbr)
{
		
	if(nbr>9)
		ft_itoa(nbr/10);

		write(1,"0123456789"+nbr%10,1);
}

int main()
{
	int i = 1;
	
	while(i<=100)
	{	
		if(!(i%3))
			write(1,"fizz",4);
		if(!(i%5))
			write(1,"buzz",4);
		if((i%3 && i%5))
			ft_itoa(i);
	
		write(1,"\n",1);
		i++;
	}
}


