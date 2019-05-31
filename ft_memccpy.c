/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 16:18:07 by omputle           #+#    #+#             */
/*   Updated: 2019/05/31 16:53:34 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const *restrict src, int c, size_t n)
{
	size_t	count;
	unsigned char	*s1;
	unsigned char	*s2;

	count = 0;
	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	while (s2[count] && count < n)
	{
		s2[count] = s1[count];
		if (s1[count] == c)
			return (&s2[count + 1]);
		count++;
	}
	return (0);
}
