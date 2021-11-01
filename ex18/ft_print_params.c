/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:26:28 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/01 14:50:13 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	letter;
	int	word;

	letter = 0;
	word = 1;
	while (word < argc)
	{
		while (argv[word][letter] != 0)
		{
			ft_putchar(argv[word][letter]);
			letter++;
		}
		letter = 0;
		ft_putchar('\n');
		word++;
	}
	return (0);
}
