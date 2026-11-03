/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:13:14 by clstorre          #+#    #+#             */
/*   Updated: 2026/09/10 18:13:16 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// int main(void)
// {
// 	char desti[100000];
// 	char sourc[13] = "IHDYsduduchs";
// 	ft_strlcpy(desti, sourc, 10000);
// 	printf("%s\n", desti);
// 	return 0;
// }