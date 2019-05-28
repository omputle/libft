/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:56:55 by omputle           #+#    #+#             */
/*   Updated: 2019/05/28 09:16:48 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int num;

	num = 0;
	if (n < 9 && n > -9)
	{
		if (n >= 0)
			num = '0' + n;
		else
		{
			n = n * -1;
			num = '0' + n;
			write(1, "-", 1);
		}
		write(1, &num, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}