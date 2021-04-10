char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *(unsigned char *)src;
		dest++;
		src++;
		nb--;
	}
	dest = '\0';
	return (temp);
}
