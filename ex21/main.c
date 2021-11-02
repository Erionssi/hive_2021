/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:32:41 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/01 19:58:30 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*result;
	int	loop;
	int	mini;
	int	maxi;

	printf("Give first int: ");
	scanf("%d", &mini);
	printf("Give second int: ");
	scanf("%d", &maxi);
	result = ft_range(mini, maxi);
	loop = 0;
	while (loop < maxi - mini)
	{
		printf("%d ", result[loop]);
		loop++;
	}
	return (0);
}
