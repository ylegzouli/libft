/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:23:04 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/07 16:25:19 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *l, void *(*f)(void *), void (*d)(void *))
{
	t_list	*new;
	t_list	*current;

	new = NULL;
	current = NULL;
	while (l)
	{
		current = ft_lstnew(f(l->content));
		if (current == NULL)
		{
			ft_lstclear(&new, d);
			return (NULL);
		}
		ft_lstadd_back(&new, current);
		l = l->next;
	}
	return (new);
}
