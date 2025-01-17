#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    int     *ptr;
    size_t  i;

    i = 0;
    if(nmemb == 0 || size == 0)
        return(NULL);
    ptr = malloc(nmemb * size * sizeof(int));
    if (ptr == NULL)
    {
        return (NULL);
    }
    ft_bzero(ptr, (nmemb * size));
    printf("%ls\n", ptr);
    return (ptr);

}
/*int main()
{    printf("%p\n", ft_calloc(5, 10));
    return (0);
}*/