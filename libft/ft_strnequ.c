/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 14:32:14 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/09 09:25:32 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	size_t s1_len;
	size_t s2_len;

	if (s1 == NULL || s2 == NULL)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	while (i < n || s1[i] || s2[i])
	{
		if (s1_len == s2_len && *s1 == *s2)
			return (1);
		else
			return (0);
		i++;
	}
	return (0);
}
