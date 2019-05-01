/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 12:53:38 by swoman            #+#    #+#             */
/*   Updated: 2019/05/01 17:40:41 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buf;
	int		i;
	size_t	length;

	length = len;
	i = 0;
	buf = (char *)malloc(sizeof(char *) * len);
	while (length--)
	{
		*(char *)&buf[i] = *(char *)&src[i];
		i++;
	}
	i = 0;
	while (len--)
	{
		*(char *)&dst[i] = *(char *)&buf[i];
		i++;
	}
	free(buf);
	return (dst);
}
