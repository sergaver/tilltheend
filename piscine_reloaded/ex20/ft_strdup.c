/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:49:47 by swoman            #+#    #+#             */
/*   Updated: 2019/04/19 19:54:21 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *res;

	res = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (res);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = (char *)malloc((sizeof(*dest) * (int)ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, src));
}
