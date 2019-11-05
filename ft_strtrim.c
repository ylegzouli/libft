/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:28:10 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/05 11:56:52 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	strlen_trim(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		if (!is_charset(s1[1], set))
			len++;
		i++;
	}
	return (len);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ret;

	ret = (char *)malloc(sizeof(char) * (strlen_trim(s1, set) + 1));
	if (ret == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (!is_charset(s1[i], set))
		{
			ret[j] = s1[i];
			j++;
		}
		i++;
	}
	ret[j] = '\0';
	return (ret);
}
