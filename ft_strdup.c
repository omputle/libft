/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:03:00 by omputle           #+#    #+#             */
/*   Updated: 2019/06/03 16:44:00 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	count;
	char	*dest;

	len = ft_strlen((char *)str);
	dest = ft_memalloc(len);
	count = 0;
	while (str[count] != '\0')
	{
		dest[count] = str[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
