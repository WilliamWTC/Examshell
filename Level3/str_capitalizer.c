/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 08:03:05 by lmabitse          #+#    #+#             */
/*   Updated: 2019/08/22 08:10:38 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\0'))
			s[i] -= 32;
		i++;
	}
	write(1, s, i);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i = 1;

	if (argc > 1)
	{
		while (argc > i)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);

	return (0);
}
