/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:34:44 by omputle           #+#    #+#             */
/*   Updated: 2019/05/20 16:34:57 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcat(char *s1, char *s2)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[i] != '\0')
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
}
