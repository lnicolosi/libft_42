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

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		compteur;
	int		i;
	int		compteur2;

	s1 = (char *) s;
	compteur = 0;
	i = 0;
	compteur2 = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			compteur++;
		i++;
	}
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
