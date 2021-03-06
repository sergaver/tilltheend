/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:59:54 by swoman            #+#    #+#             */
/*   Updated: 2019/05/02 18:52:41 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	char	*str;
	char	*res;
	int		count;

	str = NULL;
	res = NULL;
	count = 0;
	*str = *s1;
	*res = *s1;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	dest = (char*)malloc(sizeof(*s1) * (int)count);
	if (dest == NULL)
		return (NULL);
	while (*s1)
	{
		*dest++ = *s1++;
	}
	*dest = '\0';
	return (res);
}
