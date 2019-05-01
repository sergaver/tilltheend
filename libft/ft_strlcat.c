/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 18:01:30 by swoman            #+#    #+#             */
/*   Updated: 2019/05/01 19:14:28 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;
	size_t count;

	while (dst[len] && len < size)
		len++;
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < size)
		dst[len] = '\0';
	while (src[count] != '\0')
		count++;
	return (i + count);
}
