/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:00:48 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/07 10:46:07 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_substr(char const *s, unsigned int start, size_t len)
{
	if (ft_strlen(&s[start]) >= len)
		return (len);
	else
		return (ft_strlen(&s[start]));
}

static char	*ret_error(char *ret)
{
	ret = malloc(1);
	ret[0] = '\0';
	return (ret);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ret;
	size_t		i;

	ret = NULL;
	if (!s || !len)
		return (ret_error(ret));
	ret = (char *)malloc(sizeof(char) * len_substr(s, start, len) + 1);
	if (ret == 0)
		return (NULL);
	i = 0;
	if (start > len)
		return (ret_error(ret));
	while (s[start] != '\0' && i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}
