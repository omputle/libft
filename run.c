#include "libft.h"

int		main(void)
{
	char	q[] = "Queen";
	char	k[] = "King";
	char	*x = ft_memmove(q, k, 2);
	printf("q: |%s| \t k: |%s| \t x: |%s|\n", q, k, x);
	return (0);
}
