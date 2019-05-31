/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:59:30 by omputle           #+#    #+#             */
/*   Updated: 2019/05/30 10:44:46 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			count;
	unsigned char	*s;

	count = 0;
	s = str;
	if (!ft_isprint(c))
		return (s);
	while (count < len)
	{
		s[count] = (unsigned char)c;
		count++;
	}
	return (s);
}
