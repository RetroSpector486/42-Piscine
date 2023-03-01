/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:53:30 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/19 15:02:19 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
		*div = a / b;
		*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("a : %d, b : %d\n", a, b);
	printf("a : %d, b: %d, div : %d,  mod : %d\n", a, b, div, mod);
}*/
