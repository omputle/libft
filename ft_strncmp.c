/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:32:23 by omputle           #+#    #+#             */
/*   Updated: 2019/05/25 11:29:49 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;
	int		ans;

	count = 0;
	ans = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && count < n)
	{
		if (s1[count] != s2[count])
		{
			ans = s1[count] - s2[count];
			break ;
		}
		count++;
	}
	return (ans);
}
