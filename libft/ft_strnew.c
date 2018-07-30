/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 12:41:38 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/09 13:40:08 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	while (i < (size + 1))
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
