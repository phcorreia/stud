/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:37:09 by pcorreia          #+#    #+#             */
/*   Updated: 2019/11/18 14:47:08 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if(s && fd)
	{
		while (s[i])
			i++;
		write(fd, s, i);
		write(fd, "\n", 1);
	}
}
