/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:59:54 by swoman            #+#    #+#             */
/*   Updated: 2019/05/01 17:40:12 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*str;
	char	*res;
	int		count;

	count = 0;
	*str = *src;
	res = src;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	dest = (char*)malloc(sizeof(*src) * (int)count);
	if (dest == NULL)
		return (NULL);
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (res);
}
