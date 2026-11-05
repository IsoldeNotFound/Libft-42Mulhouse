/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:03:40 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/05 13:42:42 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*p;
	size_t	len;

	p = NULL;
	len = (ft_strlen(src) + 1);
	p = (char *)malloc(len * sizeof (char));
	ft_strlcpy(p, src, len);
	return (p);
}
