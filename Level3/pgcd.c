/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 08:15:44 by lmabitse          #+#    #+#             */
/*   Updated: 2019/08/22 08:22:20 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int min = 0;
	int i = 1;
	int cd = 0;
	int av1 = 0;
	int av2 = 0;

	if (argc == 3)
	{
		av1 = atoi(argv[1]);
		av2 = atoi(argv[2]);

		if (av1 > av2)
			min = av2;
		else
			min = av1;
		cd = 1;
		i = 1;
		while (i <= min)
		{
			if ((av1 % i) == 0 && (av2 % i) == 0)
				cd = i;
			i++;
		}
		printf("%i", cd);
	}
	printf("\n");

	return (0);
}
