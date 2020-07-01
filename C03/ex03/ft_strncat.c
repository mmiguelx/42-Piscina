/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:20:02 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/16 22:54:44 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*dest_aux;
	char			*src_aux;

	dest_aux = dest;
	src_aux = src;
	i = -1;
	while (*dest_aux != '\0')
		dest_aux++;
	if (nb > 0)
	{
		while (*src_aux != '\0' && ++i < nb)
		{
			*dest_aux = *src_aux;
			dest_aux++;
			src_aux++;
		}
	}
	*dest_aux = '\0';
	return (dest);
}
