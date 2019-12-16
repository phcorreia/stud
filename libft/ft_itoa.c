/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:15:50 by pcorreia          #+#    #+#             */
/*   Updated: 2019/12/16 13:33:46 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_char(long int n)
{
	int			i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int			i;
	char		*nb;
	long int	nbr;

	i = 0;
	nbr = n;
	if (n < 0)
	{
		i += 1;
		nbr = -nbr;
	}
	i += nb_char(nbr);
	if (i == 0)
		i = 1;
	if (!(nb = ft_calloc(i + 1, sizeof(char))))
		return (NULL);
	nb[0] = '-';
	if (n == 0)
		nb[0] = '0';
	while (nbr > 0)
	{
		nb[--i] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (nb);
}
