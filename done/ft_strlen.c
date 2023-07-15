#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i; // pourquoi un u-int et pas size_t ?

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
