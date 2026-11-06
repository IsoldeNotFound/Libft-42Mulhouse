/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:51:29 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/06 15:52:20 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *src, char *chr, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*chr)
		return ((char *)src);
	i = 0;
	while (i < len && src[i])
	{
		j = 0;
		while (i + j < len && chr[j] && src[i + j] == chr[j])
			j++;
		if (!chr[j])
			return ((char *)(src + i));
		i++;
	}
	return (NULL);
}
