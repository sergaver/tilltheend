/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:34:39 by swoman            #+#    #+#             */
/*   Updated: 2019/04/12 13:41:31 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int nb;

	i = nb;
	if (i < 0 || i >= 13)
		return (0);
	if (i > 1)
	{
		while (i > 1)
		{
			nb = nb * i;
			i--;
		}
	}
	if (i == 0 || i == 1)
		return (1);
	return (nb);

}
