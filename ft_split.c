/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylegzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:09:28 by ylegzoul          #+#    #+#             */
/*   Updated: 2019/11/04 14:09:32 by ylegzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_is_sep(char car, char c)
{
	if (car == c)
		return (1);
	return (0);
}

static int			ft_nb(char const *str, char c)
{
	int i;
	int nb_chaine;

	i = 0;
	nb_chaine = 0;
	while (str[i] && ft_is_sep(str[i], c))
		i++;
	while (str[i])
	{
		while (str[i] && !ft_is_sep(str[i], c))
			i++;
		while (str[i] && ft_is_sep(str[i], c))
			i++;
		nb_chaine++;
	}
	return (nb_chaine);
}

static char		*ft_create_str(char const *str, char c)
{
	char		*str_ret;
	int			i;

	i = 0;
	while (str[i] && !ft_is_sep(str[i], c))
		i++;
	str_ret = malloc((i + 1) * sizeof(char));
	i = 0;
	while (str[i] && !ft_is_sep(str[i], c))
	{
		str_ret[i] = str[i];
		i++;
	}
	str_ret[i] = '\0';
	return (str_ret);
}

char		**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	char		**liste;

	i = 0;
	j = 0;
	liste = 0;
	liste = malloc((1 + ft_nb(s, c)) * sizeof(char *));
	while (s[i] && ft_is_sep(s[i], c))
		i++;
	while (s[i])
	{
		liste[j] = ft_create_str(&s[i], c);
		j++;
		while (s[i] && !ft_is_sep(s[i], c))
			i++;
		while (s[i] && ft_is_sep(s[i], c))
			i++;
	}
	liste[j] = 0;
	return (liste);
}
