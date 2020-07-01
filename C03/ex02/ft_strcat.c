/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:50:56 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/16 20:24:43 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *dest_aux;
	char *src_aux;

	dest_aux = dest;
	src_aux = src;
	while (*dest_aux != '\0')
		dest_aux++;
	while (*src_aux != '\0')
	{
		*dest_aux = *src_aux;
		dest_aux++;
		src_aux++;
	}
	*dest_aux = '\0';
	return (dest);
}
