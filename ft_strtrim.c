/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:01:53 by omputle           #+#    #+#             */
/*   Updated: 2019/06/05 09:34:46 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	size;
	size_t	count;
	char	*str;

	start = 0;
	count = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	size = end - start + 2;
	str = (char *)malloc(sizeof(char) * (size));
	while (count < (size - 1))
	{
		str[count] = (char)s[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
}