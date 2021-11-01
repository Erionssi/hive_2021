/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:08:02 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/01 19:04:15 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		letter;
	int		size;
	char	*copy;

	size = 0;
	while (src[size])
		++size;
	copy = (char *)malloc(sizeof(*copy) * (size + 1));
	if (!copy)
		return (NULL);
	letter = 0;
	while (letter < size)
	{
		copy[letter] = src[letter];
		letter++;
	}
	copy[letter] = '\0';
	return (copy);
}
