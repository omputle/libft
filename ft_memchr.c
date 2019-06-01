/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:32:27 by omputle           #+#    #+#             */
/*   Updated: 2019/05/31 16:52:01 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*s;

	count = 0;
	s = (unsigned char *)str;
	while (count < n)
	{
		if (s[count] == c)
			return (&s[count]);
		count++;
	}
	return (0);
}
