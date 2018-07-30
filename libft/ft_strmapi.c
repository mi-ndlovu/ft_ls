/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:00:55 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/09 11:11:47 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	i = 0;
	str = NULL;
	if (s)
	{
		len = ft_strlen(s);
		str = (char*)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		while (i < len)
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
