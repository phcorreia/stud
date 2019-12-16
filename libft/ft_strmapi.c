/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:56:08 by pcorreia          #+#    #+#             */
/*   Updated: 2019/12/16 13:43:32 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*strmodif;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen((char *)s);
	if (!(strmodif = ft_calloc(len + 1, sizeof(char))))
		return (0);
	while (s[i])
	{
		strmodif[i] = f(i, s[i]);
		i++;
	}
	return (strmodif);
}
