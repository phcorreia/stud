/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 15:45:53 by pcorreia          #+#    #+#             */
/*   Updated: 2019/11/22 16:48:33 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iscset(char b, char c)
{
	if (b == c)
		return (1);
	return (0);
}

static int	count(const char *s, char c)
{
	int		i;
	int		nbword;

	i = 0;
	if (iscset(s[i], c) || !s)
		nbword = 0;
	else
		nbword = 1;
	while (s[i])
	{
		if (iscset(s[i], c) && s[i + 1] && iscset(s[i + 1], c) == 0)
			nbword++;
		i++;
	}
	return (nbword);
}

static char	*wbyw(const char *s, char c)
{
	char	*word;
	int		nbchar;
	int		i;

	i = 0;
	nbchar = 0;
	while (iscset(s[nbchar], c) == 0 && s[nbchar])
		nbchar++;
	if (!(word = ft_calloc(nbchar + 1, sizeof(char))))
		return (0);
	while (i < nbchar)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

static char	**freem(char **str, int i)
{
	int		j;

	j = 0;
	while (j < i)
	{
		free(str[j]);
		j++;
	}
	free(str);
	return (0);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		nbstr;
	char	**fstr;

	i = 0;
	j = 0;
	if (s == '\0')
		return (0);
	nbstr = count(s, c);
	if (!(fstr = ft_calloc(nbstr + 1, sizeof(char *))))
		return (0);
	while (i < nbstr)
	{
		while (iscset(s[j], c) && s[j])
			j++;
		fstr[i] = wbyw(&s[j], c);
		if (wbyw(&s[j], c) == 0)
			return (freem(fstr, i));
		while (iscset(s[j], c) == 0 && s[j])
			j++;
		i++;
	}
	fstr[i] = 0;
	return (fstr);
}
