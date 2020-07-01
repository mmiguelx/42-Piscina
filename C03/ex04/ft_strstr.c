/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:37:12 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/24 12:38:42 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i++ < (n - 1))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*place_holder;
	int		n;

	n = ft_strlen(to_find);
	if (n == 0)
		return (str);
	else
	{
		while (*str != '\0')
		{
			if (*str == *to_find)
			{
				place_holder = str;
				if (ft_strncmp(str, to_find, n) == 0)
					return (place_holder);
			}
			str++;
		}
	}
	return (0);
}
