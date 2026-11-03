/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:03:30 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/03 12:22:33 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
				return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("jawhduawhdWEAHDAWHDAWEJA"));
// 	return 0;
// }