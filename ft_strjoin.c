/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:11:52 by omputle           #+#    #+#             */
/*   Updated: 2019/06/05 08:32:07 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	len;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	ans = (char *)malloc(sizeof(char) * len);
	ans = ft_strcat((char *)s1, (char *)s2);
	return (ans);
}
