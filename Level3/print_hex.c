/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 08:40:56 by lmabitse          #+#    #+#             */
/*   Updated: 2019/08/22 08:48:14 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	if ((n % 16) < 10)
		n = (n % 16) + '0';
	else
		n = (n % 16) - 10 + 'a';
	write(1, &n, 1);
}

unsigned int	ft_atoi(char *s)
{
	int ret = 0;
	int i = 0;

	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\r')
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			return (0);
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
		ret = s[i++] - '0' + (ret * 10);
	return (ret);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);

	return (0);
}
