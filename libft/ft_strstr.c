/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:41:33 by swoman            #+#    #+#             */
/*   Updated: 2019/05/01 20:22:43 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *buf;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			buf = haystack;
			while (*haystack == *needle && *needle)
			{
				haystack++;
				needle++;
				if (*needle == '\0')
					return ((char *)buf);
			}
		}
		else
			haystack++;
	}
	return (NULL);
}
