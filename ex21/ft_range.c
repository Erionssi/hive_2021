/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:25:23 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/01 19:56:00 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	loop;

	if (min >= max)
		return (NULL);
	numbers = (int *)malloc(sizeof(*numbers) * (max - min));
	if (!numbers)
		return (NULL);
	loop = 0;
	while (min < max)
	{
		numbers[loop] = min;
		loop++;
		min++;
	}
	return (numbers);
}
