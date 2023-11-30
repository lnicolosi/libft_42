/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:46:38 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/09 15:52:12 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	occurence(const char *s, int c, int compteur)
{
	char	*s2;
	int		i;

	s2 = (char *) s;
	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			compteur++;
		i++;
	}
	return (compteur);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		compteur;
	int		compteur2;

	s1 = (char *) s;
	compteur = 0;
	compteur2 = 0;
	compteur = occurence(s, c, compteur);
	if (compteur == 0)
		return (NULL);
	while (*s1 && compteur2 < compteur)
	{
		if (*s1 == c)
			compteur2++;
		if (compteur2 == compteur)
			break ;
		s1++;
	}
	return (s1);
}
