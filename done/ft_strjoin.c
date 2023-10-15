#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*chaine;

	i = 0;
	j = 0;
	chaine = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (chaine == NULL)
		return (NULL);
	while (s1[i])
	{
		chaine[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		chaine[i] = s2[j];
		j++;
		i++;
	}
	chaine[i] = '\0';
	return (chaine);
}
