#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>		//pour debug avec printf()
# include <unistd.h>
# include <string.h>	//pour utiliser les fonctions de base
# include <stdlib.h>


size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, unsigned int n);
void	ft_bzero(void *s, size_t n);
void	*memeset(void *s, int c, size_t n);

#endif
