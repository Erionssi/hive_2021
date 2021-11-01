/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:06:51 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/01 12:16:02 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	if (nb >= 1)
		return (nb * (ft_recursive_factorial(nb - 1)));
	else if (nb == 0)
		return (1);
	else
		return (0);
}
