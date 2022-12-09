/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:18:28 by mgeisler          #+#    #+#             */
/*   Updated: 2022/12/02 18:54:33 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    getstart(char const *s1, char const *set)
{
    int start;
    
    start = 0;
    while (ft_strchr(set, s1[start]))
        start++;
    return (start);
}

int    getlen(char const *s1, char const *set)
{
    size_t end;

    end = ft_strlen(s1);
    while (ft_strrchr(set, s1[end]))
        end--;
    return (end - getstart(s1, set) + 1);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int     start;
    int     len;

    if (!set)
        return (ft_strdup(s1));
    if (!s1)
        return (0);
    start = getstart(s1, set);
    len = getlen(s1, set);
    return (ft_substr(s1, start, len));
}