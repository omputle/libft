/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:50:20 by omputle           #+#    #+#             */
/*   Updated: 2019/05/28 09:55:43 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	num = 0;
	if (n < 9 && n > -9)
	{
		if (n >= 0)
		{
			num = '0' + n;
		}
		else
		{
			n = n * -1;
			num = '0' + n;
			write(fd, "-", 1);
		}
		write(fd, &num, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
