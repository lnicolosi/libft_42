#include "libft.h"

int isInSet(char c, char const *set)
{
  while (*set)
  {
    if (c == *set)
      return (1);
    set++;
  }
  return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
  
}
