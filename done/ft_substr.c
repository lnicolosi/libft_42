#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	s1 = (char *) malloc(len * sizeof(char));
	if (s1 == NULL)
	{
		printf("la fonction retourne null");
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);	
}
