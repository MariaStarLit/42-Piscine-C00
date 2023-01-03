/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:21:21 by mde-avel          #+#    #+#             */
/*   Updated: 2022/08/22 20:37:01 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	(void)ac;
	j = 1;
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			write (1, &av[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j++;
	}
}
