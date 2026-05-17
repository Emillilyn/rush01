/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:10:19 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/17 17:54:56 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int grid[4][4], int row, int col, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == val)
			return (0);
		if (grid[i][col] == val)
			return (0);
		i++;
	}
	return (1);
}
