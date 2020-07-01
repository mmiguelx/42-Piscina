/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:12:15 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/14 18:23:54 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int lenght;

	lenght = 0;
	while (*str != '\0')
	{
		lenght++;
		str++;
	}
	return (lenght);
}

char	*ft_strlowcase(char *str)
{
	int n;
	int i;

	n = ft_strlen(str);
	i = 0;
	while (i < n)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	str = ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
				((str[i - 1] > 0 && str[i - 1] < 48) ||
				(str[i - 1] > 57 && str[i - 1] < 65) ||
				(str[i - 1] > 90 && str[i - 1] < 97) ||
				str[i - 1] > 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
