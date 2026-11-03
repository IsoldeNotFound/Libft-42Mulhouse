/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 12:47:36 by clstorre          #+#    #+#             */
/*   Updated: 2026/09/13 12:47:38 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1)
			s1++;
		if (*s2)
			s2++;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
// 	if (argc < 4)
// 	{
// 		printf("%s\n", "Mets 2 string et un nombre positif zebi");
// 		return (1);
// 	}
// 		if (atoi(argv[3]) < 0)
// 	{
// 		printf("%s\n", "Mets 2 string et un nombre positif zebi");
// 		return (1);
// 	}
// 	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
// 	return (0);
// }