/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 07:53:50 by lmabitse          #+#    #+#             */
/*   Updated: 2019/08/22 08:01:40 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}

unsigned int	ft_atoi(char *s)
{
	int ret = 0;
	int i = 0;

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
	int i = 1;
	int base = 0;

	if (argc == 2)
	{
		base = ft_atoi(argv[1]);
		while (i <= 9)
		{
			printnbr(i);
			write(1, " x ", 3);
			printnbr(base);
			write(1, " = ", 3);
			printnbr(i * base);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
