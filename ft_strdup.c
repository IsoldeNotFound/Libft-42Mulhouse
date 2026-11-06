/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:03:40 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/06 00:54:42 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*p;
	size_t	len;

	len = ft_strlen(src) + 1;
	p = malloc(len);
	if (!p)
		return (NULL);
	ft_strlcpy(p, src, len);
	return (p);
}
