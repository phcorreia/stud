/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:09:45 by pcorreia          #+#    #+#             */
/*   Updated: 2019/12/16 16:51:13 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iscset(char c, char const *set)
{
	size_t			i;

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
	int				i;
	int				j;
	int				len;
	int				lenset;

	i = 0;
	if (!set || !s1)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && iscset(s1[i], set) == 1)
		i++;
	while (len != 0 && iscset(s1[len - 1], set) == 1)
		len--;
	lenset = len - i;
	if (lenset < 0)
		lenset = 0;
	if (!(s2 = ft_calloc(lenset + 1, sizeof(char))))
		return (NULL);
	j = -1;
	while (++j + i < len)
		s2[j] = s1[i + j];
	return (s2);
}
