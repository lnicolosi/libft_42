/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:40:55 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/09 15:43:56 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			i;
	unsigned char	*x;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	x = (unsigned char *) ptr;
	i = 0;
	while (i < nmemb)
	{
		x[i] = 0;
		i++;
	}
	return (ptr);
}
