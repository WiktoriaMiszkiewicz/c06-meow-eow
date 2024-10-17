/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:27:41 by kdrazek           #+#    #+#             */
/*   Updated: 2024/10/16 14:27:42 by kdrazek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wypisz(char *a)
{
	while (*a)
	{
		write(1, a, 1);
		a++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i != argc)
	{
		wypisz(argv[i]);
		i++;
	}
	return (0);
}
