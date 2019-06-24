#include "libft.h"

int		main(void)
{
	char s1[50] = "You cant see me...";
	char s2[50] = "Time to play the game";
	ft_memccpy(s1, s2, 'o', 5);
	ft_putstr(s1);
	ft_putchar('\n');
	ft_putstr(s2);
	ft_putchar('\n');
	return (0);
}
