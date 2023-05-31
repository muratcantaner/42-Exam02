#include <unistd.h>

int isLetter(char c)
{
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
		return 1;

	return 0;
}

char* ft_tolower(char *c)
{
	if(*c>='A' && *c<='Z')
		*c+=32;

	return c;

}

char* ft_toupper(char *c)
{
	if(*c>='a' && *c<='z')
		*c-=32;

	return c;

}

 int main(int argc, char**argv)
 {   
    if(argc>1)
     {   
          int isFirst = 1;
          int j = 1;
          while(argv[j])
          {   
              int i = 0;
              
              while (argv[j][i])
              {   
                  
                  if(isLetter(argv[j][i]))
                  {
                      if(isFirst)
                      {
                          write(1,ft_toupper(&argv[j][i]),1);
                          isFirst = 0;
                      }
                    
                      else
                      {
                          write(1,ft_tolower(&argv[j][i]),1);
                      }
                  }   
   
                  else
				  {
				  	  write(1,&argv[j][i],1);
                      isFirst = 1;
       			  }
                  
                  i++;
			  }
		write(1,"\n",1);
		isFirst = 1;
		j++;
		}
	}
	
	else
		write(1,"\n",1);
}
