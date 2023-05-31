#include <unistd.h>
#include <stdio.h>
void delete_char(char* str, char c)
{	
	int i = 0;
	while(str[i])
		{
			if(str[i] == c)
				str[i] = 2;
			i++;
		}
	//string'de bulunan c karakterlerini unprintable yap
}

int is_printable(char c)
{
	if(c && c!=2 )
		return 1;
	return 0;
}
int main(int argc, char** argv)
{

	if(argc==3)
	{
		int i = 0;
		int j = 0;

		//
		while(argv[1][i])
		{
			if(argv[1][i] == 2)
			{}

			else
			{
				while(argv[2][j])
				{
					if(argv[2][j] == 2)
						{}
					else if(argv[1][i] == argv[2][j])
						{
							write(1,&argv[1][i],1);
							delete_char(argv[2],argv[1][i]);
						}
					j++;
				}
				delete_char(argv[1],argv[1][i]);
				j = 0;
			}
			i++;
			
		}
	}

		//printf("%s\n",argv[1]);
		//printf("%s\n",argv[2]);
		write(1,"\n",1);
}
