/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:56:15 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/02 10:12:47 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	if (argv[1] == 0)
	{
		printf("Please, give an argument when running the program.\n");
		return (0);
	}
	printf("%d \n", ABS(atoi(argv[1])));
	return (0);
}
