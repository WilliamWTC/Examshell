/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 09:03:59 by lmabitse          #+#    #+#             */
/*   Updated: 2019/08/22 09:11:15 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}

int		main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		write(1, "0", 1);
	else if (argc > 1)
	{
		while (argv[i])
			i++;
		printnbr(i - 1);
	}
	write(1, "\n", 1);

	return (0);
}
