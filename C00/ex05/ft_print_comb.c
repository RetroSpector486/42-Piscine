/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:42:18 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/15 11:56:22 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	d;
	int	e;
	int	f;

	d = '0';
	while (d <= '7')
	{
		e = d + 1;
		while (e <= '8')
		{
			f = e + 1;
			while (f <= '9')
			{
				write(1, &d, 1);
				write(1, &e, 1);
				write(1, &f, 1);
				if (d != '7')
					write(1, ", ", 2);
				f++;
			}
			e++;
		}
		d++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
