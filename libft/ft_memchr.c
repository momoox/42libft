/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:29:06 by mgeisler          #+#    #+#             */
/*   Updated: 2022/11/14 20:53:48 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memb, int search, size_t size)
{
	size_t			i;
	unsigned char	srch;
	unsigned char	*str;

	i = 0;
	srch = (unsigned char) search;
	str = (unsigned char *) memb;
	while (i < size)
	{
		if (str[i] == srch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
