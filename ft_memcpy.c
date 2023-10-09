/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:43:59 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/09 16:07:50 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destx;
	const unsigned char	*srcx;

	destx = (unsigned char *) dest;
	srcx = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		destx[i] = srcx[i];
		i++;
	}
	return (dest);
}
