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
	size_t	n;

	n = 0;
	if (src < dest)
	{
		n = len;
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
	{
		n = 0;
		while (n < len)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
			n++;
		}
	}
	return (dest);
}
