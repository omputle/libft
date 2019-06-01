/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 11:59:38 by omputle           #+#    #+#             */
/*   Updated: 2019/06/01 12:21:23 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t			count;
	unsigned char	*src;
	unsigned char	*dest;

	count = 0;
	src = (unsigned char *)str2;
	dest = (unsigned char *)str1;
	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
