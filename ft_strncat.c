/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:40:42 by omputle           #+#    #+#             */
/*   Updated: 2019/05/21 08:40:45 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, int n)
{
	int	count;
	int	len;
	int	i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	count = len;
	i = 0;
	while (count < (len + n) && src[i] != '\0')
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
