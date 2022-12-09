/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:29:07 by mgeisler          #+#    #+#             */
/*   Updated: 2022/11/14 21:50:45 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int srch)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (str[i] != (char)srch && i > 0)
		i--;
	if (str[i] == (char)srch)
		return (&*(char *)str + i);
	return (0);
}
