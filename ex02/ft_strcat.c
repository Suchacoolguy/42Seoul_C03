char	*ft_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *(unsigned char *)src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);

