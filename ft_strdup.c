/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 09:03:40 by clstorre          #+#    #+#             */
/*   Updated: 2026/09/15 09:03:42 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*p;

	p = NULL;
	p = (char *) malloc((ft_strlen(src) + 1) * sizeof (char));
	ft_strcpy(p, src);
	return (p);
}

// #include <stdio.h>
// int main (void)
// {
// 	char *s;

// 	s = ft_strdup("Coucouuu");
// 	printf("%s\n%c\n", s , s[8]);
// 	return (0);
// }