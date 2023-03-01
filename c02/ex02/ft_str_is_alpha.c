/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:48:14 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/21 12:29:50 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str [i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	fputs(ft_str_is_alpha("abcdefghijklmnopqrstu") ? "true" : "false", stdout);
	fputs(ft_str_is_alpha("abcdjklddskfjij4nfdjd") ? "true" : "false", stdout);
	fputs(ft_str_is_alpha("abcdcrkmfrij__']]]!ns") ? "true" : "false", stdout);
}*/
