/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:21:55 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/23 12:14:04 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Le touch au b0rd de ma0n^";

	printf("%s\n", ft_strupcase(str));
	//printf("%s\n", ft_strupcase("asdfFFJJFFDEEFFEvvvxx?"));
	//printf("%s\n", ft_strupcase("DSJJDJSFJFSJJDJWWDDWDA"));
	//printf("%s\n", ft_strupcase("5413413480253840258483"));
	//printf("%s\n", ft_strupcase("&#%&#(%#&*!@((@*&$&%(%"));
}*/
