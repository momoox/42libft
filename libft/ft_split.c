/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:31:58 by mgeisler          #+#    #+#             */
/*   Updated: 2022/12/05 16:54:24 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count(int i, int j, char const *s)
{
	i = 0;
	j = 0;

	while (s[i])
	{
		if (s[i] == " ")
			j++;
		i++;
	}
	return (j);
}



char **ft_split(char const *s, char c)
{
	char str;
	str = malloc(sizeof(char) * ft_strlen(s));
	if (!str)
		return (NULL);	
}