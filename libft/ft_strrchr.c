/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:32:39 by swoman            #+#    #+#             */
/*   Updated: 2019/05/01 19:40:36 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*buf;
	int		len;

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
