void	ft_strncpy(char *dest, char *src, int len)
{
	int	count;
	int	i;
	
	count = 0;
	while (src[count] != '\0')
	{
		 count++;
	}
	if (len <= count)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
	{
		i = 0;
		while (i < count)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < len)
		{
			dest[i] = '\0';
			i++;
		}
	}
}
