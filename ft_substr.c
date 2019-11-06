/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:00:48 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/06 11:13:44 by ylegzoul         ###   ########.fr       */
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

char 		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ret;
	size_t		i;

	ret = (char *)malloc(sizeof(char) * len_substr(s, start, len) + 1);
	if (ret == 0)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}
