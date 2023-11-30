/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:30:53 by lnicolos          #+#    #+#             */
/*   Updated: 2023/11/16 18:30:55 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	retour;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	retour = ft_strlen(dst) + ft_strlen(src);
	while (i < dstsize)
	{
		while (dst[i] != '\0')
		{
			i++;
		}
		if (i >= dstsize)
			break ;
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (retour);
}
