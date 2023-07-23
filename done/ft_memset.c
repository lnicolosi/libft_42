# include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while(i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
