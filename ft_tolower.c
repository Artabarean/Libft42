#include "libft.h"

int     ft_tolower(int c)
{       
        if (c >= 65 && c <= 90)
        {       
                c = c + 32;
        }       
        return (c);
}       
/*#include <stdio.h>
int     main()
{       
        int     c;

        c = 'Z';
        printf("%d\n", ft_tolower(c));
        printf("%c\n", ft_tolower(c));
        return (0);
}*/
