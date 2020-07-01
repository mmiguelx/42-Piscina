/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:02:08 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/07 20:18:36 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int number1;
	int number2;

	number1 = 0;
	number2 = 1;
	while (number1 <= 98)
	{
		while (number2 <= 99)
		{
			if (number1 < number2)
			{
				put_char((number1 / 10) + '0');
				put_char((number1 % 10) + '0');
				put_char(' ');
				put_char((number2 / 10) + '0');
				put_char((number2 % 10) + '0');
				if (number1 < 98)
					write(1, ", ", 2);
			}
			number2++;
		}
		number1++;
		number2 = number1 + 1;
	}
}
