/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 18:02:10 by swoman            #+#    #+#             */
/*   Updated: 2019/05/01 18:08:24 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strncat(char *s1, const char *s2, size_t n)
{
	size_t len;

	len = 0;
	while (*s1)
	{
		s1++;
	}
	while (*s2 && len <= n)
	{
		*s1 = *s2;
		s1++;
		s2++;
		len++;
	}
	*s1 = '\0';
	return (s1);
}
