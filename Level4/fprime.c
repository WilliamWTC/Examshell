/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:39:09 by lmabitse          #+#    #+#             */
/*   Updated: 2019/09/06 12:43:48 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int n)
{
	int i;

	i = 2;
	while (i <= n)
	{
		if (n % i == 0)
		{
			printf("%i", i);
			n /= i;
			i = 1;
			if (n == 1)
				return ;
			else
				printf("*");
		}
		i++;
	}
	return ;
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");

	return (0);
}
