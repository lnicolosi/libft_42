/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:30 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/10 17:26:55 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*destx;
	const unsigned char	*srcx;
	unsigned char		*buffer;

	buffer = (unsigned char *)malloc(len);
	if (buffer == NULL)
		return (NULL);
	destx = (unsigned char *) dest;
	srcx = (const unsigned char *) src;
	i = 0;
	while (i < len)
	{
		buffer[i] = srcx[i];
		i++;
	}
	ft_memcpy(destx, buffer, len);
	free(buffer);
	return (dest);
}
