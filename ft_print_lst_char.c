/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:52:04 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/13 15:16:47 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_lst_char(t_list *li)
{
	while (li != NULL)
	{
		if (li->content != 0)
			write(1, (li->content), 1);
		li = li->next;
	}
}
