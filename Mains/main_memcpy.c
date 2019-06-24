#include "libft.h"

int		main(void)
{
	char s1[50] = "Mabena disappoints";
	char s2[50] = "I am Groot";
	ft_memcpy(s1, s2, 4);
	ft_putstr( s1);
	return (0);
}
