/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 23:08:13 by kkhassin          #+#    #+#             */
/*   Updated: 2018/09/02 23:25:54 by kkhassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
		write (1, &c, 1)
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int main(int argc, const char *argv[])
{
	int i;

	i = -100;

	while (i != 500)
	{
			ft_putnbr(i);
			ft_putchar(' ');
			i+= 50;
	}
	return 0;
}
