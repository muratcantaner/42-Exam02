char	*ft_strcpy(char *s1 , char *s2)
{
	int i = 0;
	while(s1[i])
	{
		s2[i] = s1[i];
		i++;
	}

	s2[i] = s1[i];

	return(s2);
}
