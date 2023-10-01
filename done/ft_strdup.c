#include <string.h>
#include <stdlib.h>
#include <stddef.h>

char *ft_strdup(const char *s)
{
    int size = strlen(s);
    char *copie;
    copie = (char *) malloc((sizeof(char))* size + 1);
    if(copie == NULL)
        return NULL;
    int i = 0;
    while(s[i])
    {
        copie[i] = s[i];
        i++;
    }
    copie[i] = '\0';
    return copie;

}
