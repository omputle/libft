/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:51:31 by omputle           #+#    #+#             */
/*   Updated: 2019/06/08 16:17:21 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*s;
	size_t			count;

	count = 0;
	s = (unsigned char *)str;
	while (count < n)
	{
		s[count] = 0;
		count++;
	}
}
