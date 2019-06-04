/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:10:25 by omputle           #+#    #+#             */
/*   Updated: 2019/06/04 16:38:43 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	count;

	count = 0;
	if (size == 0)
		return (0);
	else
	{
		str = (char *)malloc(sizeof(char) * size);
		while (count < size)
		{
			str[count] = '\0';
			count++;
		}
	}
	return (str);
}
