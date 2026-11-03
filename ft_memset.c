/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:27:52 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/03 12:46:26 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memset(void *s, int c, long n)
{
    int i;

    i = 0;
    if (c > 255 || c < 0)
    while (i < n)
    {
        s[i] = c;
    }
    return s;
}
