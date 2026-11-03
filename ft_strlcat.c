/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:59:28 by clstorre          #+#    #+#             */
/*   Updated: 2026/09/14 10:59:29 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i] && i < size)
		i++;
	dest_len = i;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i < size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// #include <stdio.h>

// int main(void)
// {
// 	char dest[50] = "Hello";
// 	printf("%s\n", ft_strlcat(dest, " World!", 3));
// 	return (0);
// }