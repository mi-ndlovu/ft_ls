/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndlovu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 11:37:32 by mndlovu           #+#    #+#             */
/*   Updated: 2017/06/02 16:38:46 by mndlovu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		len;
	char	*big2;

	big2 = (char*)big;
	i = 0;
	len = 0;
	while (little[len] != '\0')
		len++;
	if (len == 0)
		return (big2);
	while (big2[i] != '\0')
	{
		j = 0;
		while (little[j] == big2[i + j])
		{
			if (little[j + 1] == '\0')
				return (big2 + i);
			j++;
		}
		i++;
	}
	return (0);
}
