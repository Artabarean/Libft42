#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s) {
        if (*s == (char)c) {
            return (char *)s;
        }
        s++;
    }

    if (c == '\0') {
        return (char *)s;
    }

    return (NULL);
}
/*#include <stddef.h>
#include <stdio.h>

int main()
{
    int c = 'o';
    const char s[5] = "saco";

    char *result = ft_strchr(s, c);
    if (result != NULL) {
        printf("Found character '%c' at position: %ld\n", c, result - s);
    } else {
        printf("Character '%c' not found\n", c);
    }

    return 0;
}*/