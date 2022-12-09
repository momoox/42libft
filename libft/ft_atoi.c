/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:39:34 by mgeisler          #+#    #+#             */
/*   Updated: 2022/11/17 18:24:46 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int n;
    int nb;

    i = 0;
    n = 1;
    nb = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' 
        || str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
        i++;
    if (str[i] == '-')
    {
        n *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (n * nb);
}