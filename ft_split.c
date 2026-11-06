/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <clstorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:42:52 by clstorre          #+#    #+#             */
/*   Updated: 2026/11/06 01:11:15 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	word_len(char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static int	fill_tab(char **tab, char *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = word_len(s + i, c);
		tab[w] = ft_substr(s, i, len);
		if (!tab[w])
		{
			while (w > 0)
				free(tab[--w]);
			return (0);
		}
		w++;
		i += len;
	}
	tab[w] = NULL;
	return (1);
}

char	**ft_split(char *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, s, c))
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}
