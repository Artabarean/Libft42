#include "libft.h"

char	*ft_strnstr(const char *upstr, const char *substr, size_t len)
{
	size_t i;
	char *str;

	str = (char *)upstr;
	i = 0;
	if (*substr == '\0')
		return (str);
	while(i < len && *upstr != '\0')
	{
		while(i < len && *upstr != '\0' && *substr != '\0' && *upstr == *substr)
		{
			upstr++;
			substr++;
			i++;
		}
		if (*upstr == '\0')
			return (str);
		if (*upstr != *substr && i < len)
		{
			upstr++;
			str++;
			i++;
		}
	}
	return (NULL);
}
/*int main()
{
	printf("%s\n", ft_strnstr("Hello World", "World", 11));
	return (0);
}*/
