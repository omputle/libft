/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:57:34 by omputle           #+#    #+#             */
/*   Updated: 2019/06/08 09:30:22 by omputle          ###   ########.fr       */
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
	while (str[count] && (str[count] == ' ' || str[count] == '\t' ||
				str[count] == '\f' || str[count] == '\n' || 
				str[count] == '\v' || str[count] == '\r'))
		count++;
	if (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign = -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		num = num * 10 + (str[count] - '0');
		count++;
	}
	return (num * sign);
}
