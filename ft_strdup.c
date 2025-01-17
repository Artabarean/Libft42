#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*clone;
	int	i;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	clone = (char *)malloc(ft_strlen(s) + 1);
	if (clone == NULL)
	{
		return (NULL);
	}
	while(*s != '\0')
	{
		clone[i] = *s;
		s++;
		i++;
	}
	clone[i] = '\0';
	return (clone);
}
/*#include <stdio.h>
int main()
{
	printf("%s\n", ft_strdup("Hola"));
	return (0);
}*/