/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:37:26 by omputle           #+#    #+#             */
/*   Updated: 2019/05/20 16:55:35 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strncpy(char *dest, char *src, int len)
{
	int	count;

	count = 0;
	while (src[count] != '\0' && count < len)
	{
		dest[count] = src[count];
		count++;
	}
	while (count <= len)
	{
		dest[count] = '\0';
		count++;
	}
}
