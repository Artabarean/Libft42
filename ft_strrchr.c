#include "libft.h"
//#include <stddef.h>
char	*ft_strrchr(const char *s, int c)
{
	while (*s != '\0')
	{
		s++;
	}
		if (c == '\0')
		{
        		return (char *)s;
		}
	s--;

	while (*s)
	{
        	if (*s == (char)c)
		{
        	    return (char *)s;
        	}
	s--;
    	}

    return NULL;
}
/*#include <stddef.h>
#include <stdio.h>

int main()
{
    int c = 'o';
    const char s[5] = "saco";

    char *result = ft_strrchr(s, c);
    if (result != NULL) {
        printf("Found character '%c' at position: %ld\n", c, result - s);
    } else {
        printf("Character '%c' not found\n", c);
    }

    return 0;
}*/
