/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deathtaek <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:31:58 by deathtaek         #+#    #+#             */
/*   Updated: 2023/11/19 15:36:20 by deathtaek        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;

	i = -1;
	if (min >= max)
		return (NULL);
	max -= min;
	t = malloc(max * sizeof(int));
	if (!t)
		return (NULL);
	while (++i < max)
		t[i] = min + i;
	return (t);
}
