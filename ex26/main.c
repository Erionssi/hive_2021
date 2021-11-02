/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:31:11 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/02 11:38:16 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			str++;
			continue ;
		}
		return (0);
	}
	return (1);
}

int	main(void)
{
	char	**string;
	int		i;
	int		result;

	i = 0;
	string = (char **)malloc(sizeof(char *) * 4);
	string[0] = "aafd";
	string[1] = "gdas";
	string[2] = "gasC";
	string[3] = 0;
	while (i < 3)
	{
		result = ft_count_if(string, &ft_str_is_lowercase);
		i++;
	}
	printf("How many strings were lowercase\n %d", result);
	return (0);
}
