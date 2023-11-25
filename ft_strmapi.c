#include "libft.h"
#include <stddef.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*retour;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	retour = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (retour == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		retour[i] = f(i, s[i]);
		i++;
	}
	retour[i] = '\0';
	return (retour);
}
