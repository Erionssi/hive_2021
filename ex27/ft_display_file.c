/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:05:49 by jturunen          #+#    #+#             */
/*   Updated: 2021/11/02 13:43:21 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(int file_data)
{
	char	buffer;

	while (read(file_data, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int argc, char **argv)
{
	int	file_data;

	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	file_data = open(argv[1], O_RDONLY);
	display_file(file_data);
	close(file_data);
	return (0);
}
