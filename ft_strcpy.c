/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:46:49 by omputle           #+#    #+#             */
/*   Updated: 2019/05/20 10:46:54 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcpy(char *dst, char *src)
{
	int	len;
	int	count;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	count = 0;
	while (count < len)
	{
		dst[count] = src[count];
		count++;
	}
	dst[len] = '\0';
	return (*dst);
}
