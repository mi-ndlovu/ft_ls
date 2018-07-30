/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:34:15 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/10 11:19:57 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;
	unsigned int len;

	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			f(i, &s[i]);
			i++;
		}
	}
}
