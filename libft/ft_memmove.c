/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:20:43 by pcorreia          #+#    #+#             */
/*   Updated: 2019/11/18 17:16:31 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (src == dst)
		return (dst);
	if (dst > src)
	{
		while (++i <= len)
			((unsigned char *)dst)[len - i] = ((unsigned char *)src)[len - i];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
