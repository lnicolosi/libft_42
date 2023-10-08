# include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    ptr = malloc(nmemb * size);

    if(ptr == NULL)
        return ptr;

    size_t  i;
    unsigned char   *x;
    x = (unsigned char *) ptr;
    i = 0;
    while(i < nmemb)
    {
        x[i] = 0;
        i++;
    }
    return (ptr);
}
