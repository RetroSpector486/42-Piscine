/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:26:05 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/19 15:02:00 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 1;
	b = 2;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a : %d, b : %d\n", a, b);
}*/
