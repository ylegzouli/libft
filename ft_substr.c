/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:00:48 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/07 12:12:43 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_substr(char const *s, unsigned int start, size_t len)
{
	if (ft_strlen(&s[start]) > len)
		return ((int)len);
	else
		return (ft_strlen(&s[start]));
}

static char	*ret_error(char *ret)
{
	ret = malloc(sizeof(char));
	ret[0] = '\0';
	return (ret);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ret;
	int			i;
	int			size;

	ret = NULL;
	if (!s || !len)
		return (ret_error(ret));
	if (start >= len || start >= ft_strlen(s))
		return (ret_error(ret));
	size = len_substr(s, start, len);
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (ret == 0)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < size)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}
