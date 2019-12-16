/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:02:47 by pcorreia          #+#    #+#             */
/*   Updated: 2019/12/16 16:50:06 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	len = ft_strlen(src);
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
