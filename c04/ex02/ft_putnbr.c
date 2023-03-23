/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:23:52 by kmouradi          #+#    #+#             */
/*   Updated: 2022/09/11 13:20:24 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	x;

	x = nb;
	if (x < 0)
	{
		ft_putchar('-');
			x = -x;
	}
	if (x > 9)
		ft_putnbr(x / 10);
	ft_putchar((x % 10) + 48);
}
