/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:17:09 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/07 10:20:24 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content)
{
	t_list	*li;

	li = malloc(sizeof(t_list));
	if (li == 0)
		return (NULL);
	li->content = (void *)content;
	li->next = NULL;
	return (li);
}
