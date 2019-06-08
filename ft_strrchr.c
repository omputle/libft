/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:25:06 by omputle           #+#    #+#             */
/*   Updated: 2019/06/08 08:54:46 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				count;
	int				len;
	char			*s;

	count = 0;
	s = (char *)str;
	while (s[count] != '\0')
		count++;
	len = count;
	count--;
	while (count >= 0)
	{
		if (s[count] == (char)c)
			return (&s[count]);
		count--;
	}
	if (c == '\0')
		return (&s[len]);
	return (0);
}
