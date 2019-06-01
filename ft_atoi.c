/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:57:34 by omputle           #+#    #+#             */
/*   Updated: 2019/06/01 10:23:50 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	count;

	num = 0;
	sign = 1;
	count = 0;
	if (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
		{
			sign = -1;
		}
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		num = num * 10 + (str[count] - '0');
		count++;
	}
	return (num * sign);
}
