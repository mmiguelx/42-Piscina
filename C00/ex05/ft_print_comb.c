/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:32:58 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/08 15:55:29 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(char n1, char n2, char n3)
{
	if (n1 < n2 < n3)
	{
		write(1, &n1, 1);
		write(1, &n2, 1);
		write(1, &n3, 1);
		if (n1 < '7')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char number1;
	char number2;
	char number3;

	number1 = '0';
	number2 = '1';
	number3 = '2';
	while (number1 <= '7')
	{
		while (number2 <= '8')
		{
			while (number3 <= '9')
			{
				write_comb(number1, number2, number3);
				number3++;
			}
			number2++;
			number3 = number2 + 1;
		}
		number1++;
		number2 = number1 + 1;
		number3 = number2 + 1;
	}
}
