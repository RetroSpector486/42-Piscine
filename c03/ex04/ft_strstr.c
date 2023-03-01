/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:29:24 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/23 14:48:10 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int main(void)
{
	char *str;
	char *to_find;

	str = "Honey";
	to_find = "eyy";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	to_find = "";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	to_find = "on";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	to_find = "ney";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	to_find = "H";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));

}*/
