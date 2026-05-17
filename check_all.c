/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:49:54 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/17 17:50:00 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	countvisible(int *line, int size);

int	check_col_up(int grid[4][4], int *clues, int col)
{
	int	line[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[i][col];
		i++;
	}
	if (countvisible(line, 4) != clues[col])
		return (0);
	return (1);
}

int	check_col_down(int grid[4][4], int *clues, int col)
{
	int	line[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[3 - i][col];
		i++;
	}
	if (countvisible(line, 4) != clues[col + 4])
		return (0);
	return (1);
}

int	check_row_left(int grid[4][4], int *clues, int row)
{
	int	line[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][i];
		i++;
	}
	if (countvisible(line, 4) != clues[row + 8])
		return (0);
	return (1);
}

int	check_row_right(int grid[4][4], int *clues, int row)
{
	int	line[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][3 - i];
		i++;
	}
	if (countvisible(line, 4) != clues[row + 12])
		return (0);
	return (1);
}

int	checkall(int grid[4][4], int clues[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_col_up(grid, clues, i))
			return (0);
		if (!check_col_down(grid, clues, i))
			return (0);
		if (!check_row_left(grid, clues, i))
			return (0);
		if (!check_row_right(grid, clues, i))
			return (0);
		i++;
	}
	return (1);
}
