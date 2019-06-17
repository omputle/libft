/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:57:34 by omputle           #+#    #+#             */
/*   Updated: 2019/06/17 12:11:16 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int		num;
	int					sign;
	int					count;

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
	if (num > 2147483648 && sign == -1)
	   return (0);
	else if (num > 2147483647 && sign == 1)
		return (-1);
	return (num * sign);
}
