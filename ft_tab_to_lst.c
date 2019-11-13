/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:49:50 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/13 15:19:35 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_tab_to_lst(t_list **li, char *tab, size_t size)
{
	size_t 		i;

    i = 0;
    while (i < size)
    {
        ft_lstadd_back(li, ft_lstnew((&tab[i])));
        i++;
    }
}
