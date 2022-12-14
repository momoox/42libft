/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:42:34 by mgeisler          #+#    #+#             */
/*   Updated: 2022/12/09 15:32:46 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t ecount, size_t esize)
{
	void	*str;

	str = malloc(ecount * esize);
	if (ecount == 0 || esize == 0)
		return (str);
	if (str == 0)
		return (0);
	ft_bzero(str, ecount * esize);
	return (str);
}
