/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:32:23 by omputle           #+#    #+#             */
/*   Updated: 2019/05/21 10:32:26 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, int n)
{
	int	count;
	int	ans;

	count = 0;
	ans = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && count < n)
	{
		if (s1[count] != s2[count])
		{
			ans = s1[count] - s2[count];
			break ;
		}
		count++;
	}
	return (ans);
}
