/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:22:29 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/05 16:58:39 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, void const *s2, size_t n)
{
	size_t		i;
	const char	*src;
	char		*dst;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	src = s2;
	dst = s1;
	if (dst > src)
	{
		i = n;
		while (i > 0)
		{
			dst[i - 1] = src[i - 1];
			i--;
		}
	}
	else if (dst < src)
		ft_memcpy(dst, src, n);
	return (s1);
}
