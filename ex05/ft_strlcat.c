unsigned int ft_len(char *str)
{
	unsigned int length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_dest;
	unsigned int len_src;
	unsigned int max;
	char *dest_i;
	int i;

	len_dest = ft_len(dest);
	len_src = ft_len(src);
	if (size == 0)
		return (len_src);
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	max = size - len_dest - 1;
	*dest_i = &dest[len_dest];
	while (i < Max && *src)
	{
		*dest_i = *src;
		dest_i++;
		src++;
		i++;
	}
	*dest_i = '\0';
	return (len_dest + len_src);
}
