# include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if(n <= 0)
        return 0;
    while(i < n-1)
    {
        if(s1[i] != s2[i])
            break;
        i++;
    }
    return s1[i] - s2[i];
}
