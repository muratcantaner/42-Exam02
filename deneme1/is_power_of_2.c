#include <stdlib.h>
#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if(n==1)
		return 1;
	else if( n/2 > 0 && n%2==0)
		is_power_of_2(n/2);
	else
		return 0;
}
int main (int argc, char **argv)
{
	printf("%d",is_power_of_2(atoi(argv[1])));
}
