/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swoman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:32:32 by swoman            #+#    #+#             */
/*   Updated: 2019/04/12 15:43:32 by swoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i <= argc)
	{
		while (argv[i])
		{
			write(1, &argv[i], 1);
			argv[i]++;
		}
		i++;
	}
}
