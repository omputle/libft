/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:50:32 by omputle           #+#    #+#             */
/*   Updated: 2019/06/07 15:18:42 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			count;
	size_t			len_d;
	size_t			len_s;
	unsigned char	*dest;
	unsigned char	*src;

	count = 0;
	src = (unsigned char *)str2;
	dest = (unsigned char *)str1;
	len_d = ft_strlen((char *)dest);
	len_s = ft_strlen((char *)src);
	if (dest == '\0' && src == '\0')
		return (0);
	if (len_s < len_d)
	{
		while (count < n)
		{
			dest[count] = src[count];
			count++;
		}
	}
	else
	{
		while (n > 0)
		{
			*(dest++) = *(src++);
			n--;
		}
		
	}
	return (dest);
}
