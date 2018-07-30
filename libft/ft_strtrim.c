/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 13:42:58 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/10 17:20:01 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_get_first_not_white(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	return ((char *)&s[i]);
}

static char		*ft_get_last_not_white(char const *s)
{
	int	i;

	i = (int)(ft_strlen(s)) - 1;
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i--;
	if (i == -1)
		return (0);
	return ((char *)&s[i]);
}

char			*ft_strtrim(char const *s)
{
	char	*first_not_white;
	char	*last_not_white;
	char	*str;
	size_t	len;

	if (!s)
		return (NULL);
	first_not_white = ft_get_first_not_white(s);
	last_not_white = ft_get_last_not_white(s);
	if (first_not_white > last_not_white)
	{
		str = ft_strnew(0);
		if (!str)
			return (NULL);
		return (str);
	}
	len = last_not_white - first_not_white + 1;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, first_not_white, len);
	return (str);
}
