/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 14:19:31 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/17 15:56:55 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	solve(int grid[4][4], int clues[16], int pos)
{
	int	row;
	int	col;
	int	val;

	if (pos == 16)
		return (check_all(grid, clues));
	row = pos / 4;
	col = pos % 4;
	val = 1;
	while (val <= 4)
	{
		if (is_valid(grid, row, col, val))
		{
			grid[row][col] = val;
			if (solve(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}
