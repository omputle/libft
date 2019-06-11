#include "libft.h"

void	*ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	count;

	if (!f || !s)
		return (NULL);
	else
	{
		count = 0;
		while (s[count])
		{
			f(count, &s[count]);
			count++;
		}
	}
	return (0);
}
