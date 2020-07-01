/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:51:48 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/15 20:01:02 by mpernia-         ###   ########.fr       */
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

int		ft_str_is_printable(char *str)
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
			if ((str[i] >= 0 && str[i] <= 31) || str[i] >= 127)
				return (0);
			else
				i++;
		}
	return (1);
}
