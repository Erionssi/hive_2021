/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:32:18 by jturunen          #+#    #+#             */
/*   Updated: 2021/10/29 13:44:38 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = nb;
	if (nb > 12)
		return (0);
	while (x > 1)
	{
		nb = nb * (x - 1);
		x--;
	}
	return (nb);
}
