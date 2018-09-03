/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 23:01:22 by kkhassin          #+#    #+#             */
/*   Updated: 2018/09/03 16:49:21 by kkhassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		ft_putchar(alpha);
		alpha++;
	}
}
