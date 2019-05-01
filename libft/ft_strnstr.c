/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 20:24:56 by swoman            #+#    #+#             */
/*   Updated: 2019/05/01 20:29:14 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *buf;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len >= 0)
	{
		if (*haystack == *needle)
		{
			buf = haystack;
			while (*haystack == *needle && *needle && len >= 0)
			{
				haystack++;
				needle++;
				len--;
				if (*needle == '\0')
					return ((char *)buf);
			}
		}
		else
		{
			haystack++;
			len--;
		}
	}
	return (NULL);
}


#include <string.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
        int i;
        size_t needle_len;

        if (0 == (needle_len = strnlen(needle, len)))
                return (char *)haystack;

        for (i=0; i<=(int)(len-needle_len); i++)
        {
                if ((haystack[0] == needle[0]) &&
                        (0 == strncmp(haystack, needle, needle_len)))
                        return (char *)haystack;

                haystack++;
        }
        return NULL;
}