/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolos <lnicolos@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:40:52 by lnicolos          #+#    #+#             */
/*   Updated: 2023/10/21 09:44:09 by lnicolos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n < 10 && n != -2147483648)
	{
		n = n + 48;
		write(fd, &n, 1);
	}
	else if (n == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		ft_putnbr_fd(147483648, 1);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * (-1), 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putnbr_fd(n % 10, 1);
	}	
}
