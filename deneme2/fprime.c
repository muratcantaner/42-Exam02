#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void print_factors(int num)
{
	int i=2;
	int firstDivision = 1;
	if(num>-1)
	{
		if(num < 2)
			printf("%d",num);
		
		else
		{
			while(num>1)
			{
				if (num%i == 0)
				{
					if(!firstDivision)
						printf("*");

					printf("%d",i);

					firstDivision = 0;
					num/=i;
				}

				else
					i++;
			}
			//printf("%d\n")
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = atoi(argv[1]);
		print_factors(num);
	}
	
	write(1,"\n",1);
}
