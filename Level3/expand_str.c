/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 08:50:19 by lmabitse          #+#    #+#             */
/*   Updated: 2019/08/22 08:54:46 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int space = -1;
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				if (space == 1)
					write(1, "   ", 3);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			else if (space == 0)
				space = 1;
			i++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
