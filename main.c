/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:50:50 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/17 17:54:54 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	grid[4][4];

	if (argc != 2 || !parse_clues(argv[1], clues))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	init_grid(grid);
	if (solve(grid, clues, 0))
	{
		print_grid(grid);
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
}
