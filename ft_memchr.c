/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:23:49 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/07 11:50:14 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(void const *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	i = 0;
	while (i < n)
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
