/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:36:56 by frocha-b          #+#    #+#             */
/*   Updated: 2025/04/07 12:39:31 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	check_args(int argc)
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (-1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (-1);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	string[1414];
	int		bfr_size;

	if (check_args(argc) == -1)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	bfr_size = read(fd, string, 1413);
	string[bfr_size + 1] = '\0';
	while (bfr_size > 0)
	{
		write(1, &string, bfr_size);
		bfr_size = read(fd, string, 1413);
		string[bfr_size + 1] = '\0';
	}
	close(fd);
	return (0);
}
