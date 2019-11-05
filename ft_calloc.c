/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:04:03 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/05 18:29:31 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	res = malloc(size * count);
	if (res == 0)
		return (NULL);
	while (count * size > i)
	{
		res[i] = 0;
		i++;
	}
	return ((void *)res);
}
