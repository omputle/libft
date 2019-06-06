/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:59:30 by omputle           #+#    #+#             */
/*   Updated: 2019/06/06 11:25:24 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			count;
	unsigned char	*s;
	unsigned char	ltr;

	ltr = (unsigned char)c;
	count = 0;
	s = (unsigned char *)str;
	if (!ft_isprint(c) || len == 0)
		return (str);
	while (count < len)
	{
		s[count] = ltr;
		count++;
	}
	return (str);
}
