/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:18:28 by mgeisler          #+#    #+#             */
/*   Updated: 2022/12/15 17:14:44 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	isinset(char const *set, char const c)
// {
// 	while(*set)
// 	{
// 		if (*set == c)
// 			return (1);
// 		set++;
// 	}
// 	return (0);
// }

int	getstart(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (ft_strrchr(set, s1[start]))
		start++;
	return (start);
}

int	getlen(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (ft_strrchr(set, s1[end]))
		end--;
	return (end - getstart(s1, set) + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	len;

	if (!s1)
		return (0);
	if (!set || set[0] == 0)
		return (ft_strdup(s1));
	if (s1[0] == 0)
		return (ft_calloc(1, sizeof(char)));
	start = getstart(s1, set);
	len = getlen(s1, set);
	return (ft_substr(s1, start, len));
}
