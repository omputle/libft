/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:05:41 by omputle           #+#    #+#             */
/*   Updated: 2019/05/24 10:42:51 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == c)
		{
			return ((char *)&str[count]);
			break ;
		}
		count++;
	}
	if (c == '\0')
		return ((char *)&str[count]);
	return (0);
}
