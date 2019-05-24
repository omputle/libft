/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:25:06 by omputle           #+#    #+#             */
/*   Updated: 2019/05/24 10:48:29 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	count = count - 1;
	while (str[count])
	{
		if (str[count] == c)
			return ((char *)&str[count]);
		count--;
	}
	if (c == '\0')
		return ((char *)&str[count]);
	return (0);
}
