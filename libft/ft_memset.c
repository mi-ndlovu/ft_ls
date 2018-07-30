/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 09:58:55 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/12 14:27:23 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*b2;
	char	c2;
	size_t	i;

	b2 = (char*)b;
	c2 = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		b2[i] = c2;
		i++;
	}
	return (b2);
}
