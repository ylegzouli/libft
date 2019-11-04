/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:44:06 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/04 14:14:48 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *str)
{
	int	i;
	int	negativ;
	int	res;
	int	tmp;

	i = 0;
	negativ = 1;
	res = 0;
	if (str[i] == '-')
	{
		i++;
		negativ *= -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		tmp = (int)str[i] - 48;
		res = res * 10 + tmp;
		i++;
	}
	if (negativ < 0)
		return (-res);
	return (res);
}
