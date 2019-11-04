#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int	i;
	char	*tmp;

	if (s == NULL)
		return (NULL);
	i = 0;
	tmp = (char *)s;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
	}
	if (tmp[i] == c)
		return (&tmp[i]);
	return (NULL);
}
