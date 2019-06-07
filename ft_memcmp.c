/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 10:24:07 by omputle           #+#    #+#             */
/*   Updated: 2019/06/07 16:34:47 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*str1;
	unsigned char	*str2;
	int				ans;

	count = 0;
	ans = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[count] != '\0' || str2[count] != '\0' || count < n)
	{
		if (str1[count] != str2[count])
		{
			ans = str1[count] - str2[count];
			break ;
		}
		count++;
	}
	return (ans);
}
