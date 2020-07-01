/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 22:20:19 by mpernia-          #+#    #+#             */
/*   Updated: 2019/10/14 15:28:40 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int *p1;
	int i;

	i = 0;
	p1 = tab + size - 1;
	while (i < (size / 2))
	{
		ft_swap(p1, tab);
		tab++;
		p1--;
		i++;
	}
}
