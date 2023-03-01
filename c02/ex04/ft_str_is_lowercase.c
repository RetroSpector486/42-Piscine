/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:23:04 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/23 12:16:36 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str [i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	fputs(ft_str_is_lowercase("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("abcdfodfhjojrimvim") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("dhfjdfhdkfhAdhfjeh") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("adcjidjdcidjidcVIM") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_lowercase("3243294329p[34343]") ? "true\n" : "false\n", stdout);
}*/
