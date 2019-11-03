/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 07:46:48 by lmabitse          #+#    #+#             */
/*   Updated: 2019/07/31 08:05:30 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10 + '0');
	write(1, &n, 1);
}

int		main()
{
	int w = 1;

	while (w <= 100)
	{
		if (w % 3 == 0 && w % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (w % 5 == 0)
			write(1, "buzz", 4);
		else if (w % 3 == 0)
			write(1, "fizz", 4);
		else
			printnbr(w);
		write(1, "\n", 1);
		w++;
	}
	return (0);
}
