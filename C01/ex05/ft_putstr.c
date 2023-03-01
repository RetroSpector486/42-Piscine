/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:26:45 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/19 15:02:48 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

/*int	main(void)
{
	ft_putstr("Hello");
}*/
