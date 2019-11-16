/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:23:36 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/06 19:15:09 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_lst(int nb, t_list **li)
{
	long int	n;
	char		tmp;

	n = nb;
	if (n < 0)
	{
		n = -n;
		tmp = '-';
		ft_putchar_lst(tmp, li);
	}
	if (n <= 9)
	{
		tmp = n + '0';
		ft_putchar_lst(tmp, li);
	}
	else
	{
		ft_putnbr_lst(n / 10, li);
		ft_putnbr_lst(n % 10, li);
	}
}

int main()
{
	int n = 796;
	t_list *li;

	li = ft_lstnew(NULL);
	ft_putnbr_lst(n, &li);
	ft_print_lst_char(li);
}
