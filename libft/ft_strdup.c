/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 16:39:50 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/08 12:14:16 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	int		i;
	char	*s2;

	i = 0;
	s1_len = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	s2 = (char*)malloc(sizeof(char) * (s1_len + 1));
	if (s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
