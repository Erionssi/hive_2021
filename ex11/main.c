/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:50:45 by jturunen          #+#    #+#             */
/*   Updated: 2021/10/29 13:26:36 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

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

	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter a number you want to divide with: ");
	scanf("%d", &b);
	ft_div_mod(a, b, &a, &b);
	printf("How many times could the number be divided: %d \n", a);
	printf("How much was left over after the dividing of the numbers: %d \n", b);
}
