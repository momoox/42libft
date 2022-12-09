/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:29:16 by mgeisler          #+#    #+#             */
/*   Updated: 2022/12/02 18:52:08 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)search)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)search)
		return ((char *)&str[i]);  
	return (NULL);
}