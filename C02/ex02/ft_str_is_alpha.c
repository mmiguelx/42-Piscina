/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:47:13 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/14 18:12:10 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_str_is_alpha(char *str)
{
	int n;
	int i;

	n = ft_strlen(str);
	i = 0;
	if (str[0] == '\0')
		return (1);
	else
		while (i < n)
		{
			if ((str[i] >= 'a' && str[i] <= 'z') ||
					(str[i] >= 'A' && str[i] <= 'Z'))
				i++;
			else
				return (0);
		}
	return (1);
}
