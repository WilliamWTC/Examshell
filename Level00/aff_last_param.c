/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:08:11 by lmabitse          #+#    #+#             */
/*   Updated: 2019/07/24 09:12:48 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		int len = 0;

		while(argv[argc - 1][len])
			len++;
		write(1, argv[argc - 1], len);
	}
	write(1, "\n", 1);
	return (0);
}
