/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clstorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:23:19 by clstorre          #+#    #+#             */
/*   Updated: 2026/09/10 17:23:29 by clstorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test[] = "dawdwaEEEWWW545454";
// 	ft_strupcase(test);
// 	printf("%s\n", test);
// 	return 0;
// }