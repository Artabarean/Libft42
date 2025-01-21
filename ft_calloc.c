#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    int     *ptr;

    ptr = malloc(nmemb * size * sizeof(int));
    if (ptr == NULL)
    {
        return (NULL);
    }
    ft_bzero(ptr, (nmemb * size));
    return (ptr);
}
/*int main()
{    printf("%p\n", ft_calloc(5, 10));
    return (0);
}*/