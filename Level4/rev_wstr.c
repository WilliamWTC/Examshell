/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:17:16 by lmabitse          #+#    #+#             */
/*   Updated: 2019/09/06 12:26:03 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_wstr(char *str, int first)
{
	int start;
	int i;

	i = 0;
	if (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (!str[i])
			return ;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		rev_wstr(&str[i], 0);
		write(1, &str[start], i - start);
		if (!first)
			write(1, " ", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1], 1);
	write(1, "\n", 1);

	return (0);
}
