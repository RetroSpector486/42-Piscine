/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:51:19 by kbolzon           #+#    #+#             */
/*   Updated: 2022/02/01 13:05:45 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (i));
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
int main(void)
{
	int min;
	int max;
	int *tab;
	int size;
	int i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
