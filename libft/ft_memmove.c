/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:13:41 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/12 14:33:01 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*src2;

	dest = (char*)dst;
	src2 = (const char*)src;
	if (src2 < dest)
	{
		while (len)
		{
			len--;
			dest[len] = src2[len];
		}
	}
	else
		ft_memcpy(dest, src2, len);
	return (dest);
}
