/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:30:54 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/02 11:35:56 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			result++;
		i++;
	}
	return (result);
}
