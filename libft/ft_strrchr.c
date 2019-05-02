/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:32:39 by swoman            #+#    #+#             */
/*   Updated: 2019/05/02 18:57:26 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*buf;
	int		len;

	buf = NULL;
	*buf = *s;
	len = 0;
	while (*buf)
	{
		buf++;
		len++;
	}
	while (len >= 0)
	{
		if (((char *)s)[len] == c)
			return (&((char *)s)[len]);
		else
			len--;
	}
	return (NULL);
}
