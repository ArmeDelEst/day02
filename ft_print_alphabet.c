/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:28:09 by kkhassin          #+#    #+#             */
/*   Updated: 2018/09/02 16:37:44 by kkhassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_putchar(char c);

void ft_print_alphabet(void);
{
		int i;

		i = 'a';
		while (i <= 'z')
		{
				ft_putchar(i);
				i++;
		}
}
