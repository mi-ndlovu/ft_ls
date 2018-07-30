/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 13:11:24 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/08 16:24:43 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ans;
	int		i;

	i = ft_strlen(s);
	ans = 0;
	while (i >= 0)
	{
		if (*s == (char)c)
			ans = (char*)s;
		s++;
		i--;
	}
	return (ans);
}
