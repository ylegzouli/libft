/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:04:40 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/06 12:08:51 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list          *ft_lstlast(t_list *lst)
{
	t_list		*li;

	li = lst;
	if (li == NULL)
		return (NULL);
	while (li->next != NULL)
		li = li->next;
	return (li);
}
