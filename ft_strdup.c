/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:03:00 by omputle           #+#    #+#             */
/*   Updated: 2019/05/21 09:03:04 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		len;
	int		count;
	char	*dest;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	dest = malloc(len * sizeof(char));
	count = 0;
	while (str[count] != '\0')
	{
		dest[count] = str[count];
		count++;
	}
	return (dest);
}
