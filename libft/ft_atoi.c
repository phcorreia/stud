/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:00:53 by pcorreia          #+#    #+#             */
/*   Updated: 2019/11/22 11:38:29 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *num)
{
	int i;
	int sign;
	int res;

	i = 0;
	res = 0;
	sign = 1;
	while ((num[i] >= 8 && num[i] <= 13) || num[i] == ' ')
		i++;
	if (num[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (num[i] == '+')
		i++;
	while (num[i] >= '0' && num[i] <= '9')
	{
		res = res * 10 + num[i] - '0';
		i++;
	}
	return (res * sign);
}
