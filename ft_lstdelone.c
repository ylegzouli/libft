/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:17:29 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/06 13:34:07 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                ft_lstdelone(t_list **alst, void (*del)(void *))
{
	del((*alst)->content);
	free((*alst)->content);
	(*alst)->content = NULL;
}
