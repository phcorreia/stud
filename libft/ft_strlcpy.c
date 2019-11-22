/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:02:47 by pcorreia          #+#    #+#             */
/*   Updated: 2019/11/22 11:14:56 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(src);
	if (!src || !dst)
		return (0);
	while (i < size)
	{
		if (src[i] != '\0' && (i < size - 1))
			dst[i] = src[i];
		else
		{
			dst[i] = '\0';
			return (len);
		}
		i++;
	}
	return (len);
}
