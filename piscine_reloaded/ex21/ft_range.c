/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:55:42 by swoman            #+#    #+#             */
/*   Updated: 2019/04/19 19:55:51 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	arr[i] = '\0';
	return (arr);
}
