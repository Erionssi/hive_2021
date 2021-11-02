/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:50:45 by jturunen          #+#    #+#             */
/*   Updated: 2021/10/29 12:29:46 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;
	printf("Original number one %d\n", a);
	printf("Original number two %d\n", b);
	ft_swap(&a, &b);
	printf("Flipped number one %d\n", a);
	printf("Flipped number two %d\n", b);
	return (0);
}
