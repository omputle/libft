#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] == haystack[i + j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char	needle[50] = "hin";
	char	haystack[50] = "You know nothing Jon Snow";
	printf("%s", ft_strstr(haystack, needle));
	return (0);
}
