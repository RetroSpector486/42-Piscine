/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:53:05 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/23 12:11:27 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	fputs(ft_str_is_uppercase("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("BCESDSDFGHIJKLM") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("ASBD") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("aDJEIJDIEGHONEY") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_uppercase("DJFFKJFKKFJaaa") ? "true\n" : "false\n", stdout);
}*/
