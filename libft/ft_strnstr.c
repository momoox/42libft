/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:52:25 by mgeisler          #+#    #+#             */
/*   Updated: 2022/11/29 21:33:46 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (j < len && big[j])
	{
//j + i au lieu d'une incré pour garder j au mm point en dehors du while
		while ((little[i] == big[j + i]) && j + i < len)
		{
// i+1 pour atteindre le \0
			if (little[i + 1] == '\0')
				return (&*(char *)big + j);
			i++;
		}
		i = 0;
		j++;
	}
	return (0);
}
