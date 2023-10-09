/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:59:08 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/09 16:01:41 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*copie;
	int		i;

	size = ft_strlen(s);
	copie = (char *) malloc((sizeof(char)) * size + 1);
	if (copie == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copie[i] = s[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}
