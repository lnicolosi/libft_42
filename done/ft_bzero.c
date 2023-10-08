# include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t  i;
	unsigned char   *x = (unsigned char *) s;

	i = 0;
	while(i < n)
	{
		x[i] = 0;
		i++;
	}
}
