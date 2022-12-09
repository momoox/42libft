/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:53:32 by mgeisler          #+#    #+#             */
/*   Updated: 2022/11/23 18:54:06 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *src)
{
    char    *dst;
    
    dst = malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (!dst)
        return (0);

    ft_strlcpy(dst, src, ft_strlen(src) + 1);
    dst[ft_strlen(src)] = '\0';
    return (dst);
}