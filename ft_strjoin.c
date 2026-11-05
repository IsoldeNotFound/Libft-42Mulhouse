/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:04:34 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/05 13:24:52 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(int size, char **strs, char*sep)
{
	char	*str;
	int		i;
	int		total;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	if (i != 0)
		total += (i - 1) * ft_strlen(sep);
	str = (char *) ft_calloc(total, sizeof(char) + 1);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strlcat(str, strs[i], ft_strlen(strs[i]));
		i++;
		if (i < size)
			ft_strlcat(str, sep, ft_strlen(sep));
	}
	return (str);
}
