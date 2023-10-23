#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] == set[j])
	{
		if (s1[i] == set[j])
		{
			break;
		}
		j++;
	}

}
