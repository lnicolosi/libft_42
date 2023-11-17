* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:29:09 by lnicolos          #+#    #+#             */
/*   Updated: 2023/11/16 18:37:00 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**tab_size(const char *s, char c)
{
	int		taille;
	char	**tableau;

	taille = 0;
	while (*s)
	{
		if (*s == c)
			taille++;
		s++;
	}
	tableau = (char **)malloc(sizeof(char *) * (taille + 1));
	if (tableau == NULL)
		return (NULL);
	return (tableau);
}

void	free_tab(char **tableau)
{
	int	i;

	i = 0;
	while (tableau[i] != NULL)
	{
		free(tableau[i]);
		i++;
	}
	free(tableau);
}

char	**ft_split(const char *s, char c)
{
	char		**tableau;
	int			i;
	const char	*debut;

	tableau = tab_size(s, c);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			debut = s;
			while (*s && *s != c)
				s++;
			tableau[i] = (char *)malloc(sizeof(char) * ((s - debut) + 1));
			if (tableau[i] == NULL)
			{
				free_tab(tableau);
				return (NULL);
			}
			ft_strncpy(tableau[i], debut, (s - debut));
			tableau[i][(s - debut)] = '\0';
			i++;
		}
		else
			s++;
	}
	tableau[i] = NULL;
	return (tableau);
}
