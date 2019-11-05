#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	if (count == 0 || size == 0)
		return (NULL);
	res = malloc(size * count);
	if (res == 0)
		return (NULL);
	while (i <= count)
	{
		res[i] = 0;
		i++;
	}
	return ((void *)res);
}
