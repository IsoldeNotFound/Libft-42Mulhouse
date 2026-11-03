/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:54:06 by clstorre          #+#    #+#             */
/*   Updated: 2026/09/10 17:54:08 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test[] = "dawdwaEEEWWW545454";
// 	ft_strlowcase(test);
// 	printf("%s\n", test);
// 	return 0;
// }s