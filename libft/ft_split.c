/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:31:58 by mgeisler          #+#    #+#             */
/*   Updated: 2022/12/15 18:01:42 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == 0 || s[i + 1] == c))
			words++;
		i++;
	}
	return (words);
}

size_t	lenword(const char *s, size_t i, char c)
{
	size_t	len;

	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	*cpyword(const char *s, size_t *i, char c, size_t len)
{
	char	*str;
	size_t	u;

	u = 0;
	while (s[*i] == c)
		(*i)++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (len)
	{
		str[u++] = s[(*i)++];
		len--;
	}
	str[u] = '\0';
	return (str);
}

char	**freeall(char **tab)
{
	size_t	j;

	j = 0;
	while (tab[j])
	{
		free(tab[j]);
		j++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t		i;
	size_t		j;
	char		**tab;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!tab)
		return (0);
	while (j < count(s, c))
	{
		tab[j++] = cpyword(s, &i, c, lenword(s, i, c));
		if (!tab[j - 1])
			return (freeall(tab));
	}
	tab[j] = 0;
	return (tab);
}
