/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:15:36 by mgeisler          #+#    #+#             */
/*   Updated: 2022/12/15 18:54:02 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	str = malloc(sizeof(char) * len(n) + 1);
	if (!str)
		return(NULL);
	if (n < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (n != 0)
		str[i] = n;
	return (str);
}