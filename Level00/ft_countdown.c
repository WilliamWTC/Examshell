/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 10:33:30 by lmabitse          #+#    #+#             */
/*   Updated: 2019/07/24 10:49:16 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main()
{
	//First way

	write(1, "9876543210\n", 11);

	//Second Way
	
	int i = '9';

	while (i >= '0')
		{
			write(1, &i, 1);
			i--;
		}
		write(1, "\n", 1);
	return (0);
}
