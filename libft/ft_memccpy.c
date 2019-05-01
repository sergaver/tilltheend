/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 12:19:24 by swoman            #+#    #+#             */
/*   Updated: 2019/05/01 17:37:58 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char *)src)[i] == c)
		{
			((char*)dst)[i] = ((char *)src)[i];
			return (&((char *)dst)[i + 1]);
		}
		else
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (NULL);
}
