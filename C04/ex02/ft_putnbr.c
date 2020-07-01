/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 23:23:00 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/21 00:37:11 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long	nb_aux;
	int		storage[10];
	int		i;

	nb_aux = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb_aux = nb_aux * (-1);
	}
	if (nb_aux > 9)
	{
		i = 0;
		while (nb_aux > 0)
		{
			storage[i] = (nb_aux % 10);
			nb_aux = nb_aux / 10;
			i++;
		}
		while (--i >= 0)
			put_char(storage[i] + '0');
	}
	else
		put_char(nb_aux + '0');
}
