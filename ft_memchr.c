/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:28:28 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/11 14:33:45 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *) s;
	while (*s1 != c && i < n)
	{
		s1++;
		if (*s1 == '\0' || i == n - 1)
			return (0);
		i++;
	}
	return (s1);
}
