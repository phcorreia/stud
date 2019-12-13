/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:09:45 by pcorreia          #+#    #+#             */
/*   Updated: 2019/11/22 15:44:05 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iscset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*s2;
	long int		i;
	long int		j;
	long int		len;

	i = 0;
	if (s1[0] == '\0')
		return (s2 = ft_calloc(1, sizeof(char)));
	while (s1[i] && iscset(s1[i], set) == 1)
		i++;
	len = ft_strlen(s1) - 1;
	while (i != 0 && iscset(s1[len], set) == 1)
		len--;
	len = len - i;
	if (len < 0)
		len = 0;
	if (!(s2 = ft_calloc(len + 1, sizeof(char))))
		return (0);
	j = 0;
	while (j <= len)
	{
		s2[j] = s1[i + j];
		j++;
	}
	return (s2);
}
