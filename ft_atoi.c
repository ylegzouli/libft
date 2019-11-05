/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:44:06 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/05 13:55:33 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *str)
{
	int	i;
	int	negativ;
 	unsigned int	res;
	unsigned int	tmp;

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
	return (negativ < 0 ? -res : res);
}

int main(int ac, char **av)
{
	printf("%d\n", ft_atoi(av[1]));
}
