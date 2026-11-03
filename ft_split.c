/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:42:52 by clstorre          #+#    #+#             */
/*   Updated: 2026/09/23 11:42:52 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
		i++;
	return (i);
}

char	*ft_word_dup(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = ft_strlen_sep(str, charset);
	word = malloc(sizeof(char *) * (len + 1));
	if (!word)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;

	res = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			res[j] = ft_word_dup(&str[i], charset);
			j++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	res[j] = 0;
	return (res);
}
