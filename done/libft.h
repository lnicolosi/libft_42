#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>		//pour debug avec printf()
# include <unistd.h>
# include <string.h>	//pour utiliser les fonctions de base
# include <stdlib.h>
# include <ctype.h>     //pour utilser les fonction isalpha, is*, etc
# include <stddef.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, unsigned int n);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
void    *ft_calloc(size_t nmemb, size_t size);
int     ft_atoi(const char *nptr);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strrchr(const char *s, int c);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
#endif
