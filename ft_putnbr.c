/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:17:43 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/04 17:44:59 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_put(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int nb)
{
	long int n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_put('-');
	}
	if (n <= 9)
		ft_put(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
