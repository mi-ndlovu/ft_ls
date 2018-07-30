/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:33:44 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/09 15:26:55 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if (s)
	{
		str = (char*)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		while (i < len)
		{
			str[i] = s[start];
			start++;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
