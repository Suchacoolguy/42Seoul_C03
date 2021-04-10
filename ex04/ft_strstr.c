char	*ft_strstr(char *str, char *to_find)
{
	char *str_finder;
	char *to_find_finder;

	if (!(*to_find))
		return (str);
	while (*str)
	{
		str_finder = str;
		to_find_finder = to_find;
		while (*str_finder == *to_find_finder && *str_finder && *to_find_finder)
		{
			str_finder++;
			to_find_finder++;
		}
		if (*to_find_finder == '\0')
			return (str);
		str++;
	}
	return (0);
}
