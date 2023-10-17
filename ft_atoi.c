/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:32:02 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/17 10:38:11 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	resultat;
	int	signe;

	signe = 1;
	resultat = 0;
	while ((*nptr > 9 && *nptr < 13) || *nptr == 32)
		nptr++;
	while (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == 45)
			signe *= -1;
		nptr++;
	}
	while (*nptr > 47 && *nptr < 58)
	{
		resultat = resultat * 10;
		resultat = resultat + *nptr - 48;
		nptr++;
	}
	return (resultat * signe);
}
