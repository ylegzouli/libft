/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 11:18:51 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/04 13:34:27 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < (n - 1) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
