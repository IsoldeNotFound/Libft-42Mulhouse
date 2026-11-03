/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:13:14 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/03 16:53:43 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (i);
}