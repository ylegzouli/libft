/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:23:13 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/05 17:36:27 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_lst(char c, t_list **li)
{
	t_list *tmp;

	tmp = ft_lstnew_malloc(&c, 1);
	ft_lstadd_back(li, tmp);
}	
