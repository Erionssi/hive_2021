/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:26:06 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/02 11:27:07 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	else if (nb < 0)
		ft_putchar('-');
	if (nb < 0)
		ft_putchar(((nb % 10) * -1) + '0');
	else
		ft_putchar((nb % 10) + '0');
}

int	main(void)
{
	int	test[] = {1, 2, 3, 4, 5, 6, 7, 9};

	ft_foreach(test, 8, &ft_putnbr);
	return (0);
}
