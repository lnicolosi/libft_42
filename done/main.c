#include "libft.h"

int	main(void)
{
	/* TEST FT_STRLEN */

	/*char	*s;
	s = "Hello";
	printf("String a compter : %s\n", s);
	int	i;
	i = ft_strlen(s);
	printf("ma fonction : %d\n", i);
	i = strlen(s);
	printf("librairie : %d\n", i);*/

	/* TEST FT_STRCPY */

	/*char	src[] = "salut";
	char	dest[] = "bonjour";
	printf("source : %s\n", src);
	printf("destination : %s\n", dest);
	ft_strcpy(dest, src);
	printf("copie de src dans dest : %s\n", dest);*/
	
	/* TEST FT_STRNCPY */

	/*char	src[] = "Nicolosi";
	char	dest[] = "Luca";
	printf("source : %s\n", src);
	printf("destination : %s\n", dest);
	strncpy(dest, src, 6);
	printf("copie de src dans dest : %s\n", dest);*/

	/* TEST FT_MEMSET */

	char	s[] = "Nicolosi";
	bzero(s, 2);
	printf("test : -%s-\n", s);
	for (size_t i = 0; i < 8; i++) {
        printf("buffer[%zu] = %d\n", i, s[i]);
	}
	
	return(0);
}
