/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 21:12:47 by swoman            #+#    #+#             */
/*   Updated: 2019/04/26 21:38:26 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;

	while (n--)
	{
		if (str1 == str2 && str2 == '\0')
			return (0);
		if (str1 != str2)
			return (str1 > str2) ? (str1 - str2) : (str2 - str1);
	}
	return (0);
}
