/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbolzon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:42:22 by kbolzon           #+#    #+#             */
/*   Updated: 2022/01/26 13:07:01 by kbolzon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0' && (s < nb))
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

/*
int main(void)
{
	char str[14] = "I want another";
	char find[14] = "I want ";

	printf("result is: %s \n",ft_strncat(find, str, 8));
	return (0);
}*/
