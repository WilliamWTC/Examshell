/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 09:19:47 by lmabitse          #+#    #+#             */
/*   Updated: 2019/08/22 09:30:12 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int max;
	int lcm = 0;
	int i;
	int av1 = a;
	int av2 = b;

	if (av1 == 0 || av2 == 0)
		return(0);
	if (av1 > av2)
	{
		max = av1;
		i = av1;
	}
	else
	{
		max = av2;
		i = av2;
	}
	while (1)
	{
		if (max % av1 == 0 && max % av2 == 0)
		{
			lcm = max;
			break;
		}
		max += i;
	}
	return ((unsigned int) lcm);
}

#include <stdio.h>

int		main()
{
	printf("%d", lcm(1, 0));
	printf("\n%d", lcm(5, 2));

	return (0);
}
