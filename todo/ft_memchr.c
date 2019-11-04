#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*ptr;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < n)i
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			ptr = &((unsigned char *)s)[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
