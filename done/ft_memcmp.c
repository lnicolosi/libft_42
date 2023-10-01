# include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 0;
    const unsigned char *x1 = (const unsigned char *) s1;
    const unsigned char *x2 = (const unsigned char *) s2;
    
    while(i < n && (x1[i] == x2[i]))
    {
        i++;
    }

   if(i == n)
       return 0;
    
    return (x1[i] - x2[i]);
}
