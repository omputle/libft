/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 01:26:04 by omputle           #+#    #+#             */
/*   Updated: 2019/05/25 01:26:06 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	count;
	int		ans;

	count = 0;
	ans = 1;
	while ((s1[count] || s2[count]) && count < n)
	{
		if (s1[count] != s2[count])
		{
			ans = 0;
			break ;
		}
		count++;
	}
	return (ans);
}
