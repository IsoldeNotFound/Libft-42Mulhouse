/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:25:02 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/04 16:36:54 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char       *d;
    const unsigned char *s;

    if (!dst && !src)
        return (NULL);
    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    if (s < d)
    {
        while (len--)
            d[len] = s[len];
    }
    else
    {
      ft_memcpy(dst, src, len);
    }
    return (dst);
}
