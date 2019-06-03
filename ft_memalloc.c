#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if (size = 0)
		return (0);
	else
		str = (char *)malloc(sizeof(char) * size);
	return (str);
}
