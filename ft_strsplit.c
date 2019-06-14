/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:40:06 by omputle           #+#    #+#             */
/*   Updated: 2019/06/13 15:44:39 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

size_t	word_count(char *str, char c)
{
	size_t	count;
	size_t	ans;

	ans = 0;
	count = 0;
	while (str[count] != '\0')
	{
		while (str[count] == c && str[count] != '\0')
			count++;
		if (str[count] != c && str[count] != '\0')
			ans++;
		while (str[count] != c && str[count] != '\0')
			count++;
	}
	return (ans);
}

int		main(void)
{
	char	str[] = "You think darkness is your ally";
	char	c = ' ';
	printf("String: |%s|\t Word count : |%lu|\n", str, word_count(str, c));
	return (0);
}
