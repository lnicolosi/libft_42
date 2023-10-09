/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:32:02 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/09 13:36:01 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	resultat;

	resultat = 0;
	signe = 1;
	i = 0;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (nptr[i] == '+') //a verifier si besoins ou pas
	{
		signe = 1;
		i++;
	}
	while (nptr[i])
	{
		if (nptr[i] < 48 || nptr[i] > 57)
			return (resultat * signe);
		resultat = resultat * 10 + nptr[i] - 48;
		i++;
	}
	return (resultat * signe);
}
