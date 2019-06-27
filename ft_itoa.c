/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:49:30 by omputle           #+#    #+#             */
/*   Updated: 2019/06/27 15:30:03 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	level(int n)
{
	int		x;
	int		count;

	count = 0;
	x = 1;
	if (n < 0)
		n = -1 * n;
	if (n == 0)
		count++;
	else if (n != 0)
	{
		while (n / x != 0)
		{
			x = x * 10;
			count++;
		}
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char			*num;
	int				count;
	int				neg;

	num = 0;
	neg = 0;
	if (n < 0)
		neg = 1;
	count = level(n);
	if (!(num = (char *)malloc(sizeof(char) * (count + 1 + neg))))
		return (0);
	if (n < 0)
	{
		n = -1 * n;
		count++;
		num[0] = '-';
	}
	num[count] = '\0';
	while (--count >= neg)
	{
		num[count] = '0' + (n % 10);
		n = (n - (n % 10)) / 10;
	}
	return (num);
}
