/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:04:34 by clstorre          #+#    #+#             */
/*   Updated: 2026/09/15 17:22:44 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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
	str = (char *) malloc (total * sizeof(char) + 1);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		i++;
		if (i < size)
			str = ft_strcat(str, sep);
	}
	return (str);
}

// #include <stdio.h>
// int main (void)
// {
// 	char *mots[] = {"J'ai", "pas", "envie", "de", "retry"};
// 	printf("%s\n",ft_strjoin(5, mots, " "));
// 	return (0);
// }
