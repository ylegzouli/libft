/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:27:55 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/04 13:29:13 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t		ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	 i;
	size_t	 j;
	size_t	 res;

	i = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res = res + size;
	else
		res = res + i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
