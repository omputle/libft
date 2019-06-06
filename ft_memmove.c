/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:50:32 by omputle           #+#    #+#             */
/*   Updated: 2019/06/06 10:45:54 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			count;
	size_t			len_d;
	unsigned char	*dest;
	unsigned char	*src;

	count = 0;
	src = (unsigned char *)str2;
	dest = (unsigned char *)str1;
	len_d = ft_strlen((char *)dest);
	while ((count <= len_d) && (count < n))
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
