/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 20:24:56 by swoman            #+#    #+#             */
/*   Updated: 2019/05/02 18:37:25 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	c;
	char	sc;
	size_t	needlen;

	c = *needle++;
	if (c != '\0')
	{
		needlen = ft_strlen(needle);
		while (ft_strncmp(haystack, needle, needlen) != 0)
		{
			while (sc != c)
			{
				if (len-- < 1 || (sc = *haystack++) == '\0')
					return (NULL);
			}
			if (needlen > len)
				return (NULL);
		}
		haystack--;
	}
	return ((char *)haystack);
}
