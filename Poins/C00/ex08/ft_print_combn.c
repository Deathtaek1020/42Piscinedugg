/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deathtaek <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:17:33 by deathtaek         #+#    #+#             */
/*   Updated: 2023/11/17 23:40:57 by deathtaek        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	tab_write(char *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &tab[i], 1);
		i++;
	}
	if (tab[0] != '0' + (10 - n))
	{
		write(1, ", ", 2);
	}
}

void	backtrack(int i, int start, char *tab, int n)
{
	int	a;
	int	ch;

	if (i == n)
	{
		tab_write(tab, n);
		return ;
	}
	a = start;
	while (a < 10)
	{
		ch = '0' + a;
		tab[i] = ch;
		backtrack(i + 1, a + 1, tab, n);
		a++;
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	tab[10];

	i = 0;
	while (i < 10)
	{
		tab[i] = 0;
		i++;
	}
	if (n < 10 && n > 0)
	{
		backtrack(0, 0, tab, n);
	}
}
