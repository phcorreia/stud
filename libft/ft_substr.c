/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:28:41 by pcorreia          #+#    #+#             */
/*   Updated: 2019/12/16 12:11:05 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sf;
	unsigned int	i;

	i = 0;
	if (s)
	{
		if (start > ft_strlen(s))
			len = 0;
		if (!(sf = ft_calloc(len + 1, sizeof(char))))
			return (0);
		while (i < len)
		{
			sf[i] = s[start + i];
			i++;
		}
		sf[i] = '\0';
		return (sf);
	}
	else
		return (NULL);
}
