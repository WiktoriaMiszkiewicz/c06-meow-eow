/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_peint_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:24:43 by kdrazek           #+#    #+#             */
/*   Updated: 2024/10/16 12:24:45 by kdrazek          ###   ########.fr       */
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
	wypisz(argv[0]);
	(void)argc;
	return (0);
}
