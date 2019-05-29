/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:49:30 by omputle           #+#    #+#             */
/*   Updated: 2019/05/29 11:13:06 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		level(int n)
{
	int	x;
	int	count;

	count = 0;
	x = 1;
	while (n / x != 0)
	{
		x = x * 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		count;
	int		neg;

	num = 0;
	neg = 0;
	count = level(n);
	num = malloc(sizeof(char) * (count + 1));
	if (n < 0)
	{
		n = -1 * n;
		count++;
		num[0] = '-';
		neg = 1;
	}
	num[count] = '\0';
	count--;
	while (count >= neg)
	{
		num[count] = '0' + (n % 10);
		n = (n - (n % 10)) / 10;
		count--;
	}
	return (num);
}
