/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:12:44 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/22 11:45:10 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "MAN ET TOUCH, PLUUS PLUSS de cHar0s$";

	printf("%s\n", ft_strlowcase(str));
	//printf("%s\n", ft_strlowcase("sjdijeijfieojfmdmekee?"));
	//printf("%s\n", ft_strlowcase("EIRIEJFIJDSMMMKSKSXUMS"));
	//printf("%s\n", ft_strlowcase("3289471839740127304973"));
	//printf("%s\n", ft_strlowcase("#*&*&#%(*#&$)##*&$%#$#"));
}*/
