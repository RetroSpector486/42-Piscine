/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:52:51 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/19 15:02:24 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	printf("a : %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a : %d, b: %d\n", a, b);
}*/
