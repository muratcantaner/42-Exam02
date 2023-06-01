//#include <stddef.h>

int includes(const char *s, const char c)
{
	size_t i = 0;
	while(s[i])
	{
		if(c == s[i])
			return 1;

		i++;
	}
	return 0;
}

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;

	while(s[i] && !includes(reject, s[i]))
		i++;
	
	return i;
}

//int main()
//{}
