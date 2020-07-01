/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:45:28 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/14 18:13:13 by mpernia-         ###   ########.fr       */
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

int		ft_str_is_numeric(char *str)
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
			if (str[i] >= '0' && str[i] <= '9')
				i++;
			else
				return (0);
		}
	return (1);
}
