/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 10:52:02 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/21 10:52:04 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_digitlen_base(int n, int baselen)
{
	int		ret;

	ret = 0;
	while (n != 0)
	{
		n = n / baselen;
		ret++;
	}
	return (ret);
}

char			*ft_itoa_base(int n, int baselen, char *base)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = ft_digitlen_base(n, baselen);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n == 0)
		return (ft_strcpy(str, "0"));
	str[len] = '\0';
	while (len > i)
	{
		str[--len] = base[n % baselen];
		n = n / baselen;
	}
	return (str);
}
