/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:27:15 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/04 13:30:31 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

char		*ft_strdup(const char *s1)
{
	int		i;
	char		*ret;

	i = 0;
	while (s1[i] != '\0')
		i++;
	i++;
	ret = (char*)malloc(sizeof(s1) * i);
	i = 0;
	if (ret == 0)
	{
		errno = ENOENT;
		return (0);
	}
	while (s1[i] != '\0')
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
