#include "stdlib.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	size_t	i; //or unsigned int

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
