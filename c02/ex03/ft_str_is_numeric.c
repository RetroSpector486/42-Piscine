/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:59:41 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/24 14:25:24 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
		{
			return (0);
		}
		++i;
	}
	return (1);
}

/*int	main(void)
{
	fputs(ft_str_is_numeric("") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_numeric("123456789012383475") ? "true\n" : "false\n", stdout);
	fputs(ft_str_is_numeric("2128483884838834^3") ? "true\n" : "false\n", stdout);
}*/
