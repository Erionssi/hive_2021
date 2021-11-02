/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:31:14 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/01 18:55:15 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *str);

int	main(void)
{
	char	*source;
	char	*copy;

	source = "good jobben";
	copy = ft_strdup(source);
	printf("%s \n", source);
	printf("%s \n", copy);
	return (0);
}
