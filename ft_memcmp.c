#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	count;
	unsigned char	*str1;
	unsigned char	*str2;

	count = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((str1[count] == str2[count]) && (count < n))
	{
		count++;
	}
	return ((int)(str1[count] - str2[count]));
}
