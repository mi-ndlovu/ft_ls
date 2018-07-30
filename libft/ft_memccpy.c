/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 14:29:47 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/12 14:30:53 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*dest;
	const char		*src2;
	size_t			i;

	dest = (char*)dst;
	src2 = (const char*)src;
	i = 0;
	while (i < n)
	{
		if (*src2 == c)
		{
			*dest++ = *src2++;
			return (dest);
		}
		*dest++ = *src2++;
		i++;
	}
	return (NULL);
}
