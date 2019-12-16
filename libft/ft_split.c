/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 15:45:53 by pcorreia          #+#    #+#             */
/*   Updated: 2019/12/16 17:12:14 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	count_word(const char *s, char c)
{
	int		count;
	int		word;
	count = 0;
	word = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (word == 0 && *s != c)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (count);
}
static int	ft_wordslen(const char *s, char c)
{
	int		i;
	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}
char		**ft_split(const char *s, char c)
{
	int		count;
	int		i;
	char	**tab;
	i = 0;
	count = count_word(s, c);
	if (!s)
		return (NULL);
	if (!(tab = malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	while (count--)
	{
		while (*s && *s == c)
			s++;
		if (!(tab[i] = ft_substr(s, 0, ft_wordslen(s, c))))
			return (NULL);
		s = s + ft_wordslen(s, c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
