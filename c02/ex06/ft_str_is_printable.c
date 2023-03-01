/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 09:06:02 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/23 12:13:19 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	fputs(ft_str_is_printable("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_printable("OISHESHENCHEN") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_printable("aksNJNDJSPAIMON") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_printable("ASFH1") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_printable("DWDSDKAAALNSDa") ? "true\n" : "false\n", stdout);
}*/
