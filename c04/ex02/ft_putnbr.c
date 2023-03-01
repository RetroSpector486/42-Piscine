/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:45:31 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/24 16:05:54 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else
	{
		i = nb;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar(i % 10 + 48);
}
/*
int main (void)
{
	ft_putnbr(42);
}*/
