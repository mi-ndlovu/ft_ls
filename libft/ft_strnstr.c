/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 09:45:23 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/08 16:33:51 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (big[i] != '\0')
	{
		j = i;
		k = 0;
		if (little[k] == '\0')
			return ((char*)&big[i]);
		while (big[j] && little[k] && big[j] == little[k] && j < len)
		{
			j++;
			k++;
			if (little[k] == '\0')
				return ((char*)&big[i]);
		}
		i++;
	}
	return (NULL);
}
