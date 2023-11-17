/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:24:06 by lnicolos          #+#    #+#             */
/*   Updated: 2023/11/16 18:26:08 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_nbr(int n)
{
	int		i;

	if (n < 0)
		n *= -1;
	i = 0;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

int	is_negativ(int n)
{
	int		i;

	if (n < 0)
		i = 1;
	else
		i = 0;
	return (i);
}

char	*set_str(int n, char *str)
{
	int		i;
	int		x;

	x = n;
	i = (digit_nbr(n) + is_negativ(n));
	if (is_negativ(n))
		n *= -1;
	while (i >= is_negativ(n))
	{
		if (i == (digit_nbr(n) + is_negativ(x)))
			str[i] = '\0';
		else
		{
			str[i] = (n % 10) + 48;
			n /= 10;
		}
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*str_zero;

	if (n == 0)
	{
		str_zero = (char *)malloc(2);
		if (str_zero == NULL)
			return (NULL);
		str_zero[0] = '0';
		str_zero[1] = '\0';
		return (str_zero);
	}
	str = (char *)malloc((digit_nbr(n) * sizeof(char)) + (1 + is_negativ(n)));
	if (str == NULL)
		return (NULL);
	set_str(n, str);
	if (is_negativ(n))
		str[0] = '-';
	return (str);
}
