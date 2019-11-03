/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmabitse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 08:28:53 by lmabitse          #+#    #+#             */
/*   Updated: 2019/08/22 08:39:24 by lmabitse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnbr(int n)
{
	if (n >= 10)
		printnbr(n / 10);
	n =  (n % 10) + '0';
	write(1, &n, 1);
}

int		is_prime(int n)
{
	int i = 2;

	while (i < n)
	{
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

unsigned int	ft_atoi(char *s)
{
	int i = 0;
	int ret = 0;

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

void	add_prime_sum(int n)
{
	int i = 2;
	int sum = 0;

	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	printnbr(sum);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(ft_atoi(argv[1]));
	else
		write(1, "0", 1);
	return (0);
}
