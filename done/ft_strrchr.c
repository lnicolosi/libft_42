#include <stddef.h>

char    *ft_strrchr(const char *s, int c)
{
    char *s1 = (char *) s;
    int compteur = 0;
    int i = 0;
    while(s1[i])
    {
        if(s1[i] == c)
            compteur++;
        i++;
    }
    if(compteur == 0)
        return NULL;
    
    int compteur2 = 0;
    while(*s1 && compteur2 < compteur)
    {
        
        if(*s1 == c)
            compteur2++;
        if(compteur2 == compteur)
            break;
        s1++;
    }

    return s1;
}
