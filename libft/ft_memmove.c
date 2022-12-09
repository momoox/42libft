/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:22:55 by mgeisler          #+#    #+#             */
/*   Updated: 2022/11/30 16:29:55 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	if (src > dest)
	{
		while (i < size)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	else
	{
		while (i != size)
		{
			*(char *)(dest + size - i - 1) = *(char *)(src + size - i - 1);
			i++;
		}
	}
	return (dest);
}