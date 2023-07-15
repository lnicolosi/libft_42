int	ft_strlen(char *s)
{
	unsigned int	i; // pourquoi un u-int et pas size_t ?

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
