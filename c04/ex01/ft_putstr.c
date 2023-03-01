/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:49:26 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/24 10:42:07 by kbolzon          ###   ########.fr       */
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

/*
int	main(void)
{
	ft_putstr("Hello World");
}*/
