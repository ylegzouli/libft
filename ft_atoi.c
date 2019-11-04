/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:44:06 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/04 17:40:44 by ylegzoul         ###   ########.fr       */
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
	while ((str[i] >= 9 && str[i] <= 32) || str[i] == 32)
		i++;
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
	negativ < 0 ? return (-res) : return (res);
}
