/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:27:55 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/06 19:13:12 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		res;

	i = 0;
	res = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[res] != '\0')
		res++;
	if (size == i)
		return (res + size);
	else
		res = res + i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size && j + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (res);
}
