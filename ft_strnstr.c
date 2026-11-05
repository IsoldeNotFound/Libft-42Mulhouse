/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:51:29 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/05 10:54:15 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *src, const char *chr, size_t len)
{
    size_t i;
    size_t j;

    if (!*chr)
        return ((char *)src);
    i = 0;
    while (src[i] && i < len)
    {
        j = 0;
        while (chr[j] && src[i + j] == chr[j] && (i + j) < len)
            j++;
        if (!chr[j])
            return ((char *)&src[i]);
        i++;
    }
    return (NULL);
}

