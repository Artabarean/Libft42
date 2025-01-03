#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <string.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
size_t 	ft_strlcpy(char *dst, const char *src, size_t size);
size_t 	ft_strlcat(char *dst, const char *src, size_t size);
size_t 	ft_strlen(const char *s);
int     ft_tolower(int c);
int	ft_toupper(int c);
int	ft_atoi(const char *nptr);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);

#endif
