/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:09:57 by swoman            #+#    #+#             */
/*   Updated: 2019/04/12 15:11:44 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &str, 1);
		str++;
	}
}